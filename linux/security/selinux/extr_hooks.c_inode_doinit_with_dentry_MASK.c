
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct superblock_security_struct {int flags; int behavior; scalar_t__ sid; scalar_t__ mntpoint_sid; scalar_t__ def_sid; int isec_lock; int isec_head; } ;
struct inode_security_struct {scalar_t__ initialized; scalar_t__ sclass; int lock; scalar_t__ sid; scalar_t__ task_sid; int list; } ;
struct inode {int i_opflags; int i_mode; TYPE_1__* i_sb; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {struct superblock_security_struct* s_security; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;





 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 struct dentry* FUNC_1 (struct inode*) ;
 struct dentry* FUNC_2 (struct inode*) ;
 struct dentry* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct inode*,struct dentry*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,scalar_t__,scalar_t__,scalar_t__,int *,scalar_t__*) ;
 int FUNC_10 (struct dentry*,scalar_t__,int,scalar_t__*) ;
 struct inode_security_struct* FUNC_11 (struct inode*) ;
 int VAR_8 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_9, struct dentry *VAR_10)
{
 struct superblock_security_struct *VAR_11 = ((void*)0);
 struct inode_security_struct *VAR_12 = FUNC_11(VAR_9);
 u32 VAR_13, VAR_14 = 0;
 u16 VAR_15;
 struct dentry *VAR_16;
 int VAR_17 = 0;

 if (VAR_12->initialized == VAR_1)
  return 0;

 FUNC_12(&VAR_12->lock);
 if (VAR_12->initialized == VAR_1)
  goto out_unlock;

 if (VAR_12->sclass == VAR_4)
  VAR_12->sclass = FUNC_6(VAR_9->i_mode);

 VAR_11 = VAR_9->i_sb->s_security;
 if (!(VAR_11->flags & VAR_7)) {



  FUNC_12(&VAR_11->isec_lock);
  if (FUNC_8(&VAR_12->list))
   FUNC_7(&VAR_12->list, &VAR_11->isec_head);
  FUNC_13(&VAR_11->isec_lock);
  goto out_unlock;
 }

 VAR_15 = VAR_12->sclass;
 VAR_13 = VAR_12->task_sid;
 VAR_14 = VAR_12->sid;
 VAR_12->initialized = VAR_3;
 FUNC_13(&VAR_12->lock);

 switch (VAR_11->behavior) {
 case 131:
  break;
 case 128:
  if (!(VAR_9->i_opflags & VAR_0)) {
   VAR_14 = VAR_11->def_sid;
   break;
  }


  if (VAR_10) {

   VAR_16 = FUNC_3(VAR_10);
  } else {






   VAR_16 = FUNC_1(VAR_9);
   if (!VAR_16)
    VAR_16 = FUNC_2(VAR_9);
  }
  if (!VAR_16) {
   goto out;
  }

  VAR_17 = FUNC_5(VAR_9, VAR_16, VAR_11->def_sid,
         &VAR_14);
  FUNC_4(VAR_16);
  if (VAR_17)
   goto out;
  break;
 case 130:
  VAR_14 = VAR_13;
  break;
 case 129:

  VAR_14 = VAR_11->sid;


  VAR_17 = FUNC_9(&VAR_8, VAR_13, VAR_14,
          VAR_15, ((void*)0), &VAR_14);
  if (VAR_17)
   goto out;
  break;
 case 132:
  VAR_14 = VAR_11->mntpoint_sid;
  break;
 default:

  VAR_14 = VAR_11->sid;

  if ((VAR_11->flags & VAR_5) && !FUNC_0(VAR_9->i_mode)) {


   if (VAR_10) {


    VAR_16 = FUNC_3(VAR_10);
   } else {




    VAR_16 = FUNC_1(VAR_9);
    if (!VAR_16)
     VAR_16 = FUNC_2(VAR_9);
   }
   if (!VAR_16)
    goto out;
   VAR_17 = FUNC_10(VAR_16, VAR_15,
         VAR_11->flags, &VAR_14);
   if (VAR_17) {
    FUNC_4(VAR_16);
    goto out;
   }

   if ((VAR_11->flags & VAR_6) &&
       (VAR_9->i_opflags & VAR_0)) {
    VAR_17 = FUNC_5(VAR_9, VAR_16,
           VAR_14, &VAR_14);
    if (VAR_17) {
     FUNC_4(VAR_16);
     goto out;
    }
   }
   FUNC_4(VAR_16);
  }
  break;
 }

out:
 FUNC_12(&VAR_12->lock);
 if (VAR_12->initialized == VAR_3) {
  if (!VAR_14 || VAR_17) {
   VAR_12->initialized = VAR_2;
   goto out_unlock;
  }

  VAR_12->initialized = VAR_1;
  VAR_12->sid = VAR_14;
 }

out_unlock:
 FUNC_13(&VAR_12->lock);
 return VAR_17;
}
