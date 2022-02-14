
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,char*) ;
 float FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int *,int ) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 float FUNC_6 (int *,int *) ;

__attribute__((used)) static void
FUNC_7(fz_context *VAR_4, pdf_obj *VAR_5, float *VAR_6, float *VAR_7, float *VAR_8)
{
 pdf_obj *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_4(VAR_4, VAR_5, FUNC_0(VAR_3));
 if (FUNC_3(VAR_4, VAR_9) != 3)
  FUNC_1(VAR_4, VAR_1, "WhitePoint must be a 3-element array");

 for (VAR_10 = 0; VAR_10 < 3; VAR_10++)
 {
  VAR_6[VAR_10] = FUNC_2(VAR_4, VAR_9, VAR_10);
  if (VAR_6[VAR_10] < 0)
   FUNC_1(VAR_4, VAR_1, "WhitePoint numbers must be positive");
 }
 if (VAR_6[1] != 1)
  FUNC_1(VAR_4, VAR_1, "WhitePoint Yw must be 1.0");

 VAR_9 = FUNC_4(VAR_4, VAR_5, FUNC_0(VAR_0));
 if (FUNC_3(VAR_4, VAR_9) == 3)
 {
  for (VAR_10 = 0; VAR_10 < 3; VAR_10++)
  {
   VAR_7[VAR_10] = FUNC_2(VAR_4, VAR_9, VAR_10);
   if (VAR_7[VAR_10] < 0)
    FUNC_1(VAR_4, VAR_1, "BlackPoint numbers must be positive");
  }
 }

 VAR_9 = FUNC_4(VAR_4, VAR_5, FUNC_0(VAR_2));
 if (FUNC_5(VAR_4, VAR_9))
 {
  VAR_8[0] = FUNC_6(VAR_4, VAR_9);
  VAR_8[1] = VAR_8[2];
  if (VAR_8[0] <= 0)
   FUNC_1(VAR_4, VAR_1, "Gamma must be greater than zero");
 }
 else if (FUNC_3(VAR_4, VAR_9) == 3)
 {
  for (VAR_10 = 0; VAR_10 < 3; VAR_10++)
  {
   VAR_8[VAR_10] = FUNC_2(VAR_4, VAR_9, VAR_10);
   if (VAR_8[VAR_10] <= 0)
    FUNC_1(VAR_4, VAR_1, "Gamma must be greater than zero");
  }
 }
}
