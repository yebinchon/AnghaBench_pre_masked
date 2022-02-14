
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next; } ;
typedef TYPE_1__ column_info ;
typedef scalar_t__ UINT ;



__attribute__((used)) static UINT FUNC_0( const column_info *VAR_0 )
{
    UINT VAR_1 = 0;
    for ( ; VAR_0; VAR_0 = VAR_0->next )
        VAR_1++;
    return VAR_1;
}
