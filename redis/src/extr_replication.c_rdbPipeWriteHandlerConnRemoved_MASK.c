
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_2__ {scalar_t__ rdb_pipe_numconns_writing; int rdb_pipe_read; int el; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int *) ;
 int FUNC_1 (struct connection*) ;
 int FUNC_2 (struct connection*,int *) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (char*) ;

void FUNC_4(struct connection *VAR_4) {
    if (!FUNC_1(VAR_4))
        return;
    FUNC_2(VAR_4, ((void*)0));
    VAR_3.rdb_pipe_numconns_writing--;

    if (VAR_3.rdb_pipe_numconns_writing == 0) {
        if (FUNC_0(VAR_3.el, VAR_3.rdb_pipe_read, VAR_1, VAR_2,((void*)0)) == VAR_0) {
            FUNC_3("Unrecoverable error creating server.rdb_pipe_read file event.");
        }
    }
}
