
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static const char *FUNC_3(UINT VAR_15)
{
    static char VAR_16[300];

    VAR_16[0] = 0;

    do { if (VAR_15 & VAR_14) { strcat( VAR_16, "|" "SWP_SHOWWINDOW" ); VAR_15 &= ~VAR_14; } } while(0);
    do { if (VAR_15 & VAR_3) { FUNC_0( VAR_16, "|" "SWP_HIDEWINDOW" ); VAR_15 &= ~VAR_3; } } while(0);
    do { if (VAR_15 & VAR_4) { FUNC_0( VAR_16, "|" "SWP_NOACTIVATE" ); VAR_15 &= ~VAR_4; } } while(0);
    do { if (VAR_15 & VAR_2) { FUNC_0( VAR_16, "|" "SWP_FRAMECHANGED" ); VAR_15 &= ~VAR_2; } } while(0);
    do { if (VAR_15 & VAR_7) { FUNC_0( VAR_16, "|" "SWP_NOCOPYBITS" ); VAR_15 &= ~VAR_7; } } while(0);
    do { if (VAR_15 & VAR_9) { FUNC_0( VAR_16, "|" "SWP_NOOWNERZORDER" ); VAR_15 &= ~VAR_9; } } while(0);
    do { if (VAR_15 & VAR_11) { FUNC_0( VAR_16, "|" "SWP_NOSENDCHANGING" ); VAR_15 &= ~VAR_11; } } while(0);
    do { if (VAR_15 & VAR_1) { FUNC_0( VAR_16, "|" "SWP_DEFERERASE" ); VAR_15 &= ~VAR_1; } } while(0);
    do { if (VAR_15 & VAR_0) { FUNC_0( VAR_16, "|" "SWP_ASYNCWINDOWPOS" ); VAR_15 &= ~VAR_0; } } while(0);
    do { if (VAR_15 & VAR_13) { FUNC_0( VAR_16, "|" "SWP_NOZORDER" ); VAR_15 &= ~VAR_13; } } while(0);
    do { if (VAR_15 & VAR_10) { FUNC_0( VAR_16, "|" "SWP_NOREDRAW" ); VAR_15 &= ~VAR_10; } } while(0);
    do { if (VAR_15 & VAR_12) { FUNC_0( VAR_16, "|" "SWP_NOSIZE" ); VAR_15 &= ~VAR_12; } } while(0);
    do { if (VAR_15 & VAR_8) { FUNC_0( VAR_16, "|" "SWP_NOMOVE" ); VAR_15 &= ~VAR_8; } } while(0);
    do { if (VAR_15 & VAR_6) { FUNC_0( VAR_16, "|" "SWP_NOCLIENTSIZE" ); VAR_15 &= ~VAR_6; } } while(0);
    do { if (VAR_15 & VAR_5) { FUNC_0( VAR_16, "|" "SWP_NOCLIENTMOVE" ); VAR_15 &= ~VAR_5; } } while(0);
    if (VAR_15) FUNC_1(VAR_16 + FUNC_2(VAR_16),"|0x%04x", VAR_15);
    return VAR_16 + 1;

}
