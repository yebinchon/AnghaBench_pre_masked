
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int pdf_document ;
typedef int fz_context ;


 int FUNC_0 (int *,unsigned char*,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int,int ) ;
 int FUNC_3 (int *,char*,int) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_0, pdf_document *VAR_1, pdf_obj *VAR_2)
{
 unsigned char VAR_3[16];
 if (FUNC_1(VAR_0, VAR_2) >= 2)
 {

  FUNC_0(VAR_0, VAR_3, 16);
  FUNC_2(VAR_0, VAR_2, 1, FUNC_3(VAR_0, (char *)VAR_3, 16));
 }
}
