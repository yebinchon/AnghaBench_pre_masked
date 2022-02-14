
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nvram_header_t ;
struct TYPE_3__ {size_t offset; int * mmap; } ;
typedef TYPE_1__ nvram_handle_t ;



nvram_header_t * FUNC_0(nvram_handle_t *VAR_0)
{
 return (nvram_header_t *) &VAR_0->mmap[VAR_0->offset];
}
