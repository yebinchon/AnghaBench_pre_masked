
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Attributes; int Sid; } ;
typedef int * PWSTR ;
typedef int * PSID ;
typedef TYPE_1__* PKERB_SID_AND_ATTRIBUTES ;
typedef scalar_t__ PCWSTR ;
typedef int KERB_SID_AND_ATTRIBUTES ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int *,int **) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,char*,int **) ;

BOOL FUNC_6(PCWSTR VAR_2, PKERB_SID_AND_ATTRIBUTES *VAR_3, DWORD *VAR_4)
{
 PWSTR VAR_5, VAR_6, VAR_7;
 DWORD VAR_8;
 PSID VAR_9 = ((void*)0);
 *VAR_3 = ((void*)0);
 *VAR_4 = 0;
 if(VAR_2)
 {
  if((VAR_5 = FUNC_3(VAR_2)))
  {
   for(VAR_6 = ((void*)0), VAR_7 = FUNC_5(VAR_5, L",", &VAR_6); VAR_7; VAR_7 = FUNC_5(((void*)0), L",", &VAR_6))
   {
    if(FUNC_0(VAR_7, &VAR_9))
    {
     (*VAR_4)++;
     FUNC_2(VAR_9);
    }
   }
   FUNC_4(VAR_5);
  }
  if(*VAR_4 && (*VAR_3 = (PKERB_SID_AND_ATTRIBUTES) FUNC_1(VAR_1, *VAR_4 * sizeof(KERB_SID_AND_ATTRIBUTES))))
  {
   if((VAR_5 = FUNC_3(VAR_2)))
   {
    for(VAR_8 = 0, VAR_6 = ((void*)0), VAR_7 = FUNC_5(VAR_5, L",", &VAR_6); (VAR_8 < *VAR_4) && VAR_7; VAR_7 = FUNC_5(((void*)0), L",", &VAR_6))
     if(FUNC_0(VAR_7, (PSID *) &(*VAR_3)[VAR_8].Sid))
      (*VAR_3)[VAR_8++].Attributes = VAR_0;
    FUNC_4(VAR_5);
   }
  }
 }
 return (*VAR_3 && *VAR_4);
}
