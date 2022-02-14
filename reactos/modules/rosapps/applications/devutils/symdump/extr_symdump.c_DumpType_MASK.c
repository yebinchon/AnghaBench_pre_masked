
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_8__ {int dwModuleBase; int hProcess; } ;
typedef TYPE_1__* PENUMINFO ;
typedef int INT ;
typedef int HANDLE ;
typedef int DWORD64 ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int,TYPE_1__*,int ) ;
 int FUNC_1 (int,TYPE_1__*,int ) ;
 int FUNC_2 (int,TYPE_1__*,int ,int ) ;
 int FUNC_3 (int,TYPE_1__*,int ) ;
 int FUNC_4 (int,TYPE_1__*,int ,int ) ;
 int FUNC_5 (int ,int ,int,int ,int*) ;






 int VAR_0 ;
 int FUNC_6 (char*,...) ;

VOID
FUNC_7(DWORD VAR_1, PENUMINFO VAR_2, INT VAR_3, BOOL VAR_4)
{
 HANDLE VAR_5 = VAR_2->hProcess;
 DWORD64 VAR_6 = VAR_2->dwModuleBase;
 DWORD VAR_7 = 0;

 FUNC_5(VAR_5, VAR_6, VAR_1, VAR_0, &VAR_7);

 switch (VAR_7)
 {
 case 131:
  FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
  break;

 case 128:
  FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4);
  break;

 case 129:
  FUNC_3(VAR_1, VAR_2, VAR_3);
  break;

 case 132:
  FUNC_1(VAR_1, VAR_2, VAR_3);
  break;

 case 133:
  FUNC_0(VAR_1, VAR_2, VAR_3);
  break;

 case 130:
  FUNC_6("function");
  break;

 default:
  FUNC_6("typeTag%ld", VAR_7);
  break;
 }

}
