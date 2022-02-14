
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* parent; } ;
typedef TYPE_2__ file_ref ;
struct TYPE_9__ {int sd; scalar_t__ ads; } ;
typedef TYPE_3__ fcb ;
struct TYPE_10__ {TYPE_2__* fileref; } ;
typedef TYPE_4__ ccb ;
typedef int ULONG ;
struct TYPE_11__ {TYPE_4__* FsContext2; TYPE_3__* FsContext; } ;
struct TYPE_7__ {TYPE_3__* fcb; } ;
typedef int SECURITY_INFORMATION ;
typedef int SECURITY_DESCRIPTOR ;
typedef TYPE_5__* PFILE_OBJECT ;
typedef scalar_t__ NTSTATUS ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int *,int *,int *,void**) ;
 int FUNC_3 (char*,scalar_t__) ;

__attribute__((used)) static NTSTATUS FUNC_4(PFILE_OBJECT VAR_2, SECURITY_DESCRIPTOR* VAR_3, ULONG* VAR_4, SECURITY_INFORMATION VAR_5) {
    NTSTATUS VAR_6;
    fcb* VAR_7 = VAR_2->FsContext;
    ccb* VAR_8 = VAR_2->FsContext2;
    file_ref* VAR_9 = VAR_8 ? VAR_8->fileref : ((void*)0);

    if (VAR_7->ads) {
        if (VAR_9 && VAR_9->parent)
            VAR_7 = VAR_9->parent->fcb;
        else {
            FUNC_0("could not get parent fcb for stream\n");
            return VAR_1;
        }
    }


    VAR_6 = FUNC_2(&VAR_5, VAR_3, VAR_4, (void**)&VAR_7->sd);

    if (VAR_6 == VAR_0)
        FUNC_3("SeQuerySecurityDescriptorInfo returned %08x\n", VAR_6);
    else if (!FUNC_1(VAR_6))
        FUNC_0("SeQuerySecurityDescriptorInfo returned %08x\n", VAR_6);

    return VAR_6;
}
