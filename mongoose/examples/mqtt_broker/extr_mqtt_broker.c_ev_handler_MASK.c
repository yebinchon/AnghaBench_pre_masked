
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mg_connection*,int,void*) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void FUNC_2(struct mg_connection *VAR_1, int VAR_2, void *VAR_3) {
  if (VAR_2 != VAR_0) FUNC_1("USER HANDLER GOT EVENT %d\n", VAR_2);

  FUNC_0(VAR_1, VAR_2, VAR_3);
}
