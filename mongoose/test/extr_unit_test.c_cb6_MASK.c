
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_connection {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct mg_connection *VAR_2, int VAR_3, void *VAR_4) {
  (void) VAR_3;
  (void) VAR_4;
  VAR_2->flags |= VAR_0;
  VAR_2->flags |= VAR_1;
}
