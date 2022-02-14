
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {int dummy; } ;
typedef int chunk_size ;


 int FUNC_0 (struct mg_connection*,char const*,int) ;
 int FUNC_1 (char*,int,char*,unsigned long) ;

void FUNC_2(struct mg_connection *VAR_0, const char *VAR_1, size_t VAR_2) {
  char VAR_3[50];
  int VAR_4;

  VAR_4 = FUNC_1(VAR_3, sizeof(VAR_3), "%lX\r\n", (unsigned long) VAR_2);
  FUNC_0(VAR_0, VAR_3, VAR_4);
  FUNC_0(VAR_0, VAR_1, VAR_2);
  FUNC_0(VAR_0, "\r\n", 2);
}
