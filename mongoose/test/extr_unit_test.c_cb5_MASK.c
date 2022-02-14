
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {scalar_t__ user_data; } ;



 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static void FUNC_1(struct mg_connection *VAR_0, int VAR_1, void *VAR_2) {
  switch (VAR_1) {
    case 128:
      FUNC_0((char *) VAR_0->user_data, "%d", *(int *) VAR_2);
      break;
    default:
      break;
  }
}
