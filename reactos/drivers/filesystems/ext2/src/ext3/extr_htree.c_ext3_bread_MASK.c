
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct inode {TYPE_2__* i_sb; } ;
struct ext2_icb {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int ULONG ;
struct TYPE_8__ {int s_priv; } ;
struct TYPE_7__ {int Inode; struct TYPE_7__* Target; } ;
typedef TYPE_1__* PEXT2_MCB ;
typedef int NTSTATUS ;


 TYPE_1__* FUNC_0 (struct inode*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ext2_icb*,int ,TYPE_1__*,unsigned long,int ,int *,int *) ;
 int FUNC_3 (struct ext2_icb*,int ,TYPE_1__*,unsigned long,int ,int *,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;
 scalar_t__ FUNC_9 (struct buffer_head*) ;
 struct buffer_head* FUNC_10 (TYPE_2__*,int ) ;

struct buffer_head *FUNC_11(struct ext2_icb *VAR_6, struct inode *VAR_7,
                                           unsigned long VAR_8, int *VAR_9)
{
    struct buffer_head * VAR_10 = ((void*)0);
    NTSTATUS VAR_11 = VAR_5;
    ULONG VAR_12 = 0, VAR_13 = 0;

    PEXT2_MCB VAR_14 = FUNC_0(VAR_7, VAR_2, VAR_4);


    if (((void*)0) != VAR_14 && FUNC_5(VAR_14))
        VAR_14 = VAR_14->Target;
    if (((void*)0) == VAR_14) {
        *VAR_9 = -VAR_0;
        return ((void*)0);
    }


    if (FUNC_4(&VAR_14->Inode)) {
        VAR_11 = FUNC_2(VAR_6, VAR_7->i_sb->s_priv,
                               VAR_14, VAR_8, VAR_3,
                               &VAR_12, &VAR_13);
    } else {
        VAR_11 = FUNC_3(VAR_6, VAR_7->i_sb->s_priv,
                                 VAR_14, VAR_8, VAR_3,
                                 &VAR_12, &VAR_13);
    }

    if (!FUNC_6(VAR_11)) {
        *VAR_9 = FUNC_1(VAR_11);
        return VAR_10;
    }

    VAR_10 = FUNC_10(VAR_7->i_sb, VAR_12);
    if (!VAR_10) {
        *VAR_9 = -VAR_1;
        return VAR_10;
    }
    if (FUNC_9(VAR_10))
        return VAR_10;

    *VAR_9 = FUNC_8(VAR_10);
    if (*VAR_9) {
     FUNC_7(VAR_10);
     return ((void*)0);
    }
    return VAR_10;
}
