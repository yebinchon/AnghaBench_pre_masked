
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int WPARAM ;
typedef int VOID ;
typedef scalar_t__ LPVOID ;
typedef int LPARAM ;
typedef int HWND ;
typedef int HLOCAL ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *,int ,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ,int ,int ,long) ;
 int * VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_7 (int,int *) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static
VOID
FUNC_10(HWND VAR_10,DWORD VAR_11,WPARAM VAR_12,LPARAM VAR_13)
    {
      LPVOID VAR_14;
      HANDLE VAR_15;
      int VAR_16;

      FUNC_1((HLOCAL)FUNC_6(VAR_10, VAR_0, 0, 0L));
      if (VAR_9)
          {
            VAR_15 = FUNC_0(VAR_2 | VAR_3, 100);
            VAR_14 = FUNC_3(VAR_15);
            FUNC_9((wchar_t*)VAR_14,VAR_5);
          }
      else
          {
            VAR_15 = FUNC_0(VAR_2 | VAR_3,50);
            VAR_14 = FUNC_3(VAR_15);
            FUNC_8((char*)VAR_14,VAR_4);
          }

      FUNC_4(VAR_14);
      VAR_15 = FUNC_2(VAR_14);


      VAR_16 = FUNC_6(VAR_10, VAR_1, (WPARAM)VAR_15, 0L);

      FUNC_7(VAR_16,&VAR_8[8]);
      FUNC_5(VAR_8,VAR_6,VAR_7,16);
    }
