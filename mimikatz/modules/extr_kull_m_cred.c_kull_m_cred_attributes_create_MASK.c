
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dwKeyword; int ValueSize; } ;
typedef scalar_t__ PVOID ;
typedef TYPE_1__* PKULL_M_CRED_ATTRIBUTE ;
typedef int PBYTE ;
typedef int KULL_M_CRED_ATTRIBUTE ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__**,int) ;

BOOL FUNC_3(PVOID VAR_3, PKULL_M_CRED_ATTRIBUTE **VAR_4, DWORD VAR_5)
{
 BOOL VAR_6 = VAR_0;
 DWORD VAR_7, VAR_8;

 if(((*VAR_4) = (PKULL_M_CRED_ATTRIBUTE *) FUNC_0(VAR_1, VAR_5 * sizeof(PKULL_M_CRED_ATTRIBUTE))))
 {
  for(VAR_7 = 0, VAR_8 = 0, VAR_6 = VAR_2; (VAR_7 < VAR_5) && VAR_6; VAR_7++)
  {
   if(((*VAR_4)[VAR_7] = FUNC_1((PBYTE) VAR_3 + VAR_8)))
    VAR_8 += sizeof(KULL_M_CRED_ATTRIBUTE) - 2 * sizeof(PVOID) + (*VAR_4)[VAR_7]->dwKeyword + (*VAR_4)[VAR_7]->ValueSize;
   else VAR_6 = VAR_0;
  }
 }
 if(!VAR_6)
 {
  FUNC_2(*VAR_4, VAR_5);
  *VAR_4 = ((void*)0);
 }
 return VAR_6;
}
