
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_sb; } ;
struct inode {unsigned int i_flags; int i_size; } ;
struct file {int mnt_sb; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vfsmount* FUNC_0 (struct vfsmount*) ;
 struct vfsmount* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct vfsmount*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct vfsmount* FUNC_3 (struct inode*,struct vfsmount*,char const*,int ,int *) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,int ) ;
 scalar_t__ FUNC_7 (unsigned long,int ) ;
 int VAR_7 ;
 struct inode* FUNC_8 (int ,int *,int,int ,unsigned long) ;
 int FUNC_9 (unsigned long,int ) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static struct file *FUNC_11(struct vfsmount *VAR_8, const char *VAR_9, loff_t VAR_10,
           unsigned long VAR_11, unsigned int VAR_12)
{
 struct inode *VAR_13;
 struct file *VAR_14;

 if (FUNC_2(VAR_8))
  return FUNC_0(VAR_8);

 if (VAR_10 < 0 || VAR_10 > VAR_3)
  return FUNC_1(-VAR_0);

 if (FUNC_7(VAR_11, VAR_10))
  return FUNC_1(-VAR_1);

 VAR_13 = FUNC_8(VAR_8->mnt_sb, ((void*)0), VAR_5 | VAR_6, 0,
    VAR_11);
 if (FUNC_10(!VAR_13)) {
  FUNC_9(VAR_11, VAR_10);
  return FUNC_1(-VAR_2);
 }
 VAR_13->i_flags |= VAR_12;
 VAR_13->i_size = VAR_10;
 FUNC_4(VAR_13);
 VAR_14 = FUNC_1(FUNC_6(VAR_13, VAR_10));
 if (!FUNC_2(VAR_14))
  VAR_14 = FUNC_3(VAR_13, VAR_8, VAR_9, VAR_4,
    &VAR_7);
 if (FUNC_2(VAR_14))
  FUNC_5(VAR_13);
 return VAR_14;
}
