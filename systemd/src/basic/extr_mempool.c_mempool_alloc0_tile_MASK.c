
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mempool {int tile_size; } ;


 void* FUNC_0 (struct mempool*) ;
 int FUNC_1 (void*,int ) ;

void* FUNC_2(struct mempool *VAR_0) {
        void *VAR_1;

        VAR_1 = FUNC_0(VAR_0);
        if (VAR_1)
                FUNC_1(VAR_1, VAR_0->tile_size);
        return VAR_1;
}
