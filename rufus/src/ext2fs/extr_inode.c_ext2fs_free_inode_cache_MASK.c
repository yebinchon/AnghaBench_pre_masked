
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_inode_cache {unsigned int cache_size; scalar_t__ buffer_blk; struct ext2_inode_cache* cache; struct ext2_inode_cache* inode; struct ext2_inode_cache* buffer; scalar_t__ refcount; } ;


 int FUNC_0 (struct ext2_inode_cache**) ;

void FUNC_1(struct ext2_inode_cache *VAR_0)
{
 unsigned VAR_1;

 if (--VAR_0->refcount)
  return;
 if (VAR_0->buffer)
  FUNC_0(&VAR_0->buffer);
 for (VAR_1 = 0; VAR_1 < VAR_0->cache_size; VAR_1++)
  FUNC_0(&VAR_0->cache[VAR_1].inode);
 if (VAR_0->cache)
  FUNC_0(&VAR_0->cache);
 VAR_0->buffer_blk = 0;
 FUNC_0(&VAR_0);
}
