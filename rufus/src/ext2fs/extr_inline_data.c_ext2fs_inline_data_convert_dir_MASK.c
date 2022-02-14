
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct ext2_dir_entry_tail {int dummy; } ;
struct ext2_dir_entry {char* name; int rec_len; int inode; } ;
typedef int ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef int __u32 ;
struct TYPE_6__ {int blocksize; int super; } ;


 struct ext2_dir_entry_tail* FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct ext2_dir_entry*,int) ;
 int FUNC_3 (struct ext2_dir_entry*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,struct ext2_dir_entry*,unsigned int*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,struct ext2_dir_entry_tail*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_1__*,unsigned int,struct ext2_dir_entry*) ;
 int FUNC_10 (char*,char*,int) ;

__attribute__((used)) static errcode_t FUNC_11(ext2_filsys VAR_2, ext2_ino_t VAR_3,
      char *VAR_4, char *VAR_5, int VAR_6)
{
 struct ext2_dir_entry *VAR_7, *VAR_8;
 struct ext2_dir_entry_tail *VAR_9;
 errcode_t VAR_10;
 int VAR_11;
 unsigned int VAR_12;
 int VAR_13 = 0;
 int VAR_14 = 0;

 if (FUNC_6(VAR_2->super))
  VAR_13 = sizeof(struct ext2_dir_entry_tail);


 if (FUNC_5(VAR_2->super))
  VAR_14 = VAR_0;




 VAR_7 = (struct ext2_dir_entry *) VAR_4;
 VAR_7->inode = VAR_3;
 FUNC_3(VAR_7, 1);
 FUNC_2(VAR_7, VAR_14);
 VAR_7->name[0] = '.';
 VAR_12 = (VAR_2->blocksize - VAR_13) - FUNC_1(1);
 VAR_7->rec_len = FUNC_1(1);




 VAR_7 = (struct ext2_dir_entry *) (VAR_4 + VAR_7->rec_len);
 VAR_7->rec_len = FUNC_1(2);
 VAR_7->inode = FUNC_8(((__u32 *)VAR_5)[0]);
 FUNC_3(VAR_7, 2);
 FUNC_2(VAR_7, VAR_14);
 VAR_7->name[0] = '.';
 VAR_7->name[1] = '.';




 VAR_11 = FUNC_1(1) + FUNC_1(2);
 VAR_7 = (struct ext2_dir_entry *) (VAR_4 + VAR_11);
 FUNC_10(VAR_4 + VAR_11, VAR_5 + VAR_1,
        VAR_6 - VAR_1);
 VAR_6 += FUNC_1(1) + FUNC_1(2) -
  VAR_1;

 do {
  VAR_8 = VAR_7;
  VAR_10 = FUNC_4(VAR_2, VAR_7, &VAR_12);
  if (VAR_10)
   goto err;
  VAR_11 += VAR_12;
  VAR_7 = (struct ext2_dir_entry *) (VAR_4 + VAR_11);
 } while (VAR_11 < VAR_6);
 VAR_12 += VAR_2->blocksize - VAR_13 - VAR_11;
 VAR_10 = FUNC_9(VAR_2, VAR_12, VAR_8);
 if (VAR_10)
  goto err;

 if (VAR_13) {
  VAR_9 = FUNC_0(VAR_4, VAR_2->blocksize);
  FUNC_7(VAR_2, VAR_9);
 }

err:
 return VAR_10;
}
