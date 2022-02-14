
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mg_connection*,char*,char*) ;
 int FUNC_1 (struct mg_connection*,int,char*) ;

__attribute__((used)) static void FUNC_2(struct mg_connection *VAR_2, int VAR_3,
                               void *VAR_4) {
  if (VAR_3 != VAR_0) return;
  FUNC_1(VAR_2, 200, "Content-Type: text/plain\r\n");
  FUNC_0(VAR_2, "%s", "Secret!");
  VAR_2->flags |= VAR_1;
  (void) VAR_4;
}
