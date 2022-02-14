
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {int dummy; } ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 size_t FUNC_0 (char*,int,int,int *) ;
 int FUNC_1 (struct mg_connection*,char*,size_t) ;

__attribute__((used)) static void FUNC_2(struct mg_connection *VAR_1, FILE *VAR_2) {
  char VAR_3[VAR_0];
  size_t VAR_4;
  while ((VAR_4 = FUNC_0(VAR_3, 1, sizeof(VAR_3), VAR_2)) > 0) {
    FUNC_1(VAR_1, VAR_3, VAR_4);
  }
}
