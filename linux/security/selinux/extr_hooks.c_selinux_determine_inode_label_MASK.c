
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct task_security_struct {int sid; scalar_t__ create_sid; } ;
struct superblock_security_struct {int flags; scalar_t__ behavior; scalar_t__ mntpoint_sid; } ;
struct qstr {int dummy; } ;
struct inode_security_struct {int sid; } ;
struct inode {TYPE_1__* i_sb; } ;
struct TYPE_2__ {struct superblock_security_struct* s_security; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct inode_security_struct* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *,int ,int ,int ,struct qstr const*,scalar_t__*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_2(const struct task_security_struct *VAR_4,
     struct inode *VAR_5,
     const struct qstr *VAR_6, u16 VAR_7,
     u32 *VAR_8)
{
 const struct superblock_security_struct *VAR_9 = VAR_5->i_sb->s_security;

 if ((VAR_9->flags & VAR_2) &&
     (VAR_9->behavior == VAR_1)) {
  *VAR_8 = VAR_9->mntpoint_sid;
 } else if ((VAR_9->flags & VAR_0) &&
     VAR_4->create_sid) {
  *VAR_8 = VAR_4->create_sid;
 } else {
  const struct inode_security_struct *VAR_10 = FUNC_0(VAR_5);
  return FUNC_1(&VAR_3, VAR_4->sid,
            VAR_10->sid, VAR_7,
            VAR_6, VAR_8);
 }

 return 0;
}
