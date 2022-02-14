
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* ext2_inode_scan ;
typedef scalar_t__ errcode_t ;
typedef int blk64_t ;
struct TYPE_7__ {int inode_buffer_blocks; int blocks_left; int scan_flags; int bytes_left; scalar_t__ current_block; TYPE_1__* fs; int inode_buffer; int ptr; } ;
struct TYPE_6__ {size_t blocksize; int io; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int,int ) ;
 int FUNC_3 (int ,int ,size_t) ;

__attribute__((used)) static errcode_t FUNC_4(ext2_inode_scan VAR_4)
{
 blk64_t VAR_5;
 errcode_t VAR_6;






 VAR_5 = VAR_4->inode_buffer_blocks;
 if (VAR_5 > VAR_4->blocks_left)
  VAR_5 = VAR_4->blocks_left;





 if (VAR_4->scan_flags & VAR_2) {
  if (VAR_4->bytes_left)
   VAR_4->scan_flags |= VAR_1;
  VAR_4->scan_flags &= ~VAR_2;
 }




 if (VAR_4->scan_flags & VAR_3) {
  VAR_6 = FUNC_0(VAR_4, &VAR_5);
  if (VAR_6)
   return VAR_6;
 }

 if ((VAR_4->scan_flags & VAR_2) ||
     (VAR_4->current_block == 0)) {
  FUNC_3(VAR_4->inode_buffer, 0,
         (size_t) VAR_5 * VAR_4->fs->blocksize);
 } else {
  VAR_6 = FUNC_2(VAR_4->fs->io,
          VAR_4->current_block,
          (int) VAR_5,
          VAR_4->inode_buffer);
  if (VAR_6)
   return VAR_0;
 }
 FUNC_1(VAR_4, VAR_5);

 VAR_4->ptr = VAR_4->inode_buffer;
 VAR_4->bytes_left = VAR_5 * VAR_4->fs->blocksize;

 VAR_4->blocks_left -= VAR_5;
 if (VAR_4->current_block)
  VAR_4->current_block += VAR_5;

 return 0;
}
