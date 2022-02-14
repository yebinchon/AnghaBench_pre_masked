
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_4__ {scalar_t__ fClusterStart; } ;
struct TYPE_5__ {TYPE_1__ sva; } ;
typedef TYPE_2__ SCRIPT_GLYPHPROP ;



__attribute__((used)) static void FUNC_0(const int VAR_0, const int VAR_1, WORD* VAR_2, SCRIPT_GLYPHPROP *VAR_3)
{
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    {
        if (!VAR_3[VAR_4].sva.fClusterStart)
        {
            int VAR_5;
            for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
            {
                if (VAR_2[VAR_5] == VAR_4)
                {
                    int VAR_6 = VAR_5;
                    while (VAR_6 >= 0 && VAR_6 <VAR_1 && !VAR_3[VAR_2[VAR_6]].sva.fClusterStart)
                        VAR_6-=1;
                    if (VAR_6 >= 0 && VAR_6 <VAR_1 && VAR_3[VAR_2[VAR_6]].sva.fClusterStart)
                        VAR_2[VAR_5] = VAR_2[VAR_6];
                }
            }
        }
    }
}
