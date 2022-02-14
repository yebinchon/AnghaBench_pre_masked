
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {size_t CurrentMhz; } ;
typedef TYPE_1__ PROCESSOR_POWER_INFORMATION ;
typedef int NTSTATUS ;


 int FUNC_0 (int ,int *,int ,TYPE_1__*,size_t) ;
 int VAR_0 ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (size_t) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static UINT FUNC_4( UINT VAR_1 )
{
    PROCESSOR_POWER_INFORMATION *VAR_2;
    UINT VAR_3 = 1000, VAR_4 = FUNC_1() * sizeof(PROCESSOR_POWER_INFORMATION);
    NTSTATUS VAR_5;

    if ((VAR_2 = FUNC_2( VAR_4 )))
    {
        VAR_5 = FUNC_0( VAR_0, ((void*)0), 0, VAR_2, VAR_4 );
        if (!VAR_5) VAR_3 = VAR_2[VAR_1].CurrentMhz;
        FUNC_3( VAR_2 );
    }
    return VAR_3;
}
