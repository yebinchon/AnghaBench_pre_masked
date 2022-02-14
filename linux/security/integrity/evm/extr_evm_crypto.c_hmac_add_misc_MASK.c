
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct h_misc TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int umode_t ;
typedef int uid_t ;
typedef int const u8 ;
struct shash_desc {int dummy; } ;
struct inode {unsigned long i_ino; TYPE_1__* i_sb; int i_mode; int i_gid; int i_uid; int i_generation; } ;
typedef int hmac_misc ;
typedef int gid_t ;
typedef int __u32 ;
struct h_misc {unsigned long ino; int generation; int uid; int gid; int mode; } ;
struct TYPE_3__ {int s_uuid; } ;


 int VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct shash_desc*,char*) ;
 int FUNC_1 (struct shash_desc*,int const*,int) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct shash_desc *VAR_5, struct inode *VAR_6,
     char VAR_7, char *VAR_8)
{
 struct h_misc {
  unsigned long ino;
  __u32 generation;
  uid_t uid;
  gid_t gid;
  umode_t mode;
 } VAR_9;

 FUNC_4(&VAR_9, 0, sizeof(VAR_9));



 if (VAR_7 != VAR_1) {
  VAR_9.ino = VAR_6->i_ino;
  VAR_9.generation = VAR_6->i_generation;
 }
 VAR_9.uid = FUNC_3(&VAR_4, VAR_6->i_uid);
 VAR_9.gid = FUNC_2(&VAR_4, VAR_6->i_gid);
 VAR_9.mode = VAR_6->i_mode;
 FUNC_1(VAR_5, (const u8 *)&VAR_9, sizeof(VAR_9));
 if ((VAR_3 & VAR_0) &&
     VAR_7 != VAR_1)
  FUNC_1(VAR_5, (u8 *)&VAR_6->i_sb->s_uuid, VAR_2);
 FUNC_0(VAR_5, VAR_8);
}
