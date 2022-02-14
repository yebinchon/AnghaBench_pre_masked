
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int msi_dialog ;
struct TYPE_4__ {int hwnd; } ;
typedef TYPE_1__ msi_control ;
typedef int hrefW ;
typedef int WPARAM ;
typedef char WCHAR ;
typedef int UINT ;
struct TYPE_5__ {int mask; char* szUrl; scalar_t__ iLink; } ;
typedef int LPARAM ;
typedef TYPE_2__ LITEM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int *,char const*,char const*,int *,int *,int ) ;
 scalar_t__ FUNC_2 (char const) ;
 int FUNC_3 (char const*,char const*,int) ;
 int FUNC_4 (char const*) ;
 char FUNC_5 (int ) ;

__attribute__((used)) static UINT FUNC_6( msi_dialog *VAR_5, msi_control *VAR_6, WPARAM VAR_7 )
{
    static const WCHAR VAR_8[] = {'h','r','e','f'};
    static const WCHAR VAR_9[] = {'o','p','e','n',0};
    int VAR_10, VAR_11 = sizeof(VAR_8) / sizeof(VAR_8[0]);
    const WCHAR *VAR_12, *VAR_13;
    WCHAR VAR_14 = 0;
    LITEM VAR_15;

    VAR_15.mask = VAR_1 | VAR_2;
    VAR_15.iLink = 0;
    VAR_15.szUrl[0] = 0;

    FUNC_0( VAR_6->hwnd, VAR_3, 0, (LPARAM)&VAR_15 );

    VAR_12 = VAR_15.szUrl;
    while (*VAR_12 && *VAR_12 != '<') VAR_12++;
    if (!*VAR_12++) return VAR_0;
    if (FUNC_5( *VAR_12++ ) != 'A' || !FUNC_2( *VAR_12++ )) return VAR_0;
    while (*VAR_12 && FUNC_2( *VAR_12 )) VAR_12++;

    VAR_10 = FUNC_4( VAR_12 );
    if (VAR_10 > VAR_11 && !FUNC_3( VAR_12, VAR_8, VAR_11 ))
    {
        VAR_12 += VAR_11;
        while (*VAR_12 && FUNC_2( *VAR_12 )) VAR_12++;
        if (!*VAR_12 || *VAR_12++ != '=') return VAR_0;
        while (*VAR_12 && FUNC_2( *VAR_12 )) VAR_12++;

        if (*VAR_12 == '\"' || *VAR_12 == '\'') VAR_14 = *VAR_12++;
        VAR_13 = VAR_12;
        if (VAR_14)
        {
            while (*VAR_13 && *VAR_13 != VAR_14) VAR_13++;
            if (*VAR_13 != VAR_14) return VAR_0;
        }
        else
        {
            while (*VAR_13 && *VAR_13 != '>' && !FUNC_2( *VAR_13 )) VAR_13++;
            if (!*VAR_13) return VAR_0;
        }
        VAR_15.szUrl[VAR_13 - VAR_15.szUrl] = 0;
        FUNC_1( ((void*)0), VAR_9, VAR_12, ((void*)0), ((void*)0), VAR_4 );
    }
    return VAR_0;
}
