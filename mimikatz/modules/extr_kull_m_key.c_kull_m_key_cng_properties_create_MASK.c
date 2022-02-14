
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dwStructLen; } ;
typedef scalar_t__ PVOID ;
typedef TYPE_1__* PKULL_M_KEY_CNG_PROPERTY ;
typedef int PBYTE ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__**,int) ;
 TYPE_1__* FUNC_2 (int) ;

BOOL FUNC_3(PVOID VAR_3, DWORD VAR_4, PKULL_M_KEY_CNG_PROPERTY **VAR_5, DWORD *VAR_6)
{
 BOOL VAR_7 = VAR_0;
 DWORD VAR_8, VAR_9;

 for(VAR_8 = 0, *VAR_6 = 0; VAR_8 < VAR_4; VAR_8 += ((PKULL_M_KEY_CNG_PROPERTY) ((PBYTE) VAR_3 + VAR_8))->dwStructLen, (*VAR_6)++);

 if(((*VAR_5) = (PKULL_M_KEY_CNG_PROPERTY *) FUNC_0(VAR_1, *VAR_6 * sizeof(PKULL_M_KEY_CNG_PROPERTY))))
 {
  for(VAR_8 = 0, VAR_9 = 0, VAR_7 = VAR_2; (VAR_8 < (*VAR_6)) && VAR_7; VAR_8++)
  {
   if(((*VAR_5)[VAR_8] = FUNC_2((PBYTE) VAR_3 + VAR_9)))
    VAR_9 += (*VAR_5)[VAR_8]->dwStructLen;
   else VAR_7 = VAR_0;
  }
 }
 if(!VAR_7)
 {
  FUNC_1(*VAR_5, *VAR_6);
  *VAR_5 = ((void*)0);
  *VAR_6 = 0;
 }
 return VAR_7;
}
