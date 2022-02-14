
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_document ;
typedef int fz_output ;
typedef int fz_context ;


 char* FUNC_0 (int *,char const*,int*,int*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int *,int) ;

__attribute__((used)) static int
FUNC_4(fz_context *VAR_0, pdf_document *VAR_1, fz_output *VAR_2, const char *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 int VAR_7;
 int VAR_8 = 0;

 if (!VAR_1)
  FUNC_1();

 VAR_7 = FUNC_2(VAR_0, VAR_1);
 while ((VAR_3 = FUNC_0(VAR_0, VAR_3, &VAR_5, &VAR_6, VAR_7)))
 {
  if (VAR_5 > VAR_6)
   VAR_4 = VAR_5, VAR_5 = VAR_6, VAR_6 = VAR_4;
  for (VAR_4 = VAR_5; VAR_4 <= VAR_6; VAR_4++)
   VAR_8 |= FUNC_3(VAR_0, VAR_1, VAR_2, VAR_4);
 }

 return VAR_8;
}
