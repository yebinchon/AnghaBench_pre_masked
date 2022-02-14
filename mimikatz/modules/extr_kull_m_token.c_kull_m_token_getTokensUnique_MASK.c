
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; scalar_t__ hToken; int ptid; int member_0; } ;
typedef int PVOID ;
typedef scalar_t__ (* PKULL_M_TOKEN_ENUM_CALLBACK ) (scalar_t__,int ,int ) ;
typedef TYPE_1__ KULL_M_TOKEN_LIST ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*) ;
 int VAR_2 ;

BOOL FUNC_3(PKULL_M_TOKEN_ENUM_CALLBACK VAR_3, PVOID VAR_4)
{
 BOOL VAR_5 = VAR_0, VAR_6 = VAR_1;
 KULL_M_TOKEN_LIST VAR_7 = {0}, *VAR_8, *VAR_9;
 if((VAR_5 = FUNC_2(VAR_2, &VAR_7)))
 {
  for(VAR_8 = &VAR_7; VAR_8 && VAR_6; VAR_8 = VAR_8->next)
   VAR_6 = VAR_3(VAR_8->hToken, VAR_8->ptid, VAR_4);

  for(VAR_8 = &VAR_7; VAR_8; VAR_8 = VAR_9)
  {
   if(VAR_8->hToken)
    FUNC_0(VAR_8->hToken);
   VAR_9 = VAR_8->next;
   if(VAR_8 != &VAR_7)
    FUNC_1(VAR_8);
  }
 }
 return VAR_5;
}
