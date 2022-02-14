
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_server {int wl_display; int socket; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct sway_server *VAR_1) {
 FUNC_0(VAR_0, "Running compositor on wayland display '%s'",
   VAR_1->socket);
 FUNC_1(VAR_1->wl_display);
}
