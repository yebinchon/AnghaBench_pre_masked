
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int pdf_document ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned char*,int) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (int *,int *,int ) ;
 int * FUNC_4 (int *,int ,int ,int) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static pdf_obj *
FUNC_7(fz_context *VAR_1, pdf_document *VAR_2)
{
 unsigned char VAR_3[32];
 pdf_obj *VAR_4;

 FUNC_1(VAR_1, VAR_3, FUNC_2(VAR_3));

 VAR_4 = FUNC_4(VAR_1, FUNC_6(VAR_1, VAR_2), FUNC_0(VAR_0), 2);
 FUNC_3(VAR_1, VAR_4, FUNC_5(VAR_1, (char *) VAR_3 + 0, FUNC_2(VAR_3) / 2));
 FUNC_3(VAR_1, VAR_4, FUNC_5(VAR_1, (char *) VAR_3 + 16, FUNC_2(VAR_3) / 2));

 return VAR_4;
}
