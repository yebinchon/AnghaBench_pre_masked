
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ext; int * fcb; } ;
typedef TYPE_1__ rollback_extent ;
typedef int fcb ;
typedef int extent ;
typedef int LIST_ENTRY ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int ,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,TYPE_1__*) ;

void FUNC_3(LIST_ENTRY* VAR_3, fcb* VAR_4, extent* VAR_5) {
    rollback_extent* VAR_6;

    VAR_6 = FUNC_1(VAR_1, sizeof(rollback_extent), VAR_0);
    if (!VAR_6) {
        FUNC_0("out of memory\n");
        return;
    }

    VAR_6->fcb = VAR_4;
    VAR_6->ext = VAR_5;

    FUNC_2(VAR_3, VAR_2, VAR_6);
}
