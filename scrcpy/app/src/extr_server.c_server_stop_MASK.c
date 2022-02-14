
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct server {scalar_t__ server_socket; scalar_t__ video_socket; scalar_t__ control_socket; scalar_t__ process; scalar_t__ tunnel_enabled; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (scalar_t__,int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct server*) ;

void
FUNC_7(struct server *VAR_2) {
    if (VAR_2->server_socket != VAR_0) {
        FUNC_3(&VAR_2->server_socket);
    }
    if (VAR_2->video_socket != VAR_0) {
        FUNC_3(&VAR_2->video_socket);
    }
    if (VAR_2->control_socket != VAR_0) {
        FUNC_3(&VAR_2->control_socket);
    }

    FUNC_2(VAR_2->process != VAR_1);

    if (!FUNC_5(VAR_2->process)) {
        FUNC_1("Could not terminate server");
    }

    FUNC_4(VAR_2->process, ((void*)0));
    FUNC_0("Server terminated");

    if (VAR_2->tunnel_enabled) {

        FUNC_6(VAR_2);
    }
}
