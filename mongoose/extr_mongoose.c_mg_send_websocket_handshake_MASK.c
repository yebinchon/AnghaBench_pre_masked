
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {int dummy; } ;
struct mg_connection {int dummy; } ;


 struct mg_str VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (struct mg_connection*,int ,struct mg_str,struct mg_str,int ,struct mg_str,struct mg_str) ;

void FUNC_2(struct mg_connection *VAR_1, const char *VAR_2,
                                 const char *VAR_3) {
  struct mg_str VAR_4 = VAR_0;
  FUNC_1(
      VAR_1, FUNC_0(VAR_2), VAR_4 , VAR_4 ,
      FUNC_0(VAR_3), VAR_4 , VAR_4 );
}
