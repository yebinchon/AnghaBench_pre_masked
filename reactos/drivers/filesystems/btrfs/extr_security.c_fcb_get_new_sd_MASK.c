
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_6__* fcb; } ;
typedef TYPE_2__ file_ref ;
struct TYPE_10__ {int st_uid; } ;
struct TYPE_12__ {scalar_t__ type; TYPE_1__ inode_item; int sd; } ;
typedef TYPE_3__ fcb ;
struct TYPE_14__ {int * sd; } ;
struct TYPE_13__ {int SubjectSecurityContext; int SecurityDescriptor; } ;
typedef int PSID ;
typedef int NTSTATUS ;
typedef int BOOLEAN ;
typedef TYPE_4__ ACCESS_STATE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,int ,void**,int *,int,int ,int *,int ,int ) ;
 int VAR_4 ;
 int FUNC_5 (TYPE_3__*,TYPE_6__*,int *) ;
 int FUNC_6 (int ) ;

NTSTATUS FUNC_7(fcb* VAR_5, file_ref* VAR_6, ACCESS_STATE* VAR_7) {
    NTSTATUS VAR_8;
    PSID VAR_9;
    BOOLEAN VAR_10;

    VAR_8 = FUNC_4(VAR_6 ? VAR_6->fcb->sd : ((void*)0), VAR_7->SecurityDescriptor, (void**)&VAR_5->sd, ((void*)0), VAR_5->type == VAR_0,
                                VAR_2, &VAR_7->SubjectSecurityContext, FUNC_1(), VAR_1);

    if (!FUNC_2(VAR_8)) {
        FUNC_0("SeAssignSecurityEx returned %08x\n", VAR_8);
        return VAR_8;
    }

    VAR_8 = FUNC_3(VAR_5->sd, &VAR_9, &VAR_10);
    if (!FUNC_2(VAR_8)) {
        FUNC_0("RtlGetOwnerSecurityDescriptor returned %08x\n", VAR_8);
        VAR_5->inode_item.st_uid = VAR_4;
    } else {
        VAR_5->inode_item.st_uid = FUNC_6(VAR_9);
    }

    FUNC_5(VAR_5, VAR_6 ? VAR_6->fcb : ((void*)0), &VAR_7->SubjectSecurityContext);

    return VAR_3;
}
