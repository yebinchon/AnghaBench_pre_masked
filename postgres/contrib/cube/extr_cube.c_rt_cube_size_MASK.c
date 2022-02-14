
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int NDBOX ;


 double FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;

void
FUNC_5(NDBOX *VAR_0, double *VAR_1)
{
 double VAR_2;
 int VAR_3;

 if (VAR_0 == (NDBOX *) ((void*)0))
 {

  VAR_2 = 0.0;
 }
 else if (FUNC_2(VAR_0) || FUNC_1(VAR_0) == 0)
 {

  VAR_2 = 0.0;
 }
 else
 {
  VAR_2 = 1.0;
  for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_0); VAR_3++)
   VAR_2 *= FUNC_0(FUNC_4(VAR_0, VAR_3) - FUNC_3(VAR_0, VAR_3));
 }
 *VAR_1 = VAR_2;
}
