
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ext2fs_numeric_progress_struct {int dummy; } ;
typedef TYPE_2__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef scalar_t__ dgrp_t ;
struct TYPE_9__ {scalar_t__ group_desc_count; TYPE_1__* progress_ops; int block_map; } ;
struct TYPE_8__ {int (* close ) (TYPE_2__*,struct ext2fs_numeric_progress_struct*,int *) ;int (* update ) (TYPE_2__*,struct ext2fs_numeric_progress_struct*,scalar_t__) ;int (* init ) (TYPE_2__*,struct ext2fs_numeric_progress_struct*,int *,scalar_t__) ;} ;


 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_1 (TYPE_2__*,struct ext2fs_numeric_progress_struct*,int *,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,struct ext2fs_numeric_progress_struct*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,struct ext2fs_numeric_progress_struct*,int *) ;

errcode_t FUNC_4(ext2_filsys VAR_0)
{
 errcode_t VAR_1;
 dgrp_t VAR_2;
 struct ext2fs_numeric_progress_struct VAR_3;

 if (VAR_0->progress_ops && VAR_0->progress_ops->init)
  (VAR_0->progress_ops->init)(VAR_0, &VAR_3, ((void*)0),
      VAR_0->group_desc_count);

 for (VAR_2 = 0; VAR_2 < VAR_0->group_desc_count; VAR_2++) {
  if (VAR_0->progress_ops && VAR_0->progress_ops->update)
   (VAR_0->progress_ops->update)(VAR_0, &VAR_3, VAR_2);
  VAR_1 = FUNC_0(VAR_0, VAR_2, VAR_0->block_map);
  if (VAR_1)
   return VAR_1;
 }
 if (VAR_0->progress_ops && VAR_0->progress_ops->close)
  (VAR_0->progress_ops->close)(VAR_0, &VAR_3, ((void*)0));
 return 0;
}
