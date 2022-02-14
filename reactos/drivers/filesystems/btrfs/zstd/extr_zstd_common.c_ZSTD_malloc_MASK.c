
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* (* customAlloc ) (int ,size_t) ;int opaque; } ;
typedef TYPE_1__ ZSTD_customMem ;


 void* FUNC_0 (int ,size_t) ;

void* FUNC_1(size_t VAR_0, ZSTD_customMem VAR_1)
{
    return VAR_1.customAlloc(VAR_1.opaque, VAR_0);
}
