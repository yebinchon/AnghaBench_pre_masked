
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct ext2_dir_entry_tail {int dummy; } ;
struct ext2_dir_entry {char* name; int rec_len; void* inode; } ;
typedef void* ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
struct TYPE_6__ {int blocksize; int super; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 struct ext2_dir_entry_tail* FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct ext2_dir_entry*,int) ;
 int FUNC_4 (struct ext2_dir_entry*,int) ;
 int FUNC_5 (char**) ;
 scalar_t__ FUNC_6 (int,char**) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,struct ext2_dir_entry_tail*) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int,struct ext2_dir_entry*) ;
 int FUNC_11 (char*,int ,int) ;

errcode_t FUNC_12(ext2_filsys VAR_2, ext2_ino_t VAR_3,
          ext2_ino_t VAR_4, char **VAR_5)
{
 struct ext2_dir_entry *VAR_6 = ((void*)0);
 errcode_t VAR_7;
 char *VAR_8;
 int VAR_9;
 int VAR_10 = 0;
 struct ext2_dir_entry_tail *VAR_11;
 int VAR_12 = 0;

 FUNC_0(VAR_2, VAR_0);

 VAR_7 = FUNC_6(VAR_2->blocksize, &VAR_8);
 if (VAR_7)
  return VAR_7;
 FUNC_11(VAR_8, 0, VAR_2->blocksize);
 VAR_6 = (struct ext2_dir_entry *) VAR_8;

 if (FUNC_8(VAR_2->super))
  VAR_12 = sizeof(struct ext2_dir_entry_tail);

 VAR_7 = FUNC_10(VAR_2, VAR_2->blocksize - VAR_12, VAR_6);
 if (VAR_7) {
  FUNC_5(&VAR_8);
  return VAR_7;
 }

 if (VAR_3) {
  if (FUNC_7(VAR_2->super))
   VAR_10 = VAR_1;



  VAR_6->inode = VAR_3;
  FUNC_4(VAR_6, 1);
  FUNC_3(VAR_6, VAR_10);
  VAR_6->name[0] = '.';
  VAR_9 = (VAR_2->blocksize - VAR_12) - FUNC_2(1);
  VAR_6->rec_len = FUNC_2(1);




  VAR_6 = (struct ext2_dir_entry *) (VAR_8 + VAR_6->rec_len);
  VAR_7 = FUNC_10(VAR_2, VAR_9, VAR_6);
  if (VAR_7) {
   FUNC_5(&VAR_8);
   return VAR_7;
  }
  VAR_6->inode = VAR_4;
  FUNC_4(VAR_6, 2);
  FUNC_3(VAR_6, VAR_10);
  VAR_6->name[0] = '.';
  VAR_6->name[1] = '.';

 }

 if (VAR_12) {
  VAR_11 = FUNC_1(VAR_8, VAR_2->blocksize);
  FUNC_9(VAR_2, VAR_11);
 }
 *VAR_5 = VAR_8;
 return 0;
}
