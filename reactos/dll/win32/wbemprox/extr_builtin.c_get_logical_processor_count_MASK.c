
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG_PTR ;
typedef int ULONG ;
typedef int UINT ;
struct TYPE_5__ {scalar_t__ Relationship; int ProcessorMask; } ;
typedef TYPE_1__ SYSTEM_LOGICAL_PROCESSOR_INFORMATION ;
typedef scalar_t__ NTSTATUS ;


 scalar_t__ FUNC_0 (int ,TYPE_1__*,int,int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static UINT FUNC_4( UINT *VAR_5 )
{
    SYSTEM_LOGICAL_PROCESSOR_INFORMATION *VAR_6;
    UINT VAR_7, VAR_8, VAR_9 = 0;
    NTSTATUS VAR_10;
    ULONG VAR_11;

    if (VAR_5) *VAR_5 = FUNC_1();
    VAR_10 = FUNC_0( VAR_4, ((void*)0), 0, &VAR_11 );
    if (VAR_10 != VAR_2) return FUNC_1();

    if (!(VAR_6 = FUNC_2( VAR_11 ))) return FUNC_1();
    VAR_10 = FUNC_0( VAR_4, VAR_6, VAR_11, &VAR_11 );
    if (VAR_10 != VAR_3)
    {
        FUNC_3( VAR_6 );
        return FUNC_1();
    }
    if (VAR_5) *VAR_5 = 0;
    for (VAR_7 = 0; VAR_7 < VAR_11 / sizeof(*VAR_6); VAR_7++)
    {
        if (VAR_6[VAR_7].Relationship == VAR_0)
        {
            for (VAR_8 = 0; VAR_8 < sizeof(ULONG_PTR); VAR_8++) if (VAR_6[VAR_7].ProcessorMask & (1 << VAR_8)) VAR_9++;
        }
        else if (VAR_6[VAR_7].Relationship == VAR_1 && VAR_5)
        {
            for (VAR_8 = 0; VAR_8 < sizeof(ULONG_PTR); VAR_8++) if (VAR_6[VAR_7].ProcessorMask & (1 << VAR_8)) (*VAR_5)++;
        }
    }
    FUNC_3( VAR_6 );
    return VAR_9;
}
