
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hwnd; } ;
typedef TYPE_1__ msi_dialog ;
typedef int msi_control ;
typedef int WCHAR ;
typedef int MSIRECORD ;
typedef int const* LPCWSTR ;
typedef int DWORD ;


 int FUNC_0 (int *,int) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (char*,int ,int ,int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int const*) ;
 int * FUNC_4 (TYPE_1__*,int *,int,int const*,int const*,int const*,int,int ) ;
 int FUNC_5 (TYPE_1__*,int const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (int const*,int ) ;
 int VAR_6 ;

__attribute__((used)) static msi_control *FUNC_7( msi_dialog *VAR_7,
                MSIRECORD *VAR_8, LPCWSTR VAR_9, DWORD VAR_10 )
{
    DWORD VAR_11;
    const WCHAR *VAR_12 = ((void*)0), *VAR_13, *VAR_14;
    DWORD VAR_15 = 0;

    VAR_13 = FUNC_1( VAR_8, 2 );
    VAR_14 = FUNC_1( VAR_8, 3 );
    VAR_11 = FUNC_0( VAR_8, 8 );
    if (FUNC_6( VAR_14, VAR_6 )) VAR_12 = FUNC_1( VAR_8, 10 );

    FUNC_2("%s, %s, %08x, %s, %08x\n", FUNC_3(VAR_9), FUNC_3(VAR_13),
          VAR_11, FUNC_3(VAR_12), VAR_10);

    if( VAR_11 & VAR_5 )
        VAR_10 |= VAR_2;
    if( ~VAR_11 & VAR_3 )
        VAR_10 |= VAR_0;
    if( VAR_11 & VAR_4 )
        VAR_15 |= VAR_1;

    FUNC_5( VAR_7, VAR_13 );

    return FUNC_4( VAR_7, VAR_8, VAR_15, VAR_9, VAR_13, VAR_12, VAR_10, VAR_7->hwnd );
}
