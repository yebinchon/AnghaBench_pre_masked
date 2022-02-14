
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_19__ ;


struct inode {int i_ino; int i_mode; int i_flags; scalar_t__ i_extra_isize; int i_generation; int i_gid; int i_uid; int i_atime; int i_mtime; int i_ctime; int * i_sb; int member_0; } ;
struct ext3_super_block {int s_want_extra_isize; } ;
struct dentry {int dummy; } ;
typedef int ULONG ;
struct TYPE_28__ {int s_feature_incompat; } ;
struct TYPE_27__ {TYPE_4__* Inode; TYPE_3__* Mcb; } ;
struct TYPE_26__ {int gid; int uid; int Flags; int sb; } ;
struct TYPE_25__ {int Buffer; } ;
struct TYPE_24__ {int i_ino; int i_mode; int i_generation; } ;
struct TYPE_22__ {int i_gid; int i_uid; } ;
struct TYPE_21__ {int Buffer; } ;
struct TYPE_23__ {TYPE_2__ Inode; TYPE_1__ ShortName; } ;
struct TYPE_20__ {struct ext3_super_block* s_es; } ;
typedef TYPE_5__* PUNICODE_STRING ;
typedef TYPE_6__* PEXT2_VCB ;
typedef int PEXT2_IRP_CONTEXT ;
typedef TYPE_7__* PEXT2_FCB ;
typedef int NTSTATUS ;
typedef int LARGE_INTEGER ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_19__* FUNC_2 (int *) ;
 int VAR_5 ;
 int FUNC_3 (int ,TYPE_6__*,TYPE_7__*,struct inode*,TYPE_5__*,struct dentry**) ;
 int FUNC_4 (int ,TYPE_6__*,int) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (int ,TYPE_6__*,int,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,TYPE_6__*,int,int,int*) ;
 int FUNC_9 (int ,TYPE_6__*,struct inode*) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 TYPE_8__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_13 (int ,int *,struct inode*) ;
 scalar_t__ FUNC_14 (int ) ;

NTSTATUS
FUNC_15(
    PEXT2_IRP_CONTEXT VAR_12,
    PEXT2_VCB VAR_13,
    PEXT2_FCB VAR_14,
    ULONG VAR_15,
    ULONG VAR_16,
    PUNICODE_STRING VAR_17)
{
    NTSTATUS VAR_18;
    ULONG VAR_19;
    ULONG VAR_20;
    struct inode VAR_21 = { 0 };
    struct dentry *VAR_22 = ((void*)0);
 struct ext3_super_block *VAR_23 = FUNC_2(&VAR_13->sb)->s_es;

    LARGE_INTEGER VAR_24;

    VAR_19 = (VAR_14->Inode->i_ino - 1) / VAR_0;

    FUNC_0(VAR_1, ("Ext2CreateInode: %S in %S(Inode=%xh)\n",
                   VAR_17->Buffer,
                   VAR_14->Mcb->ShortName.Buffer,
                   VAR_14->Inode->i_ino));

    VAR_18 = FUNC_8(VAR_12, VAR_13, VAR_19, VAR_15, &VAR_20);
    if (!FUNC_12(VAR_18)) {
        goto errorout;
    }

    FUNC_11(&VAR_24);
    FUNC_4(VAR_12, VAR_13, VAR_20);
    VAR_21.i_sb = &VAR_13->sb;
    VAR_21.i_ino = VAR_20;
    VAR_21.i_ctime = VAR_21.i_mtime =
    VAR_21.i_atime = FUNC_7(VAR_24);
    if (FUNC_10(VAR_13->Flags, VAR_11)) {
        VAR_21.i_uid = VAR_13->uid;
        VAR_21.i_gid = VAR_13->gid;
    } else {
        VAR_21.i_uid = VAR_14->Mcb->Inode.i_uid;
        VAR_21.i_gid = VAR_14->Mcb->Inode.i_gid;
    }
    VAR_21.i_generation = VAR_14->Inode->i_generation;
    VAR_21.i_mode = VAR_10 &
                   VAR_14->Inode->i_mode;
    if (VAR_15 == VAR_3) {
        VAR_21.i_mode |= VAR_8;
    } else if (VAR_15 == VAR_4) {
        VAR_21.i_mode &= VAR_7;
        VAR_21.i_mode |= VAR_9;
    } else {
        FUNC_1();
    }
 if (FUNC_14(VAR_23->s_want_extra_isize))
  VAR_21.i_extra_isize = FUNC_14(VAR_23->s_want_extra_isize);


    if (FUNC_10(VAR_6->s_feature_incompat, VAR_5)) {
        VAR_21.i_flags |= VAR_2;
        FUNC_13(VAR_12, ((void*)0), &VAR_21);

    } else {

        FUNC_9(VAR_12, VAR_13, &VAR_21);
    }


    VAR_18 = FUNC_3(
                 VAR_12,
                 VAR_13,
                 VAR_14,
                 &VAR_21,
                 VAR_17,
                 &VAR_22
             );

    if (!FUNC_12(VAR_18)) {
        FUNC_1();
        FUNC_6(VAR_12, VAR_13, VAR_20, VAR_15);
        goto errorout;
    }

    FUNC_0(VAR_1, ("Ext2CreateInode: New Inode = %xh (Type=%xh)\n",
                   VAR_21.i_ino, VAR_15));

errorout:

    if (VAR_22)
        FUNC_5(VAR_22);

    return VAR_18;
}
