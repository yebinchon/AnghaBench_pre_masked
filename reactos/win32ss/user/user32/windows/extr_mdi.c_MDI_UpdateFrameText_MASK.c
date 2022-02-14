
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lpBuffer ;
typedef char WCHAR ;
struct TYPE_3__ {char* frameTitle; scalar_t__ hwndActiveChild; scalar_t__ hwndChildMaximized; } ;
typedef TYPE_1__ MDICLIENTINFO ;
typedef char* LPCWSTR ;
typedef int LPARAM ;
typedef scalar_t__ HWND ;
typedef int DWORD_PTR ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int ,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__,char*,int) ;
 char* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_1 ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (scalar_t__,int ,int ,int ,int ,int ,int) ;
 int FUNC_7 (char*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (char*) ;
 TYPE_1__* FUNC_9 (scalar_t__) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,char const*) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void FUNC_14( HWND VAR_9, HWND VAR_10, BOOL VAR_11, LPCWSTR VAR_12 )
{
    WCHAR VAR_13[VAR_1+1];
    MDICLIENTINFO *VAR_14 = FUNC_9( VAR_10 );

    FUNC_7("frameText %s\n", FUNC_8(VAR_12));

    if (!VAR_14) return;

    if (!VAR_12 && !VAR_14->frameTitle)
    {
        FUNC_2( VAR_9, VAR_13, sizeof(VAR_13)/sizeof(WCHAR) );
        VAR_12 = VAR_13;
    }


    if (VAR_12)
    {
 FUNC_4( FUNC_1(), 0, VAR_14->frameTitle );
 if ((VAR_14->frameTitle = FUNC_3( FUNC_1(), 0, (FUNC_13(VAR_12)+1)*sizeof(WCHAR))))
            FUNC_12( VAR_14->frameTitle, VAR_12 );
    }

    if (VAR_14->frameTitle)
    {
 if (VAR_14->hwndChildMaximized)
 {


     static const WCHAR VAR_15[] = {' ','-',' ','[',0};
     static const WCHAR VAR_16[] = {']',0};
     int VAR_17 = FUNC_13(VAR_14->frameTitle);

     FUNC_10( VAR_13, VAR_14->frameTitle, VAR_1);

     if( VAR_17 + 6 < VAR_1 )
            {
  FUNC_11( VAR_13, VAR_15 );
                if (FUNC_2( VAR_14->hwndActiveChild, VAR_13 + VAR_17 + 4,
                                    VAR_1 - VAR_17 - 5 ))
                    FUNC_11( VAR_13, VAR_16 );
                else
                    VAR_13[VAR_17] = 0;
            }
 }
 else
 {
            FUNC_10(VAR_13, VAR_14->frameTitle, VAR_1+1 );
 }
    }
    else
 VAR_13[0] = '\0';

    FUNC_0( VAR_9, VAR_8, 0, (LPARAM)VAR_13 );

    if (VAR_11)
    {
       if (!FUNC_5((DWORD_PTR)VAR_9,VAR_0,VAR_7))
        FUNC_6( VAR_9, 0,0,0,0,0, VAR_2 |
                      VAR_5 | VAR_4 | VAR_3 | VAR_6 );
    }
}
