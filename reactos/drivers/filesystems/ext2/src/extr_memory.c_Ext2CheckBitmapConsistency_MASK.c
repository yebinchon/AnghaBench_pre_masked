
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct buffer_head {int dummy; } ;
typedef scalar_t__ ULONG ;
struct TYPE_5__ {scalar_t__ s_groups_count; } ;
struct TYPE_6__ {int InodeSize; int BlockSize; int sb; TYPE_1__ sbi; } ;
typedef TYPE_2__* PEXT2_VCB ;
typedef int PEXT2_IRP_CONTEXT ;
typedef int PEXT2_GROUP_DESC ;
typedef int BOOLEAN ;


 int FUNC_0 (int ,TYPE_2__*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,scalar_t__,struct buffer_head**) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (struct buffer_head**) ;

BOOLEAN
FUNC_6(PEXT2_IRP_CONTEXT VAR_3, PEXT2_VCB VAR_4)
{
    ULONG VAR_5, VAR_6, VAR_7;

    for (VAR_5 = 0; VAR_5 < VAR_4->sbi.s_groups_count; VAR_5++) {

        PEXT2_GROUP_DESC VAR_8;
        struct buffer_head *VAR_9 = ((void*)0);

        VAR_8 = FUNC_2(&VAR_4->sb, VAR_5, &VAR_9);
        if (!VAR_8)
            continue;
        FUNC_0(VAR_3, VAR_4, FUNC_1(&VAR_4->sb, VAR_8));
        FUNC_0(VAR_3, VAR_4, FUNC_3(&VAR_4->sb, VAR_8));


        if (VAR_5 == VAR_4->sbi.s_groups_count - 1) {
            VAR_7 = ((VAR_0 % VAR_1) *
                           VAR_4->InodeSize + VAR_4->BlockSize - 1) /
                          (VAR_4->BlockSize);
        } else {
            VAR_7 = (VAR_1 * VAR_4->InodeSize +
                           VAR_4->BlockSize - 1) / (VAR_4->BlockSize);
        }

        for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++ )
            FUNC_0(VAR_3, VAR_4, FUNC_4(&VAR_4->sb, VAR_8) + VAR_6);

        FUNC_5(&VAR_9);
    }

    return VAR_2;
}
