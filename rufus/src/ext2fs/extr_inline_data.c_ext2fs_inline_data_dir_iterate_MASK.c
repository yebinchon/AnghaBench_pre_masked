
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_inode {int i_flags; int * i_block; int i_mode; } ;
struct ext2_inline_data {int ea_size; char* ea_data; void* ino; int fs; } ;
struct ext2_dir_entry {int name_len; char* name; void* inode; } ;
struct dir_context {char* buf; unsigned int buflen; int flags; void* errcode; } ;
typedef void* ext2_ino_t ;
typedef int ext2_filsys ;
typedef void* errcode_t ;
typedef scalar_t__ e2_blkcnt_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int ,char*,int,int ) ;
 void* FUNC_4 (int ,char*,int,int ) ;
 int FUNC_5 (char**) ;
 int FUNC_6 (int ,struct ext2_dir_entry*,unsigned int*) ;
 void* FUNC_7 (struct ext2_inline_data*) ;
 void* FUNC_8 (struct ext2_inline_data*) ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ,int ,int ,void*) ;
 void* FUNC_11 (int ,void*,struct ext2_inode*) ;
 int FUNC_12 (int ,int ,struct ext2_dir_entry*) ;
 void* FUNC_13 (int ,void*,struct ext2_inode*) ;

int FUNC_14(ext2_filsys VAR_8, ext2_ino_t VAR_9,
       void *VAR_10)
{
 struct dir_context *VAR_11;
 struct ext2_inode VAR_12;
 struct ext2_dir_entry VAR_13;
 struct ext2_inline_data VAR_14;
 int VAR_15 = VAR_0;
 e2_blkcnt_t VAR_16 = 0;
 char *VAR_17;
 unsigned int VAR_18;
 int VAR_19;

 VAR_11 = (struct dir_context *)VAR_10;
 VAR_17 = VAR_11->buf;
 VAR_18 = VAR_11->buflen;
 VAR_19 = VAR_11->flags;
 VAR_11->flags |= VAR_2;

 VAR_11->errcode = FUNC_11(VAR_8, VAR_9, &VAR_12);
 if (VAR_11->errcode)
  goto out;

 if (!(VAR_12.i_flags & VAR_6)) {
  VAR_11->errcode = VAR_4;
  goto out;
 }

 if (!FUNC_1(VAR_12.i_mode)) {
  VAR_11->errcode = VAR_3;
  goto out;
 }
 VAR_15 = 0;


 VAR_13.inode = VAR_9;
 VAR_13.name_len = 1;
 FUNC_12(VAR_8, FUNC_0(2), &VAR_13);
 VAR_13.name[0] = '.';
 VAR_13.name[1] = '\0';
 VAR_11->buf = (char *)&VAR_13;
 FUNC_6(VAR_8, &VAR_13, &VAR_11->buflen);
 VAR_15 |= FUNC_10(VAR_8, 0, VAR_16++, 0, 0, VAR_10);
 if (VAR_15 & VAR_0)
  goto out;

 VAR_13.inode = FUNC_9(VAR_12.i_block[0]);
 VAR_13.name_len = 2;
 FUNC_12(VAR_8, FUNC_0(3), &VAR_13);
 VAR_13.name[0] = '.';
 VAR_13.name[1] = '.';
 VAR_13.name[2] = '\0';
 VAR_11->buf = (char *)&VAR_13;
 FUNC_6(VAR_8, &VAR_13, &VAR_11->buflen);
 VAR_15 |= FUNC_10(VAR_8, 0, VAR_16++, 0, 0, VAR_10);
 if (VAR_15 & VAR_1) {
  errcode_t VAR_20;

  VAR_12.i_block[0] = FUNC_2(VAR_13.inode);
  VAR_20 = FUNC_13(VAR_8, VAR_9, &VAR_12);
  if (VAR_20)
   goto out;
  VAR_15 &= ~VAR_1;
 }
 if (VAR_15 & VAR_0)
  goto out;

 VAR_11->buf = (char *)VAR_12.i_block + VAR_5;
 VAR_11->buflen = VAR_7 - VAR_5;







 VAR_15 |= FUNC_10(VAR_8, 0, VAR_16++, 0, 0, VAR_10);
 if (VAR_15 & VAR_1) {
  VAR_11->errcode = FUNC_13(VAR_8, VAR_9, &VAR_12);
  if (VAR_11->errcode)
   VAR_15 |= VAR_0;
  VAR_15 &= ~VAR_1;
 }
 if (VAR_15 & VAR_0)
  goto out;

 VAR_14.fs = VAR_8;
 VAR_14.ino = VAR_9;
 VAR_11->errcode = FUNC_7(&VAR_14);
 if (VAR_11->errcode) {
  VAR_15 |= VAR_0;
  goto out;
 }
 if (VAR_14.ea_size <= 0)
  goto out1;

 VAR_11->buf = VAR_14.ea_data;
 VAR_11->buflen = VAR_14.ea_size;
 VAR_15 |= FUNC_10(VAR_8, 0, VAR_16++, 0, 0, VAR_10);
 if (VAR_15 & VAR_1) {
  VAR_11->errcode = FUNC_8(&VAR_14);
  if (VAR_11->errcode)
   VAR_15 |= VAR_0;
 }

out1:
 FUNC_5(&VAR_14.ea_data);
out:
 VAR_11->buf = VAR_17;
 VAR_11->buflen = VAR_18;
 VAR_11->flags = VAR_19;
 VAR_15 &= ~(VAR_0 | VAR_1);
 return VAR_15;
}
