
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct link_struct {int namelen; scalar_t__ inode; int flags; scalar_t__ done; int sb; int name; void* err; TYPE_1__* fs; } ;
struct ext2_dir_entry_tail {int dummy; } ;
struct ext2_dir_entry {scalar_t__ inode; int rec_len; char* name; } ;
struct TYPE_4__ {unsigned int blocksize; int super; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ext2_dir_entry_tail* FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ext2_dir_entry*) ;
 int FUNC_3 (struct ext2_dir_entry*,int) ;
 int FUNC_4 (struct ext2_dir_entry*,int) ;
 void* FUNC_5 (TYPE_1__*,struct ext2_dir_entry*,unsigned int*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,struct ext2_dir_entry_tail*) ;
 void* FUNC_9 (TYPE_1__*,unsigned int,struct ext2_dir_entry*) ;
 int FUNC_10 (char*,int ,int) ;

__attribute__((used)) static int FUNC_11(struct ext2_dir_entry *VAR_2,
       int VAR_3,
       int VAR_4,
       char *VAR_5,
       void *VAR_6)
{
 struct link_struct *VAR_7 = (struct link_struct *) VAR_6;
 struct ext2_dir_entry *VAR_8;
 unsigned int VAR_9, VAR_10, VAR_11;
 int VAR_12 = 0;
 int VAR_13 = 0;
 struct ext2_dir_entry_tail *VAR_14;

 if (VAR_7->done)
  return VAR_0;

 VAR_9 = FUNC_1(VAR_7->namelen);

 VAR_7->err = FUNC_5(VAR_7->fs, VAR_2, &VAR_11);
 if (VAR_7->err)
  return VAR_0;

 if (FUNC_7(VAR_7->fs->super))
  VAR_13 = sizeof(struct ext2_dir_entry_tail);




 VAR_8 = (struct ext2_dir_entry *) (VAR_5 + VAR_3 + VAR_11);
 if ((VAR_3 + (int) VAR_11 < VAR_4 - (8 + VAR_13)) &&
     (VAR_8->inode == 0) &&
     (VAR_3 + (int) VAR_11 + (int) VAR_8->rec_len <= VAR_4)) {
  VAR_11 += VAR_8->rec_len;
  VAR_7->err = FUNC_9(VAR_7->fs, VAR_11, VAR_2);
  if (VAR_7->err)
   return VAR_0;
  VAR_12 = VAR_1;
 }
 if (VAR_13 &&
     VAR_11 == VAR_7->fs->blocksize &&
     !VAR_2->inode) {
  VAR_11 -= VAR_13;
  VAR_7->err = FUNC_9(VAR_7->fs, VAR_11, VAR_2);
  if (VAR_7->err)
   return VAR_0;
  VAR_14 = FUNC_0(VAR_5, VAR_7->fs->blocksize);
  FUNC_8(VAR_7->fs, VAR_14);
  VAR_12 = VAR_1;
 }


 if (VAR_13 &&
     VAR_11 == VAR_7->fs->blocksize - FUNC_1(1) &&
     VAR_3 == FUNC_1(1) &&
     VAR_2->name[0] == '.' && VAR_2->name[1] == '.') {
  VAR_11 -= VAR_13;
  VAR_7->err = FUNC_9(VAR_7->fs, VAR_11, VAR_2);
  if (VAR_7->err)
   return VAR_0;
  VAR_14 = FUNC_0(VAR_5, VAR_7->fs->blocksize);
  FUNC_8(VAR_7->fs, VAR_14);
  VAR_12 = VAR_1;
 }






 if (VAR_2->inode) {
  VAR_10 = FUNC_1(FUNC_2(VAR_2));
  if (VAR_11 < (VAR_10 + VAR_9))
   return VAR_12;
  VAR_9 = VAR_11 - VAR_10;
  VAR_7->err = FUNC_9(VAR_7->fs, VAR_10, VAR_2);
  if (VAR_7->err)
   return VAR_0;
  VAR_8 = (struct ext2_dir_entry *) (VAR_5 + VAR_3 +
        VAR_2->rec_len);
  VAR_8->inode = 0;
  FUNC_4(VAR_8, 0);
  FUNC_3(VAR_8, 0);
  VAR_7->err = FUNC_9(VAR_7->fs, VAR_9, VAR_8);
  if (VAR_7->err)
   return VAR_0;
  return VAR_1;
 }





 if (VAR_11 < VAR_9)
  return VAR_12;
 VAR_2->inode = VAR_7->inode;
 FUNC_4(VAR_2, VAR_7->namelen);
 FUNC_10(VAR_2->name, VAR_7->name, VAR_7->namelen);
 if (FUNC_6(VAR_7->sb))
  FUNC_3(VAR_2, VAR_7->flags & 0x7);

 VAR_7->done++;
 return VAR_0|VAR_1;
}
