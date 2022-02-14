
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int st_gid; int st_uid; } ;
struct TYPE_5__ {int * sd; TYPE_1__ inode_item; } ;
typedef TYPE_2__ fcb ;
typedef scalar_t__ ULONG ;
typedef int SECURITY_DESCRIPTOR ;
typedef int * PSID ;
typedef scalar_t__ NTSTATUS ;
typedef int ACL ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int * FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int *,int *,scalar_t__*) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,int,int *,int) ;
 scalar_t__ FUNC_7 (int *,int *,int) ;
 scalar_t__ FUNC_8 (int *,int *,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,int **) ;
 int * FUNC_11 () ;
 scalar_t__ FUNC_12 (int ,int **) ;

__attribute__((used)) static void FUNC_13(fcb* VAR_5) {
    NTSTATUS VAR_6;
    SECURITY_DESCRIPTOR VAR_7;
    ULONG VAR_8;
    ACL* VAR_9 = ((void*)0);
    PSID VAR_10 = ((void*)0), VAR_11 = ((void*)0);

    VAR_6 = FUNC_5(&VAR_7, VAR_2);

    if (!FUNC_3(VAR_6)) {
        FUNC_0("RtlCreateSecurityDescriptor returned %08x\n", VAR_6);
        goto end;
    }

    VAR_6 = FUNC_12(VAR_5->inode_item.st_uid, &VAR_10);
    if (!FUNC_3(VAR_6)) {
        FUNC_0("uid_to_sid returned %08x\n", VAR_6);
        goto end;
    }

    VAR_6 = FUNC_8(&VAR_7, VAR_10, 0);

    if (!FUNC_3(VAR_6)) {
        FUNC_0("RtlSetOwnerSecurityDescriptor returned %08x\n", VAR_6);
        goto end;
    }

    FUNC_10(VAR_5->inode_item.st_gid, &VAR_11);
    if (!VAR_11) {
        FUNC_0("out of memory\n");
        goto end;
    }

    VAR_6 = FUNC_7(&VAR_7, VAR_11, 0);

    if (!FUNC_3(VAR_6)) {
        FUNC_0("RtlSetGroupSecurityDescriptor returned %08x\n", VAR_6);
        goto end;
    }

    VAR_9 = FUNC_11();

    if (!VAR_9) {
        FUNC_0("out of memory\n");
        goto end;
    }

    VAR_6 = FUNC_6(&VAR_7, 1, VAR_9, 0);

    if (!FUNC_3(VAR_6)) {
        FUNC_0("RtlSetDaclSecurityDescriptor returned %08x\n", VAR_6);
        goto end;
    }



    VAR_8 = 0;


    VAR_6 = FUNC_4(&VAR_7, ((void*)0), &VAR_8);
    if (VAR_6 != VAR_4 && VAR_6 != VAR_3) {
        FUNC_0("RtlAbsoluteToSelfRelativeSD 1 returned %08x\n", VAR_6);
        goto end;
    }

    if (VAR_8 == 0 || VAR_6 == VAR_4) {
        FUNC_9("RtlAbsoluteToSelfRelativeSD said SD is zero-length\n");
        goto end;
    }

    VAR_5->sd = FUNC_1(VAR_1, VAR_8, VAR_0);
    if (!VAR_5->sd) {
        FUNC_0("out of memory\n");
        goto end;
    }

    VAR_6 = FUNC_4(&VAR_7, VAR_5->sd, &VAR_8);

    if (!FUNC_3(VAR_6)) {
        FUNC_0("RtlAbsoluteToSelfRelativeSD 2 returned %08x\n", VAR_6);
        FUNC_2(VAR_5->sd);
        VAR_5->sd = ((void*)0);
        goto end;
    }

end:
    if (VAR_9)
        FUNC_2(VAR_9);

    if (VAR_10)
        FUNC_2(VAR_10);

    if (VAR_11)
        FUNC_2(VAR_11);
}
