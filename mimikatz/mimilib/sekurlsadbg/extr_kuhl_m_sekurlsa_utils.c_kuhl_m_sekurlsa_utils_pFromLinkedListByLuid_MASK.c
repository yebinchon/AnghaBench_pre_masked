
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef int ULONG ;
struct TYPE_2__ {scalar_t__ Flink; } ;
typedef scalar_t__* PVOID ;
typedef int PLUID ;
typedef TYPE_1__* PLIST_ENTRY ;
typedef scalar_t__ PBYTE ;
typedef int LUID ;


 int VAR_0 ;
 scalar_t__* FUNC_0 (int ,int) ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__*,int,int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;

ULONG_PTR FUNC_4(ULONG_PTR VAR_1, ULONG VAR_2, PLUID VAR_3)
{
 PVOID VAR_4;
 ULONG_PTR VAR_5 = 0, VAR_6 = 0;

 if((VAR_4 = FUNC_0(VAR_0, VAR_2 + sizeof(LUID))))
 {
  if(FUNC_2(VAR_1, &VAR_6, sizeof(PVOID), ((void*)0)))
  {
   while(VAR_6 != VAR_1)
   {
    if(FUNC_2(VAR_6, VAR_4, VAR_2 + sizeof(LUID), ((void*)0)))
    {
     if(FUNC_3(VAR_3, (PLUID) ((PBYTE) VAR_4 + VAR_2)))
     {
      VAR_5 = VAR_6;
      break;
     }
     VAR_6 = (ULONG_PTR) ((PLIST_ENTRY) VAR_4)->Flink;
    }
    else break;
   }
  }
  FUNC_1(VAR_4);
 }
 return VAR_5;
}
