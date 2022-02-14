
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sortcount; scalar_t__* sorted; } ;
typedef TYPE_1__ string_table ;
typedef scalar_t__ UINT ;


 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static void FUNC_2( string_table *VAR_0, UINT VAR_1 )
{
    int VAR_2;

    VAR_2 = FUNC_0( VAR_0, VAR_1 );
    if (VAR_2 == -1)
        return;

    FUNC_1( &VAR_0->sorted[VAR_2] + 1, &VAR_0->sorted[VAR_2], (VAR_0->sortcount - VAR_2) * sizeof(UINT) );
    VAR_0->sorted[VAR_2] = VAR_1;
    VAR_0->sortcount++;
}
