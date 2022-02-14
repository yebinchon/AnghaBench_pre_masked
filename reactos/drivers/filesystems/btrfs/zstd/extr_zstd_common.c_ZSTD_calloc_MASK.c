
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* (* customAlloc ) (int ,size_t) ;int opaque; } ;
typedef TYPE_1__ ZSTD_customMem ;


 int FUNC_0 (void* const,int ,size_t) ;
 void* FUNC_1 (int ,size_t) ;

void* FUNC_2(size_t VAR_0, ZSTD_customMem VAR_1)
{


    void* const VAR_2 = VAR_1.customAlloc(VAR_1.opaque, VAR_0);
    FUNC_0(VAR_2, 0, VAR_0);
    return VAR_2;
}
