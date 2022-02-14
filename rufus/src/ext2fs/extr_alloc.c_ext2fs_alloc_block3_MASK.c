
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct blk_alloc_ctx {int dummy; } ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef int blk64_t ;
struct TYPE_9__ {int io; int blocksize; int block_map; scalar_t__ (* get_alloc_block ) (TYPE_1__*,int ,int *) ;scalar_t__ (* get_alloc_block2 ) (TYPE_1__*,int ,int *,struct blk_alloc_ctx*) ;} ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ,int *,struct blk_alloc_ctx*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int,int *,int *) ;
 scalar_t__ FUNC_4 (int ,int ,int,char*) ;
 int FUNC_5 (char*,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ,int *,struct blk_alloc_ctx*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ,int *) ;

errcode_t FUNC_8(ext2_filsys VAR_0, blk64_t VAR_1, char *VAR_2,
         blk64_t *VAR_3, struct blk_alloc_ctx *VAR_4)
{
 errcode_t VAR_5;
 blk64_t VAR_6;

 if (VAR_0->get_alloc_block2) {
  VAR_5 = (VAR_0->get_alloc_block2)(VAR_0, VAR_1, &VAR_6, VAR_4);
  if (VAR_5)
   goto fail;
 } else if (VAR_0->get_alloc_block) {
  VAR_5 = (VAR_0->get_alloc_block)(VAR_0, VAR_1, &VAR_6);
  if (VAR_5)
   goto fail;
 } else {
  if (!VAR_0->block_map) {
   VAR_5 = FUNC_2(VAR_0);
   if (VAR_5)
    goto fail;
  }

  VAR_5 = FUNC_1(VAR_0, VAR_1, 0, &VAR_6, VAR_4);
  if (VAR_5)
   goto fail;
 }

 if (VAR_2) {
  FUNC_5(VAR_2, 0, VAR_0->blocksize);
  VAR_5 = FUNC_4(VAR_0->io, VAR_6, 1, VAR_2);
 } else
  VAR_5 = FUNC_3(VAR_0, VAR_6, 1, ((void*)0), ((void*)0));
 if (VAR_5)
  goto fail;

 FUNC_0(VAR_0, VAR_6, +1);
 *VAR_3 = VAR_6;

fail:
 return VAR_5;
}
