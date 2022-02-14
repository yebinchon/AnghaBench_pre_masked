
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* ext; int * fcb; } ;
typedef TYPE_1__ rollback_extent ;
typedef int fcb ;
struct TYPE_7__ {int ignore; } ;
typedef TYPE_2__ extent ;
typedef int LIST_ENTRY ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int ,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(fcb* VAR_3, extent* VAR_4, LIST_ENTRY* VAR_5) {
    if (!VAR_4->ignore) {
        rollback_extent* VAR_6;

        VAR_4->ignore = 1;

        VAR_6 = FUNC_1(VAR_1, sizeof(rollback_extent), VAR_0);
        if (!VAR_6) {
            FUNC_0("out of memory\n");
            return;
        }

        VAR_6->fcb = VAR_3;
        VAR_6->ext = VAR_4;

        FUNC_2(VAR_5, VAR_2, VAR_6);
    }
}
