
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ server_debug; int sock; scalar_t__ no_ack; } ;
typedef TYPE_1__ libgdbr_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*,int) ;

int FUNC_2(libgdbr_t *VAR_0) {
 if (VAR_0) {
  if (VAR_0->no_ack) {
   return 0;
  }
  if (FUNC_1 (VAR_0->sock, "+", 1) < 0) {
   return -1;
  }
  if (VAR_0->server_debug) {
   FUNC_0 ("[sent ack]\n");
  }
  return 0;
 }
 return -1;
}
