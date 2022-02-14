
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ request; scalar_t__ ld; scalar_t__ hGetNCChangeCalled; scalar_t__ szDsServiceName; scalar_t__ szConfigurationNamingContext; scalar_t__ szDCDsServiceName; scalar_t__ szDomainNamingContext; scalar_t__ szDomainName; } ;
typedef TYPE_1__* PDCSHADOW_DOMAIN_INFO ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(PDCSHADOW_DOMAIN_INFO VAR_0)
{
 if(VAR_0->szDomainName)
  FUNC_1(VAR_0->szDomainName);
 if(VAR_0->szDomainNamingContext)
  FUNC_1(VAR_0->szDomainNamingContext);
 if(VAR_0->szDCDsServiceName)
  FUNC_1(VAR_0->szDCDsServiceName);
 if(VAR_0->szConfigurationNamingContext)
  FUNC_1(VAR_0->szConfigurationNamingContext);
 if(VAR_0->szDsServiceName)
  FUNC_1(VAR_0->szDsServiceName);
 if(VAR_0->hGetNCChangeCalled)
  FUNC_0(VAR_0->hGetNCChangeCalled);
 if(VAR_0->ld)
  FUNC_3(VAR_0->ld);
 if(VAR_0->request)
  FUNC_2(VAR_0->request);
}
