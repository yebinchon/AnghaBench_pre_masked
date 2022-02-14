
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int pdf_document ;
typedef int fz_font ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int,int ) ;
 int FUNC_2 (int *,int *,char const* const) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *,int ,int *) ;
 int FUNC_5 (int *,int *,int ,int) ;
 int * FUNC_6 (int *,int *,int) ;

__attribute__((used)) static void
FUNC_7(fz_context *VAR_3, pdf_document *VAR_4, pdf_obj *VAR_5, fz_font *VAR_6, const char * const VAR_7[])
{
 int VAR_8[256];
 pdf_obj *VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_11 = 0;
 VAR_12 = 0;

 for (VAR_10 = 0; VAR_10 < 256; ++VAR_10)
 {
  int VAR_13 = 0;
  if (VAR_7[VAR_10])
  {
   VAR_13 = FUNC_2(VAR_3, VAR_6, VAR_7[VAR_10]);
  }
  if (VAR_13 > 0)
  {
   if (!VAR_11)
    VAR_11 = VAR_10;
   VAR_12 = VAR_10;
   VAR_8[VAR_10] = FUNC_1(VAR_3, VAR_6, VAR_13, 0) * 1000;
  }
  else
   VAR_8[VAR_10] = 0;
 }

 VAR_9 = FUNC_6(VAR_3, VAR_4, VAR_12 - VAR_11 + 1);
 FUNC_4(VAR_3, VAR_5, FUNC_0(VAR_2), VAR_9);
 for (VAR_10 = VAR_11; VAR_10 <= VAR_12; ++VAR_10)
  FUNC_3(VAR_3, VAR_9, VAR_8[VAR_10]);
 FUNC_5(VAR_3, VAR_5, FUNC_0(VAR_0), VAR_11);
 FUNC_5(VAR_3, VAR_5, FUNC_0(VAR_1), VAR_12);
}
