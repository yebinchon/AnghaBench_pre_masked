
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPARAM ;
typedef int INT_PTR ;
typedef scalar_t__ HWND ;
typedef int HMENU ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (char*,char*,int,int ,int ,int,int,scalar_t__,int ,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,int ,int ,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__* VAR_5 ;

__attribute__((used)) static HWND
FUNC_4 (DWORD VAR_6, HWND VAR_7)
{
  HWND VAR_8;
  INT_PTR VAR_9=0;
  if (VAR_7)
    VAR_9=1;
  VAR_8=FUNC_0("LISTBOX", "TestList",
                            (VAR_1 & ~VAR_0) | VAR_6,
                            0, 0, 100, 100,
                            VAR_7, (HMENU)VAR_9, ((void*)0), 0);

  FUNC_3 (VAR_8);
  FUNC_1(VAR_8, VAR_2, 0, (LPARAM) VAR_5[0]);
  FUNC_1(VAR_8, VAR_2, 0, (LPARAM) VAR_5[1]);
  FUNC_1(VAR_8, VAR_2, 0, (LPARAM) VAR_5[2]);
  FUNC_1(VAR_8, VAR_2, 0, (LPARAM) VAR_5[3]);




  VAR_3;

  return VAR_8;
}
