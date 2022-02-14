
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ BuildNumber; } ;
struct TYPE_5__ {TYPE_1__ osContext; } ;
typedef TYPE_2__* PKUHL_M_SEKURLSA_CONTEXT ;
typedef int MSV1_0_PRIMARY_HELPER ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;

const MSV1_0_PRIMARY_HELPER * FUNC_0(PKUHL_M_SEKURLSA_CONTEXT VAR_4)
{
 const MSV1_0_PRIMARY_HELPER * VAR_5;
 if(VAR_4->osContext.BuildNumber < VAR_0)
  VAR_5 = &VAR_3[0];
 else if(VAR_4->osContext.BuildNumber < VAR_1)
  VAR_5 = &VAR_3[1];
 else if(VAR_4->osContext.BuildNumber < VAR_2)
  VAR_5 = &VAR_3[2];
 else
  VAR_5 = &VAR_3[3];
 return VAR_5;
}
