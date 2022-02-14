
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* (* alloc ) (TYPE_1__*,size_t) ;} ;
typedef TYPE_1__ Jbig2Allocator ;


 size_t VAR_0 ;
 void* FUNC_0 (TYPE_1__*,size_t) ;

void *
FUNC_1(Jbig2Allocator *VAR_1, size_t VAR_2, size_t VAR_3)
{


    if (VAR_3 > 0 && VAR_2 > VAR_0 / VAR_3)
        return ((void*)0);
    return VAR_1->alloc(VAR_1, VAR_2 * VAR_3);
}
