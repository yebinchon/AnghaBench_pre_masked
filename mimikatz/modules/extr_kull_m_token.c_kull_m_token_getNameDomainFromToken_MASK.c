
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Sid; } ;
struct TYPE_6__ {TYPE_1__ User; } ;
typedef int PWSTR ;
typedef TYPE_2__* PTOKEN_USER ;
typedef int PSID_NAME_USE ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_2__*,int ,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_5 (int ,int *,int *,int ,int *) ;

BOOL FUNC_6(HANDLE VAR_4, PWSTR * VAR_5, PWSTR * VAR_6, PWSTR * VAR_7, PSID_NAME_USE VAR_8)
{
 BOOL VAR_9 = VAR_1;
 PTOKEN_USER VAR_10;
 DWORD VAR_11;

 if(!FUNC_2(VAR_4, VAR_3, ((void*)0), 0, &VAR_11) && (FUNC_1() == VAR_0))
 {
  if((VAR_10 = (PTOKEN_USER) FUNC_3(VAR_2, VAR_11)))
  {
   if(FUNC_2(VAR_4, VAR_3, VAR_10, VAR_11, &VAR_11))
   {
    if((VAR_9 = FUNC_5(VAR_10->User.Sid, VAR_5, VAR_6, VAR_8, ((void*)0))) && VAR_7)
     VAR_9 = FUNC_0(VAR_10->User.Sid, VAR_7);
   }
   FUNC_4(VAR_10);
  }
 }
 return VAR_9;
}
