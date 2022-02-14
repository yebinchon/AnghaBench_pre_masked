
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int storage; int * property; } ;
typedef TYPE_1__ MSISUMMARYINFO ;
typedef int MSIOBJECTHDR ;
typedef size_t DWORD ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2( MSIOBJECTHDR *VAR_1 )
{
    MSISUMMARYINFO *VAR_2 = (MSISUMMARYINFO *) VAR_1;
    DWORD VAR_3;

    for( VAR_3 = 0; VAR_3 < VAR_0; VAR_3++ )
        FUNC_1( &VAR_2->property[VAR_3] );
    FUNC_0( VAR_2->storage );
}
