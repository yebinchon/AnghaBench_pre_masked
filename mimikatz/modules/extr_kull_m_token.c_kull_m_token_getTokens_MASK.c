
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ mustContinue; int member_2; int member_1; int member_0; } ;
typedef int PVOID ;
typedef int PKULL_M_TOKEN_ENUM_CALLBACK ;
typedef TYPE_1__ KULL_M_TOKEN_ENUM_DATA ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int,int ,TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;

BOOL FUNC_3(PKULL_M_TOKEN_ENUM_CALLBACK VAR_6, PVOID VAR_7)
{
 BOOL VAR_8 = VAR_0;
 KULL_M_TOKEN_ENUM_DATA VAR_9 = {VAR_6, VAR_7, VAR_3};
 if((VAR_8 = FUNC_0(FUNC_2(VAR_5, &VAR_9))))
  if(VAR_9.mustContinue)
   VAR_8 = FUNC_0(FUNC_1(VAR_4, L"Token", VAR_2 | VAR_1, 0, &VAR_9));
 return VAR_8;
}
