
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* attr_max; void* file_max; void* name_max; void* block_count; void* block_size; void* version; } ;
typedef TYPE_1__ lfs2_superblock_t ;


 void* FUNC_0 (void*) ;

__attribute__((used)) static inline void FUNC_1(lfs2_superblock_t *VAR_0) {
    VAR_0->version = FUNC_0(VAR_0->version);
    VAR_0->block_size = FUNC_0(VAR_0->block_size);
    VAR_0->block_count = FUNC_0(VAR_0->block_count);
    VAR_0->name_max = FUNC_0(VAR_0->name_max);
    VAR_0->file_max = FUNC_0(VAR_0->file_max);
    VAR_0->attr_max = FUNC_0(VAR_0->attr_max);
}
