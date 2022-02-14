
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int st_mode; int st_gid; } ;
struct _fcb {TYPE_1__ inode_item; } ;
typedef size_t ULONG ;
struct TYPE_12__ {int PrimaryToken; } ;
struct TYPE_11__ {size_t GroupCount; TYPE_2__* Groups; int PrimaryGroup; int Owner; } ;
struct TYPE_10__ {int Sid; } ;
typedef TYPE_3__ TOKEN_PRIMARY_GROUP ;
typedef TYPE_3__ TOKEN_OWNER ;
typedef TYPE_3__ TOKEN_GROUPS ;
typedef TYPE_6__* PSECURITY_SUBJECT_CONTEXT ;
typedef int NTSTATUS ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (int ,int ,void**) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (struct _fcb*,int ) ;

void FUNC_8(struct _fcb* VAR_6, struct _fcb* VAR_7, PSECURITY_SUBJECT_CONTEXT VAR_8) {
    NTSTATUS VAR_9;
    TOKEN_OWNER* VAR_10;
    TOKEN_PRIMARY_GROUP* VAR_11;
    TOKEN_GROUPS* VAR_12;

    if (VAR_7 && VAR_7->inode_item.st_mode & VAR_0) {
        VAR_6->inode_item.st_gid = VAR_7->inode_item.st_gid;
        return;
    }

    FUNC_1(&VAR_5, 1);

    if (!VAR_8 || !VAR_8->PrimaryToken || FUNC_4(&VAR_4)) {
        FUNC_3(&VAR_5);
        return;
    }

    VAR_9 = FUNC_6(VAR_8->PrimaryToken, VAR_2, (void**)&VAR_10);
    if (!FUNC_5(VAR_9))
        FUNC_0("SeQueryInformationToken returned %08x\n", VAR_9);
    else {
        if (FUNC_7(VAR_6, VAR_10->Owner)) {
            FUNC_3(&VAR_5);
            FUNC_2(VAR_10);
            return;
        }

        FUNC_2(VAR_10);
    }

    VAR_9 = FUNC_6(VAR_8->PrimaryToken, VAR_3, (void**)&VAR_11);
    if (!FUNC_5(VAR_9))
        FUNC_0("SeQueryInformationToken returned %08x\n", VAR_9);
    else {
        if (FUNC_7(VAR_6, VAR_11->PrimaryGroup)) {
            FUNC_3(&VAR_5);
            FUNC_2(VAR_11);
            return;
        }

        FUNC_2(VAR_11);
    }

    VAR_9 = FUNC_6(VAR_8->PrimaryToken, VAR_1, (void**)&VAR_12);
    if (!FUNC_5(VAR_9))
        FUNC_0("SeQueryInformationToken returned %08x\n", VAR_9);
    else {
        ULONG VAR_13;

        for (VAR_13 = 0; VAR_13 < VAR_12->GroupCount; VAR_13++) {
            if (FUNC_7(VAR_6, VAR_12->Groups[VAR_13].Sid)) {
                FUNC_3(&VAR_5);
                FUNC_2(VAR_12);
                return;
            }
        }

        FUNC_2(VAR_12);
    }

    FUNC_3(&VAR_5);
}
