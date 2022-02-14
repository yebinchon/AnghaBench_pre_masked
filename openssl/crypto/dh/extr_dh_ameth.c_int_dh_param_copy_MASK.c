
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dirty_cnt; int length; scalar_t__ seedlen; int * seed; int j; int q; int g; int p; } ;
typedef TYPE_1__ DH ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(DH *VAR_0, const DH *VAR_1, int VAR_2)
{
    if (VAR_2 == -1)
        VAR_2 = ! !VAR_1->q;
    if (!FUNC_2(&VAR_0->p, VAR_1->p))
        return 0;
    if (!FUNC_2(&VAR_0->g, VAR_1->g))
        return 0;
    if (VAR_2) {
        if (!FUNC_2(&VAR_0->q, VAR_1->q))
            return 0;
        if (!FUNC_2(&VAR_0->j, VAR_1->j))
            return 0;
        FUNC_0(VAR_0->seed);
        VAR_0->seed = ((void*)0);
        VAR_0->seedlen = 0;
        if (VAR_1->seed) {
            VAR_0->seed = FUNC_1(VAR_1->seed, VAR_1->seedlen);
            if (!VAR_0->seed)
                return 0;
            VAR_0->seedlen = VAR_1->seedlen;
        }
    } else
        VAR_0->length = VAR_1->length;
    VAR_0->dirty_cnt++;
    return 1;
}
