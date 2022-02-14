
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_document ;
typedef int fz_context ;


 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (int *,char const*) ;
 int * FUNC_2 (int *,char*,int ) ;

__attribute__((used)) static fz_document *
FUNC_3(fz_context *VAR_0, const char *VAR_1)
{
 char VAR_2[2048];
 FUNC_0(VAR_2, VAR_1, sizeof VAR_2);
 return FUNC_2(VAR_0, VAR_2, FUNC_1(VAR_0, VAR_1));
}
