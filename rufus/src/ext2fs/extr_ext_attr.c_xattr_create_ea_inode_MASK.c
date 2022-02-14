
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct ext2_inode {int i_mode; int i_links_count; scalar_t__ i_size; int i_flags; } ;
typedef int inode ;
typedef int ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
typedef int ext2_file_t ;
typedef scalar_t__ errcode_t ;
typedef int __u32 ;
struct TYPE_8__ {int csum_seed; int super; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,void const*,size_t) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,void const*,size_t,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int ,int,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ,int ,int ,int *) ;
 int FUNC_7 (struct ext2_inode*,int ) ;
 int FUNC_8 (struct ext2_inode*,int) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int ,struct ext2_inode*) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int ,struct ext2_inode*) ;
 int FUNC_11 (struct ext2_inode*,int ,int) ;

__attribute__((used)) static errcode_t FUNC_12(ext2_filsys VAR_4, const void *VAR_5,
           size_t VAR_6, ext2_ino_t *VAR_7)
{
 struct ext2_inode VAR_8;
 ext2_ino_t VAR_9;
 ext2_file_t VAR_10;
 __u32 VAR_11;
 errcode_t VAR_12;

 VAR_12 = FUNC_6(VAR_4, 0, 0, 0, &VAR_9);
 if (VAR_12)
  return VAR_12;

 FUNC_11(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.i_flags |= VAR_1;
 if (FUNC_4(VAR_4->super))
  VAR_8.i_flags |= VAR_2;
 VAR_8.i_size = 0;
 VAR_8.i_mode = VAR_3 | 0600;
 VAR_8.i_links_count = 1;
 VAR_12 = FUNC_10(VAR_4, VAR_9, &VAR_8);
 if (VAR_12)
  return VAR_12;






 FUNC_8(&VAR_8, 1);
 VAR_11 = FUNC_0(VAR_4->csum_seed, VAR_5, VAR_6);
 FUNC_7(&VAR_8, VAR_11);

 VAR_12 = FUNC_9(VAR_4, VAR_9, &VAR_8);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_2(VAR_4, VAR_9, VAR_0, &VAR_10);
 if (VAR_12)
  return VAR_12;
 VAR_12 = FUNC_3(VAR_10, VAR_5, VAR_6, ((void*)0));
 FUNC_1(VAR_10);
 if (VAR_12)
  return VAR_12;

 FUNC_5(VAR_4, VAR_9, 1 , 0 );

 *VAR_7 = VAR_9;
 return 0;
}
