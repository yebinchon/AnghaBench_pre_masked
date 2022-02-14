
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct web_server_static_threaded_worker {int running; int max_sockets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (int *,int ,int ,int ,int ,int ,int ,int ,int *,int ,int ,int,void*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct web_server_static_threaded_worker* VAR_12 ;

void *FUNC_3(void *VAR_13) {
    VAR_12 = (struct web_server_static_threaded_worker *)VAR_13;
    VAR_12->running = 1;

    FUNC_1(VAR_2, VAR_13);

            FUNC_2(&VAR_0
                        , VAR_7
                        , VAR_8
                        , VAR_9
                        , VAR_10
                        , VAR_11
                        , VAR_4
                        , VAR_3
                        , ((void*)0)
                        , VAR_5
                        , VAR_6
                        , VAR_1 * 1000
                        , VAR_13
                        , VAR_12->max_sockets
            );

    FUNC_0(1);
    return ((void*)0);
}
