
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ BuildNumber; } ;
struct TYPE_6__ {TYPE_1__ osContext; } ;
typedef int PVOID ;
typedef int PKUHL_M_SEKURLSA_LIB ;
typedef TYPE_2__* PKUHL_M_SEKURLSA_CONTEXT ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ,int *,int *,int *,int *) ;

BOOL FUNC_2(PKUHL_M_SEKURLSA_CONTEXT VAR_4, PKUHL_M_SEKURLSA_LIB VAR_5)
{
 PVOID *VAR_6 = (VAR_4->osContext.BuildNumber < VAR_0) ? ((void*)0) : ((PVOID *) &VAR_2);
 return FUNC_1(VAR_4, VAR_5, VAR_3, FUNC_0(VAR_3), (PVOID *) &VAR_1, VAR_6, ((void*)0), ((void*)0));
}
