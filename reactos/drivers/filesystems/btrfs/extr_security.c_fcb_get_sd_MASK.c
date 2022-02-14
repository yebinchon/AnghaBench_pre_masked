
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct _fcb {int sd; } ;
struct TYPE_5__ {int st_gid; int st_uid; } ;
struct TYPE_6__ {scalar_t__ type; int sd; TYPE_1__ inode_item; int inode; int subvol; int Vcb; } ;
typedef TYPE_2__ fcb ;
typedef int ULONG ;
typedef int SECURITY_SUBJECT_CONTEXT ;
typedef int * PSID ;
typedef int PIRP ;
typedef int NTSTATUS ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int *,int) ;
 int VAR_4 ;
 int FUNC_6 (int ,int *,void**,int *,int,int ,int *,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (int ,int ,int ,int ,int ,int **,int *,int ) ;
 int FUNC_10 (int ,int **) ;
 int FUNC_11 (int ,int **) ;

void FUNC_12(fcb* VAR_5, struct _fcb* VAR_6, bool VAR_7, PIRP VAR_8) {
    NTSTATUS VAR_9;
    PSID VAR_10 = ((void*)0), VAR_11 = ((void*)0);
    SECURITY_SUBJECT_CONTEXT VAR_12;
    ULONG VAR_13;

    if (VAR_7 && FUNC_9(VAR_5->Vcb, VAR_5->subvol, VAR_5->inode, VAR_1, VAR_2, (uint8_t**)&VAR_5->sd, (uint16_t*)&VAR_13, VAR_8))
        return;

    if (!VAR_6) {
        FUNC_8(VAR_5);
        return;
    }

    FUNC_7(&VAR_12);

    VAR_9 = FUNC_6(VAR_6->sd, ((void*)0), (void**)&VAR_5->sd, ((void*)0), VAR_5->type == VAR_0, VAR_4,
                                &VAR_12, FUNC_2(), VAR_3);
    if (!FUNC_3(VAR_9)) {
        FUNC_0("SeAssignSecurityEx returned %08x\n", VAR_9);
        return;
    }

    VAR_9 = FUNC_11(VAR_5->inode_item.st_uid, &VAR_10);
    if (!FUNC_3(VAR_9)) {
        FUNC_0("uid_to_sid returned %08x\n", VAR_9);
        return;
    }

    FUNC_5(&VAR_5->sd, VAR_10, 0);

    FUNC_10(VAR_5->inode_item.st_gid, &VAR_11);
    if (!VAR_11) {
        FUNC_0("out of memory\n");
        FUNC_1(VAR_10);
        return;
    }

    FUNC_4(&VAR_5->sd, VAR_11, 0);

    FUNC_1(VAR_10);
    FUNC_1(VAR_11);
}
