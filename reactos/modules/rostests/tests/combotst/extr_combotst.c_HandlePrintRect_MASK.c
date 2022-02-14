
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WPARAM ;
typedef int VOID ;
struct TYPE_4__ {int right; int left; int bottom; int top; } ;
typedef TYPE_1__ RECT ;
typedef scalar_t__ LPARAM ;
typedef int HWND ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (char*,int ,int ,int,TYPE_1__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static
VOID
FUNC_4(HWND VAR_5,DWORD VAR_6,WPARAM VAR_7,LPARAM VAR_8)
    {
    RECT VAR_9 = *(RECT*)VAR_8;
    VAR_3[8] = (char)(VAR_0 - 8);
    FUNC_2(VAR_5,VAR_6,VAR_7,VAR_8);

    FUNC_3(VAR_9.top,&VAR_3[8]);
    VAR_3[8+8] = ' ';
    FUNC_3(VAR_9.bottom,&VAR_3[8+8+1]);
    VAR_3[8+8+8+1] = ' ';
    FUNC_3(VAR_9.left,&VAR_3[8+8+8+1+1]);
    VAR_3[8+8+8+8+1+1] = ' ';
    FUNC_3(VAR_9.right,&VAR_3[8+8+8+8+1+1+1]);

    FUNC_0(VAR_4,&VAR_9);
    FUNC_1(VAR_3,VAR_1,VAR_2,8+4*9-1,VAR_9);
    }
