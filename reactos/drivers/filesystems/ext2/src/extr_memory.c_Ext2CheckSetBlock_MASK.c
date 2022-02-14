
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct buffer_head {scalar_t__ b_data; } ;
typedef int ULONG ;
struct TYPE_4__ {int s_groups_count; } ;
struct TYPE_5__ {TYPE_1__ sbi; int sb; } ;
typedef int RTL_BITMAP ;
typedef int PULONG ;
typedef TYPE_2__* PEXT2_VCB ;
typedef int PEXT2_IRP_CONTEXT ;
typedef int PEXT2_GROUP_DESC ;
typedef scalar_t__ LONGLONG ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int,struct buffer_head**) ;
 int FUNC_6 (struct buffer_head**) ;
 int FUNC_7 (struct buffer_head*) ;
 struct buffer_head* FUNC_8 (int *,int ) ;

BOOLEAN
FUNC_9(PEXT2_IRP_CONTEXT VAR_5, PEXT2_VCB VAR_6, LONGLONG VAR_7)
{
    PEXT2_GROUP_DESC VAR_8;
    struct buffer_head *VAR_9 = ((void*)0);
    struct buffer_head *VAR_10 = ((void*)0);
    ULONG VAR_11, VAR_12, VAR_13;
    RTL_BITMAP VAR_14;
    BOOLEAN VAR_15 = VAR_2;

    VAR_11 = (ULONG)(VAR_7 - VAR_1) / VAR_0;
    VAR_12 = (ULONG)(VAR_7 - VAR_1) % VAR_0;

    VAR_8 = FUNC_5(&VAR_6->sb, VAR_11, &VAR_9);
    if (!VAR_8) {
        return VAR_2;
    }
    VAR_10 = FUNC_8(&VAR_6->sb, FUNC_4(&VAR_6->sb, VAR_8));

    if (VAR_11 == VAR_6->sbi.s_groups_count - 1) {
        VAR_13 = (ULONG)(VAR_3 % VAR_0);


        if (VAR_13 == 0)
            VAR_13 = VAR_0;
    } else {
        VAR_13 = VAR_0;
    }

    if (VAR_12 >= VAR_13) {
        FUNC_6(&VAR_9);
        FUNC_6(&VAR_10);
        return VAR_2;
    }


    FUNC_2(&VAR_14, (PULONG)VAR_10->b_data, VAR_13);

    if (FUNC_1(&VAR_14, VAR_12) == 0) {
        FUNC_0();
        FUNC_3(&VAR_14, VAR_12, 1);
        VAR_15 = VAR_4;
        FUNC_7(VAR_10);
    }

    FUNC_6(&VAR_9);
    FUNC_6(&VAR_10);

    return (!VAR_15);
}
