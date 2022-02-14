
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int Length; int Buffer; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ reparse_xattr; } ;
typedef TYPE_2__ fcb ;
typedef int ULONG ;
typedef int NTSTATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (TYPE_2__*,int *,int ,int,int *,int *) ;

ULONG FUNC_4(fcb* VAR_3) {
    ULONG VAR_4;

    if (VAR_3->type == VAR_1)
        return VAR_2;
    else if (VAR_3->type == VAR_0) {
        if (!VAR_3->reparse_xattr.Buffer || VAR_3->reparse_xattr.Length < sizeof(ULONG))
            return 0;

        FUNC_2(&VAR_4, VAR_3->reparse_xattr.Buffer, sizeof(ULONG));
    } else {
        NTSTATUS VAR_5;
        ULONG VAR_6;

        VAR_5 = FUNC_3(VAR_3, (uint8_t*)&VAR_4, 0, sizeof(ULONG), &VAR_6, ((void*)0));
        if (!FUNC_1(VAR_5)) {
            FUNC_0("read_file returned %08x\n", VAR_5);
            return 0;
        }
    }

    return VAR_4;
}
