
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
typedef scalar_t__ ULONG ;
struct TYPE_3__ {int * pwcsName; } ;
typedef TYPE_1__ STATSTG ;
typedef int IStorage ;
typedef int IEnumSTATSTG ;
typedef int HRESULT ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int,TYPE_1__*,scalar_t__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *,int ,int **) ;
 int FUNC_5 (char*,scalar_t__,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;

void FUNC_8( IStorage *VAR_0 )
{
    IEnumSTATSTG *VAR_1 = ((void*)0);
    HRESULT VAR_2;
    STATSTG VAR_3;
    ULONG VAR_4, VAR_5;
    WCHAR VAR_6[0x40];

    VAR_2 = FUNC_4( VAR_0, 0, ((void*)0), 0, &VAR_1 );
    if( FUNC_1( VAR_2 ) )
        return;

    VAR_4 = 0;
    while( 1 )
    {
        VAR_5 = 0;
        VAR_2 = FUNC_2( VAR_1, 1, &VAR_3, &VAR_5 );
        if( FUNC_1( VAR_2 ) || !VAR_5 )
            break;
        FUNC_7( VAR_3.pwcsName, VAR_6 );
        FUNC_5("stream %2d -> %s %s\n", VAR_4,
              FUNC_6(VAR_3.pwcsName), FUNC_6(VAR_6) );
        FUNC_0( VAR_3.pwcsName );
        VAR_4++;
    }

    FUNC_3( VAR_1 );
}
