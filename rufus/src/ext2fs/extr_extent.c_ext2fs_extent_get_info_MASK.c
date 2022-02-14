
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct extent_path {char* buf; int entries; int max_entries; scalar_t__ curr; } ;
struct ext3_extent_idx {int dummy; } ;
struct ext3_extent {int dummy; } ;
struct ext2_extent_info {int curr_entry; int num_entries; int max_entries; int bytes_avail; int curr_level; int max_uninit_len; int max_len; int max_pblk; int max_lblk; int max_depth; } ;
typedef TYPE_1__* ext2_extent_handle_t ;
typedef int errcode_t ;
struct TYPE_4__ {int level; int max_depth; struct extent_path* path; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ext2_extent_info*,int ,int) ;

errcode_t FUNC_2(ext2_extent_handle_t VAR_5,
     struct ext2_extent_info *VAR_6)
{
 struct extent_path *VAR_7;

 FUNC_0(VAR_5, VAR_0);

 FUNC_1(VAR_6, 0, sizeof(struct ext2_extent_info));

 VAR_7 = VAR_5->path + VAR_5->level;
 if (VAR_7) {
  if (VAR_7->curr)
   VAR_6->curr_entry = ((char *) VAR_7->curr - VAR_7->buf) /
    sizeof(struct ext3_extent_idx);
  else
   VAR_6->curr_entry = 0;
  VAR_6->num_entries = VAR_7->entries;
  VAR_6->max_entries = VAR_7->max_entries;
  VAR_6->bytes_avail = (VAR_7->max_entries - VAR_7->entries) *
   sizeof(struct ext3_extent);
 }

 VAR_6->curr_level = VAR_5->level;
 VAR_6->max_depth = VAR_5->max_depth;
 VAR_6->max_lblk = VAR_2;
 VAR_6->max_pblk = VAR_3;
 VAR_6->max_len = VAR_1;
 VAR_6->max_uninit_len = VAR_4;

 return 0;
}
