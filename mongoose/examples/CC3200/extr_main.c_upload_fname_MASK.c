
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {int len; char* p; } ;
struct mg_connection {int * user_data; } ;


 int FUNC_0 (char*,intptr_t) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static struct mg_str FUNC_3(struct mg_connection *VAR_0,
                                  struct mg_str VAR_1) {
  struct mg_str VAR_2;
  char *VAR_3 = FUNC_1(VAR_1.len + 4);
  FUNC_2(VAR_3, "SL:", 3);
  FUNC_2(VAR_3 + 3, VAR_1.p, VAR_1.len);
  VAR_3[3 + VAR_1.len] = '\0';
  if (VAR_0->user_data != ((void*)0)) {
    intptr_t VAR_4 = (intptr_t) VAR_0->user_data;
    if (VAR_4 >= 0) {
      FUNC_0(VAR_3 + 3, VAR_4);
    }
  }
  VAR_2.len = VAR_1.len + 4;
  VAR_2.p = VAR_3;
  return VAR_2;
}
