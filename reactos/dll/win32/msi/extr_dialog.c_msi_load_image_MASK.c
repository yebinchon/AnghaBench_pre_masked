
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef int MSIDATABASE ;
typedef int LPWSTR ;
typedef int LPCWSTR ;
typedef int * HANDLE ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (char*,int *,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static HANDLE FUNC_9( MSIDATABASE *VAR_1, LPCWSTR VAR_2, UINT VAR_3,
                              UINT VAR_4, UINT VAR_5, UINT VAR_6 )
{
    MSIRECORD *VAR_7;
    HANDLE VAR_8 = ((void*)0);
    LPWSTR VAR_9;
    UINT VAR_10;

    FUNC_3("%p %s %u %u %08x\n", VAR_1, FUNC_4(VAR_2), VAR_4, VAR_5, VAR_6);

    if (!(VAR_9 = FUNC_5( VAR_1 ))) return ((void*)0);

    VAR_7 = FUNC_7( VAR_1, VAR_2 );
    if( VAR_7 )
    {
        VAR_10 = FUNC_2( VAR_7, 2, VAR_9 );
        if( VAR_10 == VAR_0 )
        {
            VAR_8 = FUNC_1( 0, VAR_9, VAR_3, VAR_4, VAR_5, VAR_6 );
        }
        FUNC_8( &VAR_7->hdr );
    }
    FUNC_0( VAR_9 );

    FUNC_6( VAR_9 );
    return VAR_8;
}
