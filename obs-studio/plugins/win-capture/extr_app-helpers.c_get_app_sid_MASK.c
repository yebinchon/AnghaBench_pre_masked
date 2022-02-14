
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_5__ {int TokenAppContainer; } ;
typedef int TOKEN_APPCONTAINER_INFORMATION ;
typedef TYPE_1__* PTOKEN_APPCONTAINER_INFORMATION ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int **) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ,TYPE_1__*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (scalar_t__) ;

wchar_t *FUNC_7(HANDLE VAR_2)
{
 wchar_t *VAR_3 = ((void*)0);
 DWORD VAR_4;
 BOOL VAR_5;
 HANDLE VAR_6;

 if (FUNC_4(VAR_2, VAR_0, &VAR_6)) {
  DWORD VAR_7 = FUNC_2(12) +
     sizeof(TOKEN_APPCONTAINER_INFORMATION);

  PTOKEN_APPCONTAINER_INFORMATION VAR_8 = FUNC_6(VAR_7);

  VAR_5 = FUNC_3(VAR_6, VAR_1, VAR_8,
           VAR_7, &VAR_4);
  if (VAR_5)
   FUNC_1(VAR_8->TokenAppContainer, &VAR_3);

  FUNC_5(VAR_8);
  FUNC_0(VAR_6);
 }

 return VAR_3;
}
