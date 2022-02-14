
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lfs1_disk_superblock {void* version; void* block_count; void* block_size; void** root; } ;


 void* FUNC_0 (void*) ;

__attribute__((used)) static void FUNC_1(struct lfs1_disk_superblock *VAR_0) {
    VAR_0->root[0] = FUNC_0(VAR_0->root[0]);
    VAR_0->root[1] = FUNC_0(VAR_0->root[1]);
    VAR_0->block_size = FUNC_0(VAR_0->block_size);
    VAR_0->block_count = FUNC_0(VAR_0->block_count);
    VAR_0->version = FUNC_0(VAR_0->version);
}
