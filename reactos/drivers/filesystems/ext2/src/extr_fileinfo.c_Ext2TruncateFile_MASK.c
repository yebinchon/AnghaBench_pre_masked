
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int Flags; int MetaExts; int Extents; int Inode; } ;
struct TYPE_9__ {scalar_t__ QuadPart; } ;
typedef TYPE_1__* PLARGE_INTEGER ;
typedef int PEXT2_VCB ;
typedef TYPE_2__* PEXT2_MCB ;
typedef int PEXT2_IRP_CONTEXT ;
typedef int NTSTATUS ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,TYPE_2__*,TYPE_1__*) ;
 int FUNC_5 (int ,int ,TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

NTSTATUS
FUNC_7(
    PEXT2_IRP_CONTEXT VAR_2,
    PEXT2_VCB VAR_3,
    PEXT2_MCB VAR_4,
    PLARGE_INTEGER VAR_5
)
{
    NTSTATUS VAR_6 = VAR_1;

    if (FUNC_6(&VAR_4->Inode)) {
  VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5);
    } else {
  VAR_6 = FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5);
 }


    if (VAR_5->QuadPart == 0) {


        if (FUNC_3(&VAR_4->Extents)) {
            FUNC_1();
        }
        FUNC_2(&VAR_4->Extents);

        if (FUNC_3(&VAR_4->MetaExts)) {
            FUNC_1();
        }
        FUNC_2(&VAR_4->MetaExts);
        FUNC_0(VAR_4->Flags, VAR_0);
    }

    return VAR_6;
}
