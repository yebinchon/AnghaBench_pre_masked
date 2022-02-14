
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void uint8_t ;
struct pool {scalar_t__ n_used; scalar_t__ n_tiles; struct pool* next; } ;
struct mempool {int tile_size; scalar_t__ at_least; struct pool* first_pool; void* freelist; } ;


 size_t FUNC_0 (int) ;
 size_t FUNC_1 (scalar_t__,size_t) ;
 size_t FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 struct pool* FUNC_5 (size_t) ;

void* FUNC_6(struct mempool *VAR_0) {
        size_t VAR_1;




        FUNC_4(VAR_0->tile_size >= sizeof(void*));
        FUNC_4(VAR_0->at_least > 0);

        if (VAR_0->freelist) {
                void *VAR_2;

                VAR_2 = VAR_0->freelist;
                VAR_0->freelist = * (void**) VAR_0->freelist;
                return VAR_2;
        }

        if (FUNC_3(!VAR_0->first_pool) ||
            FUNC_3(VAR_0->first_pool->n_used >= VAR_0->first_pool->n_tiles)) {
                size_t VAR_3, VAR_4;
                struct pool *VAR_5;

                VAR_4 = VAR_0->first_pool ? VAR_0->first_pool->n_tiles : 0;
                VAR_4 = FUNC_1(VAR_0->at_least, VAR_4 * 2);
                VAR_3 = FUNC_2(FUNC_0(sizeof(struct pool)) + VAR_4*VAR_0->tile_size);
                VAR_4 = (VAR_3 - FUNC_0(sizeof(struct pool))) / VAR_0->tile_size;

                VAR_5 = FUNC_5(VAR_3);
                if (!VAR_5)
                        return ((void*)0);

                VAR_5->next = VAR_0->first_pool;
                VAR_5->n_tiles = VAR_4;
                VAR_5->n_used = 0;

                VAR_0->first_pool = VAR_5;
        }

        VAR_1 = VAR_0->first_pool->n_used++;

        return ((uint8_t*) VAR_0->first_pool) + FUNC_0(sizeof(struct pool)) + VAR_1*VAR_0->tile_size;
}
