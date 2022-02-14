
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_4__ {int refs; } ;
typedef TYPE_1__ Context ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static ULONG FUNC_3(Context *VAR_0)
{


    if (!VAR_0->refs)
    {
        FUNC_1(FUNC_0(), 0, VAR_0);
        return 0;
    }

    return FUNC_2(&VAR_0->refs);
}
