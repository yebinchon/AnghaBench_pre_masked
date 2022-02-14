
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int __u32 ;
typedef int ULONG ;
struct TYPE_6__ {int * i_block; scalar_t__ i_size; scalar_t__ i_blocks; } ;
struct TYPE_7__ {TYPE_1__ Inode; int Flags; int MetaExts; int Extents; } ;
typedef int PEXT2_VCB ;
typedef TYPE_2__* PEXT2_MCB ;
typedef int PEXT2_IRP_CONTEXT ;
typedef int NTSTATUS ;
typedef int LONGLONG ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,TYPE_2__*) ;
 scalar_t__ FUNC_7 (int *,int,int*,int*,int*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_10 (int ) ;
 int VAR_1 ;
 int FUNC_11 (int *,int ,int) ;

NTSTATUS
FUNC_12(
    PEXT2_IRP_CONTEXT VAR_2,
    PEXT2_VCB VAR_3,
    PEXT2_MCB VAR_4
    )
{
    LONGLONG VAR_5;
    LONGLONG VAR_6;
    LONGLONG VAR_7;
    NTSTATUS VAR_8 = VAR_1;
    int VAR_9;


    if (!FUNC_9(VAR_4)) {
        VAR_8 = FUNC_6(VAR_2, VAR_3, VAR_4);
        if (!FUNC_10(VAR_8)) {
            FUNC_3();
            FUNC_2(VAR_4->Flags, VAR_0);
            goto errorout;
        }
    }

    FUNC_0 (FUNC_9(VAR_4));


    if (FUNC_8(&VAR_4->Extents) != 0) {
        for (VAR_9 = 0; FUNC_7(&VAR_4->Extents, VAR_9, &VAR_5, &VAR_6, &VAR_7); VAR_9++) {

            if (-1 == VAR_6 || VAR_5 == 0 || VAR_7 <= 0)
                continue;

            FUNC_5(VAR_2, VAR_3, (ULONG)(VAR_6 - 1), (ULONG)VAR_7);
        }
    }


    if (FUNC_8(&VAR_4->MetaExts) != 0) {
        for (VAR_9 = 0; FUNC_7(&VAR_4->MetaExts, VAR_9, &VAR_5, &VAR_6, &VAR_7); VAR_9++) {

            if (-1 == VAR_6 || VAR_5 == 0 || VAR_7 <= 0)
                continue;

            FUNC_5(VAR_2, VAR_3, (ULONG)(VAR_6 - 1), (ULONG)VAR_7);
        }
    }


    FUNC_4(&VAR_4->Extents);
    FUNC_4(&VAR_4->MetaExts);
    FUNC_1(VAR_4->Flags, VAR_0);


    VAR_4->Inode.i_blocks = 0;
    VAR_4->Inode.i_size = 0;
    FUNC_11(&VAR_4->Inode.i_block[0], 0, sizeof(__u32) * 15);



errorout:

    return VAR_8;
}
