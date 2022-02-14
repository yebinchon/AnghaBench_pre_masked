
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ LowPart; int HighPart; } ;
typedef scalar_t__* PDWORD ;
typedef int PCWCHAR ;
typedef scalar_t__ PBYTE ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__,TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__,scalar_t__,scalar_t__*,int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (int ,scalar_t__*,scalar_t__*) ;

BOOL FUNC_8(PCWCHAR VAR_7, PBYTE * VAR_8, PDWORD VAR_9)
{
 BOOL VAR_10 = VAR_0;
 DWORD VAR_11;
 LARGE_INTEGER VAR_12;
 HANDLE VAR_13 = ((void*)0);

 if(VAR_6)
 {
  if(!(VAR_10 = FUNC_7(VAR_7, VAR_8, VAR_9)))
   FUNC_5(L"kull_m_string_quick_base64_to_Binary");
 }
 else if((VAR_13 = FUNC_1(VAR_7, VAR_2, VAR_1, ((void*)0), VAR_5, 0, ((void*)0))) && VAR_13 != VAR_3)
 {
  if(FUNC_2(VAR_13, &VAR_12) && !VAR_12.HighPart)
  {
   *VAR_9 = VAR_12.LowPart;
   if((*VAR_8 = (PBYTE) FUNC_3(VAR_4, *VAR_9)))
   {
    if(!(VAR_10 = FUNC_6(VAR_13, *VAR_8, *VAR_9, &VAR_11, ((void*)0)) && (*VAR_9 == VAR_11)))
     FUNC_4(*VAR_8);
   }
  }
  FUNC_0(VAR_13);
 }
 return VAR_10;
}
