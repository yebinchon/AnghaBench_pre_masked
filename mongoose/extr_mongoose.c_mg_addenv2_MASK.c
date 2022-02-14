
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_cgi_env_block {int dummy; } ;


 char* FUNC_0 (char const*) ;
 int FUNC_1 (struct mg_cgi_env_block*,char*,char const*,char const*) ;

__attribute__((used)) static void FUNC_2(struct mg_cgi_env_block *VAR_0, const char *VAR_1) {
  const char *VAR_2;
  if ((VAR_2 = FUNC_0(VAR_1)) != ((void*)0)) FUNC_1(VAR_0, "%s=%s", VAR_1, VAR_2);
}
