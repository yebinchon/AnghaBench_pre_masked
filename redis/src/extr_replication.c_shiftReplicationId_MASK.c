
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int replid; scalar_t__ second_replid_offset; int replid2; scalar_t__ master_repl_offset; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int ,char*,int ,scalar_t__,int ) ;

void FUNC_3(void) {
    FUNC_1(VAR_1.replid2,VAR_1.replid,sizeof(VAR_1.replid));







    VAR_1.second_replid_offset = VAR_1.master_repl_offset+1;
    FUNC_0();
    FUNC_2(VAR_0,"Setting secondary replication ID to %s, valid up to offset: %lld. New replication ID is %s", VAR_1.replid2, VAR_1.second_replid_offset, VAR_1.replid);
}
