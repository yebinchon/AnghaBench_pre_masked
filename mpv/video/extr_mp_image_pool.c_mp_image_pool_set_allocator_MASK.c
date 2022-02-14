
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_image_pool {void* allocator_ctx; int allocator; } ;
typedef int mp_image_allocator ;



void FUNC_0(struct mp_image_pool *VAR_0,
                                 mp_image_allocator VAR_1, void *VAR_2)
{
    VAR_0->allocator = VAR_1;
    VAR_0->allocator_ctx = VAR_2;
}
