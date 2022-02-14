
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct oletls {int spies; } ;
struct TYPE_2__ {struct oletls* ReservedForOle; } ;


 TYPE_1__* FUNC_0 () ;
 struct oletls* FUNC_1 (int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline struct oletls *FUNC_3(void)
{
    if (!FUNC_0()->ReservedForOle)
    {
        struct oletls *VAR_0 = FUNC_1(sizeof(*VAR_0));
        if (VAR_0)
            FUNC_2(&VAR_0->spies);
        FUNC_0()->ReservedForOle = VAR_0;
    }

    return FUNC_0()->ReservedForOle;
}
