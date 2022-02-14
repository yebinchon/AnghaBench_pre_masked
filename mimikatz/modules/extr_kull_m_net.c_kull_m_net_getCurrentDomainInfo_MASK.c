
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_0; } ;
typedef int PVOID ;
typedef int PPOLICY_DNS_DOMAIN_INFO ;
typedef TYPE_1__ LSA_OBJECT_ATTRIBUTES ;
typedef int LSA_HANDLE ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*,int ,int *) ;
 int FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

BOOL FUNC_4(PPOLICY_DNS_DOMAIN_INFO * VAR_3)
{
 BOOL VAR_4 = VAR_0;
 LSA_HANDLE VAR_5;
 LSA_OBJECT_ATTRIBUTES VAR_6 = {0};

 if(FUNC_3(FUNC_1(((void*)0), &VAR_6, VAR_1, &VAR_5)))
 {
  VAR_4 = FUNC_3(FUNC_2(VAR_5, VAR_2, (PVOID *) VAR_3));
  FUNC_0(VAR_5);
 }
 return VAR_4;
}
