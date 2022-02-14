
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_7__ {int lfFaceName; int lfHeight; } ;
struct TYPE_6__ {int tmHeight; } ;
typedef TYPE_1__ TEXTMETRICW ;
typedef int LONG ;
typedef TYPE_2__ LOGFONTW ;
typedef int INT ;
typedef int HWND ;
typedef scalar_t__ HFONT ;
typedef scalar_t__ HDC ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_5 (int,int ,int) ;
 int FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;
 int FUNC_9 (int ,char const*) ;

__attribute__((used)) static INT FUNC_10( HWND VAR_1 )
{
    static const WCHAR VAR_2[] = {
        'M','S',' ','S','a','n','s',' ','S','e','r','i','f',0 };
    LOGFONTW VAR_3;
    TEXTMETRICW VAR_4;
    BOOL VAR_5;
    LONG VAR_6 = 0;
    HFONT VAR_7, VAR_8;
    HDC VAR_9;

    VAR_9 = FUNC_2( VAR_1 );
    if (VAR_9)
    {
        FUNC_8( &VAR_3, 0, sizeof VAR_3 );
        VAR_3.lfHeight = FUNC_5(12, FUNC_3(VAR_9, VAR_0), 72);
        FUNC_9( VAR_3.lfFaceName, VAR_2 );
        VAR_7 = FUNC_0(&VAR_3);
        if (VAR_7)
        {
            VAR_8 = FUNC_7( VAR_9, VAR_7 );
            VAR_5 = FUNC_4( VAR_9, &VAR_4 );
            if (VAR_5)
                VAR_6 = VAR_4.tmHeight;
            FUNC_7( VAR_9, VAR_8 );
            FUNC_1( VAR_7 );
        }
        FUNC_6( VAR_1, VAR_9 );
    }
    return VAR_6;
}
