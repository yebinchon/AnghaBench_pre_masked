
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;





 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;

void FUNC_1(DWORD VAR_4)
{
 switch(VAR_4 & VAR_0)
 {
 case 130:
  FUNC_0(L"disktree ; ");
  break;
 case 128:
  FUNC_0(L"printq ; ");
  break;
 case 131:
  FUNC_0(L"device ; ");
  break;
 case 129:
  FUNC_0(L"ipc ; ");
  break;
 }

 if(VAR_4 & VAR_3)
  FUNC_0(L"temporary ; ");
 if(VAR_4 & VAR_2)
  FUNC_0(L"special ; ");
 if(VAR_4 & VAR_1)
  FUNC_0(L"reserved flag(s) ; ");
 FUNC_0(L"\n");
}
