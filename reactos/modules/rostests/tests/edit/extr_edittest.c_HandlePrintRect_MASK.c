
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WPARAM ;
typedef int VOID ;
struct TYPE_2__ {int right; int left; int bottom; int top; } ;
typedef int LPARAM ;
typedef int HWND ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 char* VAR_3 ;
 int FUNC_2 (int ,char*) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static
VOID
FUNC_3(HWND VAR_5,DWORD VAR_6,WPARAM VAR_7,LPARAM VAR_8)
    {
      VAR_3[8] = (char)(VAR_0 - 8);
      FUNC_1(VAR_5,VAR_6,VAR_7,VAR_8);

      FUNC_2(VAR_4.top,&VAR_3[8]);
      VAR_3[8+8] = ' ';
      FUNC_2(VAR_4.bottom,&VAR_3[8+8+1]);
      VAR_3[8+8+8+1] = ' ';
      FUNC_2(VAR_4.left,&VAR_3[8+8+8+1+1]);
      VAR_3[8+8+8+8+1+1] = ' ';
      FUNC_2(VAR_4.right,&VAR_3[8+8+8+8+1+1+1]);

      FUNC_0(VAR_3,VAR_1,VAR_2,8+4*9-1);
    }
