
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_2__ {size_t count; int * fields; } ;
typedef TYPE_1__ MSIRECORD ;
typedef int MSIOBJECTHDR ;


 int FUNC_0 (int *) ;

void FUNC_1( MSIOBJECTHDR *VAR_0 )
{
    MSIRECORD *VAR_1 = (MSIRECORD *) VAR_0;
    UINT VAR_2;

    for( VAR_2=0; VAR_2<=VAR_1->count; VAR_2++ )
        FUNC_0( &VAR_1->fields[VAR_2] );
}
