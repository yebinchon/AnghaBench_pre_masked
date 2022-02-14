
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WELL_KNOWN_SID_TYPE ;
typedef int * PSID ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ,int *,int *,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int * FUNC_3 (int *) ;

BOOL FUNC_4(WELL_KNOWN_SID_TYPE VAR_4, PSID VAR_5, PSID * VAR_6)
{
 BOOL VAR_7 = VAR_2;
 DWORD VAR_8 = 0, VAR_9;
 FUNC_0(VAR_4, VAR_5, ((void*)0), &VAR_8);
 VAR_9 = FUNC_1();
 if((VAR_9 == VAR_1) || (VAR_9 == VAR_0))
  if((*VAR_6 = (PSID) FUNC_2(VAR_3, VAR_8)))
   if(!(VAR_7 = FUNC_0(VAR_4, VAR_5, *VAR_6, &VAR_8)))
    *VAR_6 = FUNC_3(*VAR_6);
 return VAR_7;
}
