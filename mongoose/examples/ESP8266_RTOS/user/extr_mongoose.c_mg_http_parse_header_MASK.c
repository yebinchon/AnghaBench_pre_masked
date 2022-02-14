
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct mg_str*,char const*,char**,size_t) ;

int FUNC_2(struct mg_str *VAR_0, const char *VAR_1, char *VAR_2,
                         size_t VAR_3) {
  char *VAR_4 = VAR_2;

  int VAR_5 = FUNC_1(VAR_0, VAR_1, &VAR_4, VAR_3);

  if (VAR_4 != VAR_2) {

    FUNC_0(VAR_4);
    return 0;
  }

  return VAR_5;
}
