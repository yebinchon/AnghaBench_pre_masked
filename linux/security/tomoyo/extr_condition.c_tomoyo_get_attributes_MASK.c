
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {struct dentry* dentry; } ;
struct TYPE_4__ {struct dentry* dentry; } ;
struct tomoyo_obj_info {int* stat_valid; struct tomoyo_mini_stat* stat; TYPE_2__ path2; TYPE_1__ path1; } ;
struct tomoyo_mini_stat {int rdev; int dev; int mode; int ino; int gid; int uid; } ;
struct inode {int i_rdev; TYPE_3__* i_sb; int i_mode; int i_ino; int i_gid; int i_uid; } ;
struct dentry {int dummy; } ;
struct TYPE_6__ {int s_dev; } ;


 int VAR_0 ;


 struct inode* FUNC_0 (struct dentry*) ;
 struct dentry* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;

void FUNC_3(struct tomoyo_obj_info *VAR_1)
{
 u8 VAR_2;
 struct dentry *VAR_3 = ((void*)0);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct inode *VAR_4;

  switch (VAR_2) {
  case 129:
   VAR_3 = VAR_1->path1.dentry;
   if (!VAR_3)
    continue;
   break;
  case 128:
   VAR_3 = VAR_1->path2.dentry;
   if (!VAR_3)
    continue;
   break;
  default:
   if (!VAR_3)
    continue;
   VAR_3 = FUNC_1(VAR_3);
   break;
  }
  VAR_4 = FUNC_0(VAR_3);
  if (VAR_4) {
   struct tomoyo_mini_stat *VAR_5 = &VAR_1->stat[VAR_2];

   VAR_5->uid = VAR_4->i_uid;
   VAR_5->gid = VAR_4->i_gid;
   VAR_5->ino = VAR_4->i_ino;
   VAR_5->mode = VAR_4->i_mode;
   VAR_5->dev = VAR_4->i_sb->s_dev;
   VAR_5->rdev = VAR_4->i_rdev;
   VAR_1->stat_valid[VAR_2] = 1;
  }
  if (VAR_2 & 1)
   FUNC_2(VAR_3);
 }
}
