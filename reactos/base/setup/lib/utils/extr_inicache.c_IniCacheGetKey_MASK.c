
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * Data; } ;
typedef int * PWCHAR ;
typedef int * PINICACHESECTION ;
typedef TYPE_1__* PINICACHEKEY ;
typedef int NTSTATUS ;


 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

NTSTATUS
FUNC_3(
    PINICACHESECTION VAR_2,
    PWCHAR VAR_3,
    PWCHAR *VAR_4)
{
    PINICACHEKEY VAR_5;

    if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
    {
        FUNC_0("Invalid parameter\n");
        return VAR_0;
    }

    *VAR_4 = ((void*)0);

    VAR_5 = FUNC_1(VAR_2, VAR_3, FUNC_2(VAR_3));
    if (VAR_5 == ((void*)0))
    {
        return VAR_0;
    }

    *VAR_4 = VAR_5->Data;

    return VAR_1;
}
