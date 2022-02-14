
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ext2_filsys ;
struct TYPE_4__ {scalar_t__ magic; scalar_t__ image_io; scalar_t__ io; scalar_t__ block_sha_map; struct TYPE_4__* mmp_cmp; struct TYPE_4__* mmp_buf; scalar_t__ icache; scalar_t__ dblist; scalar_t__ badblocks; struct TYPE_4__* image_header; scalar_t__ inode_map; scalar_t__ block_map; struct TYPE_4__* group_desc; struct TYPE_4__* orig_super; struct TYPE_4__* super; struct TYPE_4__* device_name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__**) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,int ,int ,int *,int *) ;
 int FUNC_8 (scalar_t__) ;

void FUNC_9(ext2_filsys VAR_1)
{
 if (!VAR_1 || (VAR_1->magic != VAR_0))
  return;
 if (VAR_1->image_io != VAR_1->io) {
  if (VAR_1->image_io)
   FUNC_8(VAR_1->image_io);
 }
 if (VAR_1->io) {
  FUNC_8(VAR_1->io);
 }
 if (VAR_1->device_name)
  FUNC_5(&VAR_1->device_name);
 if (VAR_1->super)
  FUNC_5(&VAR_1->super);
 if (VAR_1->orig_super)
  FUNC_5(&VAR_1->orig_super);
 if (VAR_1->group_desc)
  FUNC_5(&VAR_1->group_desc);
 if (VAR_1->block_map)
  FUNC_1(VAR_1->block_map);
 if (VAR_1->inode_map)
  FUNC_3(VAR_1->inode_map);
 if (VAR_1->image_header)
  FUNC_5(&VAR_1->image_header);

 if (VAR_1->badblocks)
  FUNC_0(VAR_1->badblocks);
 VAR_1->badblocks = 0;

 if (VAR_1->dblist)
  FUNC_2(VAR_1->dblist);

 if (VAR_1->icache)
  FUNC_4(VAR_1->icache);

 if (VAR_1->mmp_buf)
  FUNC_5(&VAR_1->mmp_buf);
 if (VAR_1->mmp_cmp)
  FUNC_5(&VAR_1->mmp_cmp);

 if (VAR_1->block_sha_map)
  FUNC_6(VAR_1->block_sha_map);

 VAR_1->magic = 0;


 FUNC_7(((void*)0), 0, 0, ((void*)0), ((void*)0));
 FUNC_5(&VAR_1);
}
