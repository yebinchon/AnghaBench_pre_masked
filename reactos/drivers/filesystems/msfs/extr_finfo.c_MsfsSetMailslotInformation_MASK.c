
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * ReadTimeout; } ;
struct TYPE_5__ {int TimeOut; } ;
typedef int* PULONG ;
typedef TYPE_1__* PMSFS_FCB ;
typedef TYPE_2__* PFILE_MAILSLOT_SET_INFORMATION ;
typedef int NTSTATUS ;
typedef int FILE_MAILSLOT_SET_INFORMATION ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static NTSTATUS
FUNC_0(PMSFS_FCB VAR_2,
                           PFILE_MAILSLOT_SET_INFORMATION VAR_3,
                           PULONG VAR_4)
{
    if (*VAR_4 < sizeof(FILE_MAILSLOT_SET_INFORMATION))
        return VAR_0;

    VAR_2->TimeOut = *VAR_3->ReadTimeout;

    return VAR_1;
}
