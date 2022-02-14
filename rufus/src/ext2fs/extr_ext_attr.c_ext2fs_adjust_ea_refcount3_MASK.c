
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ext2_ext_attr_header {int h_refcount; } ;
typedef int ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef scalar_t__ blk64_t ;
typedef int __u32 ;
struct TYPE_7__ {scalar_t__ s_first_data_block; } ;
struct TYPE_6__ {int blocksize; TYPE_4__* super; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (char**) ;
 scalar_t__ FUNC_2 (int ,char**) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__,char*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__,char*,int ) ;

errcode_t FUNC_5(ext2_filsys VAR_1, blk64_t VAR_2,
        char *VAR_3, int VAR_4,
        __u32 *VAR_5, ext2_ino_t VAR_6)
{
 errcode_t VAR_7;
 struct ext2_ext_attr_header *VAR_8;
 char *VAR_9 = 0;

 if ((VAR_2 >= FUNC_0(VAR_1->super)) ||
     (VAR_2 < VAR_1->super->s_first_data_block))
  return VAR_0;

 if (!VAR_3) {
  VAR_7 = FUNC_2(VAR_1->blocksize, &VAR_9);
  if (VAR_7)
   return VAR_7;
  VAR_3 = VAR_9;
 }

 VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_6);
 if (VAR_7)
  goto errout;

 VAR_8 = (struct ext2_ext_attr_header *) VAR_3;
 VAR_8->h_refcount += VAR_4;
 if (VAR_5)
  *VAR_5 = VAR_8->h_refcount;

 VAR_7 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_6);
 if (VAR_7)
  goto errout;

errout:
 if (VAR_9)
  FUNC_1(&VAR_9);
 return VAR_7;
}
