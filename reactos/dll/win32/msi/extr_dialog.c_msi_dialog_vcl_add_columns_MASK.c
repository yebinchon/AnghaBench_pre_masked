
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int msi_dialog ;
struct TYPE_5__ {int hwnd; } ;
typedef TYPE_1__ msi_control ;
typedef int lvc ;
typedef char WCHAR ;
struct TYPE_6__ {int mask; char* pszText; int cx; } ;
typedef int MSIRECORD ;
typedef TYPE_2__ LVCOLUMNW ;
typedef int LPCWSTR ;
typedef int LPARAM ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (char*) ;
 int * VAR_4 ;
 int FUNC_4 (char*,int,int) ;
 char* FUNC_5 (int) ;
 char* FUNC_6 (int *,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int,char) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (char*,char const*,int) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_12( msi_dialog *VAR_6, msi_control *VAR_7, MSIRECORD *VAR_8 )
{
    LPCWSTR VAR_9 = FUNC_0( VAR_8, 10 );
    LPCWSTR VAR_10 = VAR_9, VAR_11;
    WCHAR *VAR_12;
    LVCOLUMNW VAR_13;
    DWORD VAR_14 = 0;

    static const WCHAR VAR_15[] = {'-',0};

    if (!VAR_9) return;

    while ((VAR_10 = FUNC_9( VAR_10, '{' )) && VAR_14 < 5)
    {
        if (!(VAR_11 = FUNC_9( VAR_10, '}' )))
            return;

        VAR_12 = FUNC_5( (VAR_11-VAR_10+1)*sizeof(WCHAR) );
        if (!VAR_12)
            return;

        FUNC_4( VAR_12, VAR_10 + 1, VAR_11 - VAR_10 );
        VAR_10 += VAR_11 - VAR_10 + 1;


        if ( !VAR_12[0] || !FUNC_10( VAR_12, VAR_5 ) )
        {
            VAR_14++;
            FUNC_7( VAR_12 );
            continue;
        }




        if ( !FUNC_11( VAR_12, VAR_15, 1 ) || !FUNC_8( VAR_12 ) ) {
            FUNC_7( VAR_12 );
            return;
        }

        FUNC_2( &VAR_13, sizeof(VAR_13) );
        VAR_13.mask = VAR_1 | VAR_2 | VAR_0;
        VAR_13.cx = FUNC_3( VAR_12 );
        VAR_13.pszText = FUNC_6( VAR_6, VAR_4[VAR_14] );

        FUNC_1( VAR_7->hwnd, VAR_3, VAR_14++, (LPARAM)&VAR_13 );
        FUNC_7( VAR_13.pszText );
        FUNC_7( VAR_12 );
    }
}
