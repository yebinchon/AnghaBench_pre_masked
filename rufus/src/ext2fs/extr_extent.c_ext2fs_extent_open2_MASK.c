
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct extent_path {int dummy; } ;
struct ext3_extent_header {void* eh_max; void* eh_entries; void* eh_magic; void* eh_depth; } ;
struct ext3_extent {int dummy; } ;
struct ext2_inode {int i_flags; scalar_t__* i_block; } ;
struct ext2_extent_handle {int max_depth; int max_paths; int magic; scalar_t__ level; TYPE_3__* path; struct ext2_inode* inode; void* type; struct ext2_inode inodebuf; TYPE_1__* fs; scalar_t__ ino; } ;
typedef scalar_t__ ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
typedef struct ext2_extent_handle* ext2_extent_handle_t ;
typedef scalar_t__ errcode_t ;
struct TYPE_9__ {scalar_t__ s_inodes_count; } ;
struct TYPE_8__ {char* buf; int end_blk; int visit_num; scalar_t__ curr; void* max_entries; void* entries; void* left; } ;
struct TYPE_7__ {int blocksize; TYPE_6__* super; } ;


 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ext2_inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct ext2_extent_handle*) ;
 scalar_t__ FUNC_5 (struct ext3_extent_header*,int) ;
 scalar_t__ FUNC_6 (int,struct ext2_extent_handle**) ;
 scalar_t__ FUNC_7 (int,TYPE_3__**) ;
 void* FUNC_8 (void*) ;
 scalar_t__ FUNC_9 (TYPE_1__*,scalar_t__,struct ext2_inode*) ;
 int FUNC_10 (struct ext2_extent_handle*,int ,int) ;

errcode_t FUNC_11(ext2_filsys VAR_7, ext2_ino_t VAR_8,
        struct ext2_inode *VAR_9,
        ext2_extent_handle_t *VAR_10)
{
 struct ext2_extent_handle *VAR_11;
 errcode_t VAR_12;
 int VAR_13;
 struct ext3_extent_header *VAR_14;

 FUNC_1(VAR_7, VAR_2);

 if (!VAR_9)
  if ((VAR_8 == 0) || (VAR_8 > VAR_7->super->s_inodes_count))
   return VAR_0;

 VAR_12 = FUNC_6(sizeof(struct ext2_extent_handle), &VAR_11);
 if (VAR_12)
  return VAR_12;
 FUNC_10(VAR_11, 0, sizeof(struct ext2_extent_handle));

 VAR_11->ino = VAR_8;
 VAR_11->fs = VAR_7;

 if (VAR_9) {
  VAR_11->inode = VAR_9;
 } else {
  VAR_11->inode = &VAR_11->inodebuf;
  VAR_12 = FUNC_9(VAR_7, VAR_8, VAR_11->inode);
  if (VAR_12)
   goto errout;
 }

 VAR_14 = (struct ext3_extent_header *) &VAR_11->inode->i_block[0];

 for (VAR_13=0; VAR_13 < VAR_4; VAR_13++)
  if (VAR_11->inode->i_block[VAR_13])
   break;
 if (VAR_13 >= VAR_4) {
  VAR_14->eh_magic = FUNC_3(VAR_5);
  VAR_14->eh_depth = 0;
  VAR_14->eh_entries = 0;
  VAR_13 = (sizeof(VAR_11->inode->i_block) - sizeof(*VAR_14)) /
   sizeof(struct ext3_extent);
  VAR_14->eh_max = FUNC_3(VAR_13);
  VAR_11->inode->i_flags |= VAR_6;
 }

 if (!(VAR_11->inode->i_flags & VAR_6)) {
  VAR_12 = VAR_1;
  goto errout;
 }

 VAR_12 = FUNC_5(VAR_14, sizeof(VAR_11->inode->i_block));
 if (VAR_12)
  goto errout;

 VAR_11->max_depth = FUNC_8(VAR_14->eh_depth);
 VAR_11->type = FUNC_8(VAR_14->eh_magic);

 VAR_11->max_paths = VAR_11->max_depth + 1;
 VAR_12 = FUNC_7(VAR_11->max_paths *
        sizeof(struct extent_path),
        &VAR_11->path);
 VAR_11->path[0].buf = (char *) VAR_11->inode->i_block;

 VAR_11->path[0].left = VAR_11->path[0].entries =
  FUNC_8(VAR_14->eh_entries);
 VAR_11->path[0].max_entries = FUNC_8(VAR_14->eh_max);
 VAR_11->path[0].curr = 0;
 VAR_11->path[0].end_blk =
  (FUNC_2(VAR_11->inode) + VAR_7->blocksize - 1) >>
   FUNC_0(VAR_7->super);
 VAR_11->path[0].visit_num = 1;
 VAR_11->level = 0;
 VAR_11->magic = VAR_3;

 *VAR_10 = VAR_11;
 return 0;

errout:
 FUNC_4(VAR_11);
 return VAR_12;
}
