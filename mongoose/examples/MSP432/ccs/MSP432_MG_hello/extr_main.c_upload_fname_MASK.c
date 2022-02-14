
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {int len; char* p; } ;
struct mg_connection {int dummy; } ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static struct mg_str FUNC_2(struct mg_connection *VAR_0,
                                  struct mg_str VAR_1) {
  struct mg_str VAR_2;
  VAR_2.len = VAR_1.len + 3;
  VAR_2.p = FUNC_0(VAR_2.len);
  FUNC_1((char *) VAR_2.p, "SL:", 3);
  FUNC_1((char *) VAR_2.p + 3, VAR_1.p, VAR_1.len);
  return VAR_2;
}
