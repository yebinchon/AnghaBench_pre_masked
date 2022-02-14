
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {int * user_data; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct mg_connection*) ;

__attribute__((used)) static void FUNC_1(struct mg_connection *VAR_1) {
  struct mg_connection *VAR_2 = (struct mg_connection *) VAR_1->user_data;
  if (VAR_2 != ((void*)0)) {
    VAR_2->flags |= VAR_0;
    VAR_2->user_data = ((void*)0);
    VAR_1->user_data = ((void*)0);
  }
  FUNC_0("Closing connection %p\n", VAR_1);
}
