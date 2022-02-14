
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int pdf_crypt ;
typedef int fz_context ;


 int FUNC_0 (char*,int,int,int ) ;
 int FUNC_1 (int *,char*) ;
 char* FUNC_2 (int *,char*,int,int*,int *,int,int,int *,int,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(fz_context *VAR_1, pdf_obj *VAR_2, int VAR_3, pdf_crypt *VAR_4, int VAR_5, int VAR_6)
{
 char VAR_7[1024];
 char *VAR_8;
 int VAR_9;
 int VAR_10 = 1;

 VAR_8 = FUNC_2(VAR_1, VAR_7, sizeof VAR_7, &VAR_9, VAR_2, VAR_3, VAR_10, VAR_4, VAR_5, VAR_6);
 FUNC_0(VAR_8, 1, VAR_9, VAR_0);
 if (VAR_8 != VAR_7)
  FUNC_1(VAR_1, VAR_8);
}
