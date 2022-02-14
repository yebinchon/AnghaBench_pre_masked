
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lfs1_disk_dir {void** tail; void* size; void* rev; } ;


 void* FUNC_0 (void*) ;

__attribute__((used)) static void FUNC_1(struct lfs1_disk_dir *VAR_0) {
    VAR_0->rev = FUNC_0(VAR_0->rev);
    VAR_0->size = FUNC_0(VAR_0->size);
    VAR_0->tail[0] = FUNC_0(VAR_0->tail[0]);
    VAR_0->tail[1] = FUNC_0(VAR_0->tail[1]);
}
