
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef size_t ULONG ;
struct TYPE_2__ {scalar_t__ Address; } ;
typedef size_t* PULONG ;
typedef int BOOLEAN ;


 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static BOOLEAN
FUNC_0(ULONG_PTR VAR_4, PULONG VAR_5)
{
    ULONG VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
    {
        if (VAR_2[VAR_6].Address == VAR_4)
        {
            if (VAR_5)
                *VAR_5 = VAR_6;
            return VAR_3;
        }
    }

    return VAR_0;
}
