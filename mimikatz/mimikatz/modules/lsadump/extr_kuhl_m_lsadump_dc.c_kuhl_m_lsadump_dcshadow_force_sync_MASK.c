
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwPushFlags; int szSchemaNamingContext; int szConfigurationNamingContext; int szDomainNamingContext; } ;
typedef TYPE_1__* PDCSHADOW_DOMAIN_INFO ;
typedef int NTSTATUS ;
typedef int DRS_HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

NTSTATUS FUNC_2(PDCSHADOW_DOMAIN_INFO VAR_4, DRS_HANDLE VAR_5)
{
 NTSTATUS VAR_6 = VAR_3;

 if(VAR_4->dwPushFlags & VAR_1)
 {
  VAR_6 = FUNC_1(VAR_4, VAR_5, VAR_4->szDomainNamingContext);
  if(!FUNC_0(VAR_6))
   return VAR_6;
 }
 if(VAR_4->dwPushFlags & VAR_0)
 {
  VAR_6 = FUNC_1(VAR_4, VAR_5, VAR_4->szConfigurationNamingContext);
  if(!FUNC_0(VAR_6))
   return VAR_6;
 }
 if(VAR_4->dwPushFlags & VAR_2)
 {
  VAR_6 = FUNC_1(VAR_4, VAR_5, VAR_4->szSchemaNamingContext);
  if(!FUNC_0(VAR_6))
   return VAR_6;
 }
 return VAR_6;
}
