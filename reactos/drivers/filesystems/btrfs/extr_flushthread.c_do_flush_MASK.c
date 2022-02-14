
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tree_lock; int readonly; scalar_t__ need_write; } ;
typedef TYPE_1__ device_extension ;
typedef int NTSTATUS ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(device_extension* VAR_1) {
    NTSTATUS VAR_2;

    FUNC_1(&VAR_1->tree_lock, 1);

    if (VAR_1->need_write && !VAR_1->readonly)
        VAR_2 = FUNC_4(VAR_1, ((void*)0));
    else
        VAR_2 = VAR_0;

    FUNC_5(VAR_1);

    if (!FUNC_3(VAR_2))
        FUNC_0("do_write returned %08x\n", VAR_2);

    FUNC_2(&VAR_1->tree_lock);
}
