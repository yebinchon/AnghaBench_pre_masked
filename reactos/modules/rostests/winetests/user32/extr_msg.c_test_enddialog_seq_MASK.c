
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {int member_1; int member_2; int member_0; int member_3; } ;
typedef int WPARAM ;
typedef int LPARAM ;
typedef int HWND ;


 int FUNC_0 (int ,int ) ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 () ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (struct message const*,char*,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

__attribute__((used)) static void FUNC_3(HWND VAR_23, HWND VAR_24)
{
    const struct message VAR_25[] = {
        { VAR_10, VAR_21 },
        { VAR_16, VAR_21|VAR_22, VAR_3|VAR_4|VAR_6|VAR_5 },
        { VAR_1, VAR_18|VAR_22, (WPARAM)VAR_24 },
        { VAR_13, VAR_21|VAR_22|VAR_19, VAR_8, (LPARAM)VAR_24 },
        { VAR_9, VAR_21|VAR_22|VAR_19, VAR_8, (LPARAM)VAR_24 },

        { VAR_16, VAR_21|VAR_22|VAR_20, VAR_6|VAR_5 },
        { VAR_14, VAR_21|VAR_20 },
        { VAR_13, VAR_21|VAR_22|VAR_19, VAR_7, (LPARAM)VAR_23 },
        { VAR_11, VAR_21|VAR_20|VAR_17 },
        { VAR_9, VAR_21|VAR_22|VAR_19, VAR_7, (LPARAM)VAR_23 },
        { VAR_2, VAR_18|VAR_22, (WPARAM)VAR_24 },
        { VAR_12, VAR_21|VAR_22, (WPARAM)VAR_24 },
        { VAR_15, VAR_21|VAR_17|VAR_22, (WPARAM)VAR_23 },
        { 0 }
    };

    FUNC_1();
    FUNC_0(VAR_23, 0);
    FUNC_2(VAR_25, "EndDialog", VAR_0);
}
