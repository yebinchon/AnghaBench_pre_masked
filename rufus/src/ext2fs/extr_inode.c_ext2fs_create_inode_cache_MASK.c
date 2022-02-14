
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ext2_inode_cache_ent {int dummy; } ;
struct ext2_inode_cache {int dummy; } ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
struct TYPE_10__ {TYPE_2__* inode; } ;
struct TYPE_9__ {int cache_last; unsigned int cache_size; int refcount; TYPE_4__* cache; scalar_t__ buffer_blk; struct TYPE_9__* buffer; } ;
struct TYPE_8__ {int blocksize; TYPE_2__* icache; int super; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (unsigned int,int,TYPE_4__**) ;
 scalar_t__ FUNC_4 (int,TYPE_2__**) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;

errcode_t FUNC_6(ext2_filsys VAR_0, unsigned int VAR_1)
{
 unsigned VAR_2;
 errcode_t VAR_3;

 if (VAR_0->icache)
  return 0;
 VAR_3 = FUNC_4(sizeof(struct ext2_inode_cache), &VAR_0->icache);
 if (VAR_3)
  return VAR_3;

 FUNC_5(VAR_0->icache, 0, sizeof(struct ext2_inode_cache));
 VAR_3 = FUNC_4(VAR_0->blocksize, &VAR_0->icache->buffer);
 if (VAR_3)
  goto errout;

 VAR_0->icache->buffer_blk = 0;
 VAR_0->icache->cache_last = -1;
 VAR_0->icache->cache_size = VAR_1;
 VAR_0->icache->refcount = 1;
 VAR_3 = FUNC_3(VAR_0->icache->cache_size,
      sizeof(struct ext2_inode_cache_ent),
      &VAR_0->icache->cache);
 if (VAR_3)
  goto errout;

 for (VAR_2 = 0; VAR_2 < VAR_0->icache->cache_size; VAR_2++) {
  VAR_3 = FUNC_4(FUNC_0(VAR_0->super),
     &VAR_0->icache->cache[VAR_2].inode);
  if (VAR_3)
   goto errout;
 }

 FUNC_1(VAR_0);
 return 0;
errout:
 FUNC_2(VAR_0->icache);
 VAR_0->icache = 0;
 return VAR_3;
}
