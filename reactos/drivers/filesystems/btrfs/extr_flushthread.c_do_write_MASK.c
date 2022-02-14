
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int readonly; int root_file; } ;
typedef TYPE_1__ device_extension ;
typedef int PIRP ;
typedef int NTSTATUS ;
typedef int LIST_ENTRY ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int ,int *) ;

NTSTATUS FUNC_7(device_extension* VAR_1, PIRP VAR_2) {
    LIST_ENTRY VAR_3;
    NTSTATUS VAR_4;

    FUNC_2(&VAR_3);

    VAR_4 = FUNC_6(VAR_1, VAR_2, &VAR_3);

    if (!FUNC_3(VAR_4)) {
        FUNC_0("do_write2 returned %08x, dropping into readonly mode\n", VAR_4);
        VAR_1->readonly = 1;
        FUNC_1(VAR_1->root_file, VAR_0);
        FUNC_5(VAR_1, &VAR_3);
    } else
        FUNC_4(&VAR_3);

    return VAR_4;
}
