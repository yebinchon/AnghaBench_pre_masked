
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* od; struct TYPE_5__* o; struct TYPE_5__* v; struct TYPE_5__* t; } ;
typedef TYPE_1__ RRDR ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int) ;

inline void FUNC_4(RRDR *VAR_0)
{
    if(FUNC_3(!VAR_0)) {
        FUNC_0("NULL value given!");
        return;
    }

    FUNC_2(VAR_0);
    FUNC_1(VAR_0->t);
    FUNC_1(VAR_0->v);
    FUNC_1(VAR_0->o);
    FUNC_1(VAR_0->od);
    FUNC_1(VAR_0);
}
