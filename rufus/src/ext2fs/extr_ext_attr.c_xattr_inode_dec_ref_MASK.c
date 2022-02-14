
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct ext2_inode_large {scalar_t__ i_dtime; scalar_t__ i_links_count; } ;
struct ext2_inode {int dummy; } ;
typedef int inode ;
typedef int ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef scalar_t__ __u64 ;
struct TYPE_9__ {scalar_t__ now; } ;


 int FUNC_0 (struct ext2_inode_large*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,struct ext2_inode_large*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,int,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,struct ext2_inode*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ,struct ext2_inode*,int *,int ,unsigned long long) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ,struct ext2_inode*,int) ;
 int FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int ,struct ext2_inode*,int) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static errcode_t FUNC_10(ext2_filsys VAR_0, ext2_ino_t VAR_1)
{
 struct ext2_inode_large VAR_2;
 __u64 VAR_3;
 errcode_t VAR_4;

 VAR_4 = FUNC_6(VAR_0, VAR_1, (struct ext2_inode *)&VAR_2,
         sizeof(VAR_2));
 if (VAR_4)
  goto out;

 VAR_3 = FUNC_2(FUNC_0(&VAR_2));
 VAR_3--;
 FUNC_7(FUNC_0(&VAR_2), VAR_3);

 if (VAR_3)
  goto write_out;

 VAR_2.i_links_count = 0;
 VAR_2.i_dtime = VAR_0->now ? VAR_0->now : FUNC_9(0);

 VAR_4 = FUNC_1(VAR_0, VAR_1, &VAR_2);
 if (VAR_4)
  goto write_out;

 if (FUNC_4(VAR_0, (struct ext2_inode *)&VAR_2)) {
  VAR_4 = FUNC_5(VAR_0, VAR_1, (struct ext2_inode *)&VAR_2, ((void*)0),
       0, ~0ULL);
  if (VAR_4)
   goto out;
 }

 FUNC_3(VAR_0, VAR_1, -1 , 0 );

write_out:
 VAR_4 = FUNC_8(VAR_0, VAR_1, (struct ext2_inode *)&VAR_2,
          sizeof(VAR_2));
out:
 return VAR_4;
}
