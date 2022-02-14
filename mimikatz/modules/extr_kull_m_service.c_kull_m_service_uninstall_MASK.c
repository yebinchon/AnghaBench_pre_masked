
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PCWSTR ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

BOOL FUNC_5(PCWSTR VAR_4)
{
 BOOL VAR_5 = VAR_1, VAR_6 = VAR_3;
 if(FUNC_4(VAR_4))
  FUNC_2(L"[+] \'%s\' service stopped\n", VAR_4);
 else if(FUNC_0() == VAR_0)
  FUNC_2(L"[*] \'%s\' service not running\n", VAR_4);
 else
 {
  VAR_6 = VAR_1;
  FUNC_1(L"kull_m_service_stop");
 }

 if(VAR_6)
 {
  if((VAR_5 = FUNC_3(VAR_4)))
   FUNC_2(L"[+] \'%s\' service removed\n", VAR_4);
  else FUNC_1(L"kull_m_service_remove");
 }
 return VAR_2;
}
