
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WPARAM ;
typedef int VOID ;
typedef int LPARAM ;
typedef int HWND ;
typedef int HDC ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 char* VAR_3 ;
 int FUNC_5 (int ,int ,int ,char*,int) ;
 int FUNC_6 (int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static
VOID
FUNC_7(HWND VAR_6,DWORD VAR_7,WPARAM VAR_8,LPARAM VAR_9)
    {
      HDC VAR_10;
      int VAR_11 = FUNC_4(VAR_6,VAR_7,VAR_8,VAR_9);

      int VAR_12;

      if (VAR_11)
          {
            VAR_12 = 1;
            VAR_3[8] = (char)(VAR_11);
          }
      else
          {
            VAR_3[8] = 'N';
            VAR_3[9] = 'U';
            VAR_3[10] = 'L';
            VAR_3[11] = 'L';
            VAR_12 = 4;
          }

      VAR_10 = FUNC_0 (VAR_4);
      FUNC_3 (VAR_10, FUNC_1 (VAR_2));

      FUNC_5 (VAR_10,VAR_0 ,VAR_1,VAR_3,8+VAR_12);
      FUNC_2 (VAR_4, VAR_10);
      FUNC_6 (VAR_4, &VAR_5);
    }
