
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* master; TYPE_1__* cached_master; int replid; int master_repl_offset; int master_initial_offset; } ;
struct TYPE_3__ {int replid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *,int) ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(void) {


    VAR_1.master_initial_offset = VAR_1.master_repl_offset;
    FUNC_1(((void*)0),-1);


    FUNC_0(VAR_1.master->replid, VAR_1.replid, sizeof(VAR_1.replid));


    FUNC_3(VAR_1.master);
    VAR_1.cached_master = VAR_1.master;
    VAR_1.master = ((void*)0);
    FUNC_2(VAR_0,"Before turning into a replica, using my master parameters to synthesize a cached master: I may be able to synchronize with the new master with just a partial transfer.");
}
