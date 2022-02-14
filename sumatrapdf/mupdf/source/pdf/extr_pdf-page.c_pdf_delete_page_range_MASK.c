
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_document ;
typedef int fz_context ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int) ;

void
FUNC_2(fz_context *VAR_0, pdf_document *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4 = FUNC_0(VAR_0, VAR_1);

 if (VAR_3 < 0 || VAR_3 > VAR_4)
  VAR_3 = VAR_4+1;
 if (VAR_2 < 0)
  VAR_2 = 0;
 while (VAR_2 < VAR_3)
 {
  FUNC_1(VAR_0, VAR_1, VAR_2);
  VAR_3--;
 }
}
