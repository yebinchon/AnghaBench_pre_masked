
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int active; int n_allocated; int ptr; } ;
typedef TYPE_1__ CacheMem ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(CacheMem *VAR_1, unsigned VAR_2) {
        FUNC_1(VAR_1);

        if (!FUNC_0(VAR_1->ptr, VAR_1->n_allocated, VAR_2)) {
                if (VAR_2 > 0)
                        return -VAR_0;
        }

        if (!VAR_1->active) {
                VAR_1->active = 1;
                return 1;
        }

        return 0;
}
