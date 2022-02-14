
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int logfont ;
struct TYPE_5__ {scalar_t__ top; scalar_t__ left; scalar_t__ bottom; scalar_t__ right; } ;
struct TYPE_6__ {int cbSize; TYPE_1__ rcWindow; } ;
typedef TYPE_2__ WINDOWINFO ;
struct TYPE_7__ {int hfont; int hMainWnd; } ;
typedef int LPBYTE ;
typedef int LOGFONTW ;
typedef scalar_t__ INT ;
typedef int HKEY ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,int *) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int *,int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ,int *) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_6(void)
{
 WINDOWINFO VAR_13;
 HKEY VAR_14;
 INT VAR_15, VAR_16;
 LOGFONTW VAR_17;

 VAR_13.cbSize = sizeof( WINDOWINFO );
 FUNC_1(VAR_1.hMainWnd, &VAR_13);
 VAR_15 = VAR_13.rcWindow.right - VAR_13.rcWindow.left;
 VAR_16 = VAR_13.rcWindow.bottom - VAR_13.rcWindow.top;

 if ( FUNC_4( VAR_2, VAR_12,
                            0, VAR_3, &VAR_14 ) != VAR_0 )
 {

                if ( FUNC_3( VAR_2, VAR_12,
                                      0, ((void*)0), VAR_6,
                                      VAR_3, ((void*)0), &VAR_14, ((void*)0) ) != VAR_0 )
  {

   return;
  }
 }

        FUNC_5( VAR_14, VAR_9, 0, VAR_5,
                        (LPBYTE) &VAR_13.rcWindow.left, sizeof(DWORD) );
        FUNC_5( VAR_14, VAR_10, 0, VAR_5,
                        (LPBYTE) &VAR_13.rcWindow.top, sizeof(DWORD) );
        FUNC_5( VAR_14, VAR_11, 0, VAR_5,
                        (LPBYTE) &VAR_15, sizeof(DWORD) );
        FUNC_5( VAR_14, VAR_7, 0, VAR_5,
                        (LPBYTE) &VAR_16, sizeof(DWORD) );
        FUNC_0(VAR_1.hfont, sizeof(VAR_17), &VAR_17);
        FUNC_5( VAR_14, VAR_8, 0, VAR_4,
                        (LPBYTE)&VAR_17, sizeof(LOGFONTW) );


 FUNC_2( VAR_14 );
}
