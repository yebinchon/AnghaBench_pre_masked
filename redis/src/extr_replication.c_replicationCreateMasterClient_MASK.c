
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int connection ;
struct TYPE_5__ {int authenticated; int reploff; int read_reploff; int flags; int replid; int * user; int conn; } ;
struct TYPE_4__ {int master_initial_offset; TYPE_2__* master; int master_replid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*,int) ;
 TYPE_1__ VAR_3 ;

void FUNC_4(connection *VAR_4, int VAR_5) {
    VAR_3.master = FUNC_1(VAR_4);
    if (VAR_4)
        FUNC_0(VAR_3.master->conn, VAR_2);
    VAR_3.master->flags |= VAR_0;
    VAR_3.master->authenticated = 1;
    VAR_3.master->reploff = VAR_3.master_initial_offset;
    VAR_3.master->read_reploff = VAR_3.master->reploff;
    VAR_3.master->user = ((void*)0);
    FUNC_2(VAR_3.master->replid, VAR_3.master_replid,
        sizeof(VAR_3.master_replid));


    if (VAR_3.master->reploff == -1)
        VAR_3.master->flags |= VAR_1;
    if (VAR_5 != -1) FUNC_3(VAR_3.master,VAR_5);
}
