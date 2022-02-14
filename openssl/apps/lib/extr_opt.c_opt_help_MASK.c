
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int start ;
struct TYPE_5__ {scalar_t__ name; char valtype; } ;
typedef TYPE_1__ OPTIONS ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_1__ const*,int) ;
 int FUNC_2 (char*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_1__ const*) ;

void FUNC_5(const OPTIONS *VAR_5)
{
    const OPTIONS *VAR_6;
    int VAR_7;
    int VAR_8;
    int VAR_9 = 5;
    char VAR_10[80 + 1];


    VAR_8 = VAR_5[0].name != VAR_1;


    for (VAR_6 = VAR_5; VAR_6->name; VAR_6++) {
        if (VAR_6->name == VAR_2)
            continue;
        VAR_7 = 2 + (int)FUNC_3(VAR_6->name);
        if (VAR_6->valtype != '-')
            VAR_7 += 1 + FUNC_3(FUNC_4(VAR_6));
        if (VAR_7 < VAR_0 && VAR_7 > VAR_9)
            VAR_9 = VAR_7;
        FUNC_0(VAR_7 < (int)sizeof(VAR_10));
    }

    if (VAR_8) {
        FUNC_2("Usage: %s [options]\n", VAR_4);
        if (VAR_5[0].name != VAR_3)
            FUNC_2("Valid options are:\n", VAR_4);
    }


    for (VAR_6 = VAR_5; VAR_6->name; VAR_6++) {
        FUNC_1(VAR_6, VAR_9);
    }
}
