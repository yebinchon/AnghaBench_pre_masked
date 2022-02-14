
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_3__ {int Guid; } ;
typedef size_t* PULONG ;
typedef TYPE_1__* PGUIDREGINFO ;
typedef int LPGUID ;
typedef int BOOLEAN ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int VAR_1 ;

BOOLEAN
FUNC_2(
    PGUIDREGINFO VAR_2,
    ULONG VAR_3,
    LPGUID VAR_4,
    PULONG VAR_5
    )
{
    ULONG VAR_6;

    FUNC_1();

    for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
    {
        if (FUNC_0(VAR_4, &VAR_2[VAR_6].Guid))
        {
            *VAR_5 = VAR_6;
            return(VAR_1);
        }
    }

    return(VAR_0);
}
