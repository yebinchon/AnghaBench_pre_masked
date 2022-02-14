
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ maxex; scalar_t__ minex; int max; int min; } ;
typedef TYPE_1__ zlexrangespec ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 unsigned char* FUNC_2 (unsigned char*,int) ;
 int FUNC_3 (unsigned char*,TYPE_1__*) ;
 int FUNC_4 (unsigned char*,TYPE_1__*) ;

int FUNC_5(unsigned char *VAR_0, zlexrangespec *VAR_1) {
    unsigned char *VAR_2;


    int VAR_3 = FUNC_0(VAR_1->min,VAR_1->max);
    if (VAR_3 > 0 || (VAR_3 == 0 && (VAR_1->minex || VAR_1->maxex)))
        return 0;

    VAR_2 = FUNC_2(VAR_0,-2);
    if (VAR_2 == ((void*)0)) return 0;
    if (!FUNC_3(VAR_2,VAR_1))
        return 0;

    VAR_2 = FUNC_2(VAR_0,0);
    FUNC_1(VAR_2 != ((void*)0));
    if (!FUNC_4(VAR_2,VAR_1))
        return 0;

    return 1;
}
