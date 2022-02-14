
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_cmap ;
typedef int fz_context ;


 int FUNC_0 (int *,unsigned int,int*) ;
 int FUNC_1 (int *,int *,unsigned int,int*,int) ;
 int FUNC_2 (int *,int *,unsigned int,unsigned int,int) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_0, pdf_cmap *VAR_1,
 unsigned int VAR_2, unsigned int VAR_3, unsigned int VAR_4, pdf_cmap *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7[8];
 int VAR_8;

 for (VAR_6 = 0; VAR_6 <= VAR_4; ++VAR_6)
 {
  VAR_8 = FUNC_0(VAR_5, VAR_2 + VAR_6, VAR_7);
  if (VAR_8 == 1)
   FUNC_2(VAR_0, VAR_1, VAR_3 + VAR_6, VAR_3 + VAR_6, VAR_7[0]);
  else if (VAR_8 > 1)
   FUNC_1(VAR_0, VAR_1, VAR_3 + VAR_6, VAR_7, VAR_8);
 }
}
