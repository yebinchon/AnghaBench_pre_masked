
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct mg_connection {int dummy; } ;
typedef int mem ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char**,int,char const*,int ) ;
 int FUNC_2 (struct mg_connection*,char*,int) ;

int FUNC_3(struct mg_connection *VAR_1, const char *VAR_2, va_list VAR_3) {
  char VAR_4[VAR_0], *VAR_5 = VAR_4;
  int VAR_6;

  if ((VAR_6 = FUNC_1(&VAR_5, sizeof(VAR_4), VAR_2, VAR_3)) > 0) {
    FUNC_2(VAR_1, VAR_5, VAR_6);
  }
  if (VAR_5 != VAR_4 && VAR_5 != ((void*)0)) {
    FUNC_0(VAR_5);
  }

  return VAR_6;
}
