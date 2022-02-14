
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fmt {int gen; int num; int crypt; } ;
typedef int pdf_obj ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,struct fmt*,char) ;
 int FUNC_1 (int *,int ,int ,int ,int ,struct fmt*,unsigned char*,int) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(fz_context *VAR_1, struct fmt *VAR_2, pdf_obj *VAR_3)
{
 unsigned char *VAR_4 = (unsigned char *)FUNC_2(VAR_1, VAR_3);
 int VAR_5 = FUNC_3(VAR_1, VAR_3);

 FUNC_0(VAR_1, VAR_2, '<');
 FUNC_1(VAR_1, VAR_2->crypt, VAR_2->num, VAR_2->gen, VAR_0, VAR_2, VAR_4, VAR_5);
 FUNC_0(VAR_1, VAR_2, '>');
}
