
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ custom_malloc_fn ;
typedef scalar_t__ custom_free_fn ;
struct TYPE_2__ {void* opaque; scalar_t__ free; scalar_t__ malloc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;

void FUNC_0(custom_malloc_fn VAR_3, custom_free_fn VAR_4, void *VAR_5)
{
    VAR_2.malloc = VAR_3 ? VAR_3 : VAR_1;
    VAR_2.free = VAR_4 ? VAR_4 : VAR_0;
    VAR_2.opaque = VAR_5;
}
