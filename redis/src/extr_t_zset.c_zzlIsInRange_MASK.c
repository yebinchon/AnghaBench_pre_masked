
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ min; scalar_t__ max; scalar_t__ maxex; scalar_t__ minex; } ;
typedef TYPE_1__ zrangespec ;


 int FUNC_0 (int ) ;
 unsigned char* FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (double,TYPE_1__*) ;
 int FUNC_3 (double,TYPE_1__*) ;
 double FUNC_4 (unsigned char*) ;

int FUNC_5(unsigned char *VAR_0, zrangespec *VAR_1) {
    unsigned char *VAR_2;
    double VAR_3;


    if (VAR_1->min > VAR_1->max ||
            (VAR_1->min == VAR_1->max && (VAR_1->minex || VAR_1->maxex)))
        return 0;

    VAR_2 = FUNC_1(VAR_0,-1);
    if (VAR_2 == ((void*)0)) return 0;
    VAR_3 = FUNC_4(VAR_2);
    if (!FUNC_2(VAR_3,VAR_1))
        return 0;

    VAR_2 = FUNC_1(VAR_0,1);
    FUNC_0(VAR_2 != ((void*)0));
    VAR_3 = FUNC_4(VAR_2);
    if (!FUNC_3(VAR_3,VAR_1))
        return 0;

    return 1;
}
