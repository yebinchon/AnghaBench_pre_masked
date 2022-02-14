
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ WORD ;
struct TYPE_3__ {int dwDataSize; scalar_t__* lpData; int guidDataType; } ;
typedef scalar_t__* LPVOID ;
typedef scalar_t__ LPCSTR ;
typedef int IDirectPlayLobby3 ;
typedef int IDirectPlay4 ;
typedef scalar_t__ HRESULT ;
typedef int GUID ;
typedef int DWORD ;
typedef TYPE_1__ DPCOMPOUNDADDRESSELEMENT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,scalar_t__**) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int VAR_8 ;
 scalar_t__* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*,int,scalar_t__*,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,scalar_t__*,int ) ;
 int VAR_9 ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ,char*) ;

__attribute__((used)) static void FUNC_12( IDirectPlay4 *VAR_10, LPCSTR VAR_11, WORD VAR_12 )
{

    DPCOMPOUNDADDRESSELEMENT VAR_13[3];
    LPVOID VAR_14 = ((void*)0);
    DWORD VAR_15 = 0;
    IDirectPlayLobby3 *VAR_16;
    HRESULT VAR_17;

    VAR_17 = FUNC_0( &VAR_1, ((void*)0), VAR_0,
                           &VAR_9, (LPVOID*) &VAR_16 );
    FUNC_11 (FUNC_8 (VAR_17), "CCI of CLSID_DirectPlayLobby / IID_IDirectPlayLobby3A failed\n");
    if (FUNC_1 (VAR_17)) return;


    VAR_13[0].guidDataType = VAR_4;
    VAR_13[0].dwDataSize = sizeof(GUID);
    VAR_13[0].lpData = (LPVOID) &VAR_6;


    VAR_13[1].guidDataType = VAR_2;
    VAR_13[1].dwDataSize = FUNC_10(VAR_11) + 1;
    VAR_13[1].lpData = (LPVOID) VAR_11;


    if( VAR_12 > 0 )
    {
        VAR_13[2].guidDataType = VAR_3;
        VAR_13[2].dwDataSize = sizeof(WORD);
        VAR_13[2].lpData = &VAR_12;
    }


    VAR_17 = FUNC_5( VAR_16, VAR_13, 2,
                                                 ((void*)0), &VAR_15 );
    FUNC_9( VAR_5, VAR_17 );

    if( VAR_17 == VAR_5 )
    {
        VAR_14 = FUNC_3( FUNC_2(), VAR_8, VAR_15 );
        VAR_17 = FUNC_5( VAR_16, VAR_13, 2,
                                                     VAR_14, &VAR_15 );
        FUNC_9( VAR_7, VAR_17 );
    }

    VAR_17 = FUNC_7( VAR_10, VAR_14, 0 );
    FUNC_9( VAR_7, VAR_17 );

    FUNC_4( FUNC_2(), 0, VAR_14 );
    FUNC_6(VAR_16);
}
