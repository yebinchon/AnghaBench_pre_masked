
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* ext2_file_t ;
typedef scalar_t__ errcode_t ;
typedef int blk64_t ;
struct TYPE_6__ {int pos; int blockno; int flags; TYPE_1__* fs; } ;
struct TYPE_5__ {int blocksize; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static errcode_t FUNC_1(ext2_file_t VAR_1)
{
 blk64_t VAR_2;
 errcode_t VAR_3;

 VAR_2 = VAR_1->pos / VAR_1->fs->blocksize;
 if (VAR_2 != VAR_1->blockno) {
  VAR_3 = FUNC_0(VAR_1);
  if (VAR_3)
   return VAR_3;
  VAR_1->flags &= ~VAR_0;
 }
 VAR_1->blockno = VAR_2;
 return 0;
}
