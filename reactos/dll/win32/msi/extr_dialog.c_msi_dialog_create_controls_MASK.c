
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int msi_dialog ;
typedef size_t UINT ;
struct TYPE_2__ {int (* func ) (int *,int *) ;int control_type; } ;
typedef int MSIRECORD ;
typedef int * LPVOID ;
typedef int LPCWSTR ;


 int FUNC_0 (char*,int ) ;
 size_t VAR_0 ;
 int FUNC_1 (int *,int) ;
 size_t VAR_1 ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static UINT FUNC_5( MSIRECORD *VAR_3, LPVOID VAR_4 )
{
    msi_dialog *VAR_5 = VAR_4;
    LPCWSTR VAR_6;
    UINT VAR_7;


    VAR_6 = FUNC_1( VAR_3, 3 );
    for( VAR_7=0; VAR_7<VAR_1; VAR_7++ )
        if (!FUNC_3( VAR_2[VAR_7].control_type, VAR_6 ))
            break;
    if( VAR_7 != VAR_1 )
        VAR_2[VAR_7].func( VAR_5, VAR_3 );
    else
        FUNC_0("no handler for element type %s\n", FUNC_2(VAR_6));

    return VAR_0;
}
