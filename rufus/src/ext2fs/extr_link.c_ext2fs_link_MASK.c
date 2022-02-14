
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct link_struct {char const* name; int flags; scalar_t__ err; scalar_t__ done; int blocksize; int sb; int inode; int namelen; TYPE_1__* fs; } ;
struct ext2_inode {int i_flags; } ;
typedef int ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
struct TYPE_7__ {int flags; int blocksize; int super; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ,int ,int ,struct link_struct*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,struct ext2_inode*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,struct ext2_inode*) ;
 int VAR_6 ;
 int FUNC_4 (char const*) ;

errcode_t FUNC_5(ext2_filsys VAR_7, ext2_ino_t VAR_8, const char *VAR_9,
        ext2_ino_t VAR_10, int VAR_11)
{
 errcode_t VAR_12;
 struct link_struct VAR_13;
 struct ext2_inode VAR_14;

 FUNC_0(VAR_7, VAR_2);

 if (!(VAR_7->flags & VAR_4))
  return VAR_3;

 VAR_13.fs = VAR_7;
 VAR_13.name = VAR_9;
 VAR_13.namelen = VAR_9 ? FUNC_4(VAR_9) : 0;
 VAR_13.inode = VAR_10;
 VAR_13.flags = VAR_11;
 VAR_13.done = 0;
 VAR_13.sb = VAR_7->super;
 VAR_13.blocksize = VAR_7->blocksize;
 VAR_13.err = 0;

 VAR_12 = FUNC_1(VAR_7, VAR_8, VAR_0,
        0, VAR_6, &VAR_13);
 if (VAR_12)
  return VAR_12;
 if (VAR_13.err)
  return VAR_13.err;

 if (!VAR_13.done)
  return VAR_1;

 if ((VAR_12 = FUNC_2(VAR_7, VAR_8, &VAR_14)) != 0)
  return VAR_12;






 if (VAR_14.i_flags & VAR_5) {
  VAR_14.i_flags &= ~VAR_5;
  if ((VAR_12 = FUNC_3(VAR_7, VAR_8, &VAR_14)) != 0)
   return VAR_12;
 }

 return 0;
}
