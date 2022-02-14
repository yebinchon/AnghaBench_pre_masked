
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_8__ {scalar_t__ address; int hMemory; int * member_1; int ** member_0; } ;
struct TYPE_7__ {int * Flink; } ;
typedef int * PVOID ;
typedef int PLUID ;
typedef TYPE_1__* PLIST_ENTRY ;
typedef TYPE_2__* PKULL_M_MEMORY_ADDRESS ;
typedef scalar_t__ PBYTE ;
typedef int LUID ;
typedef TYPE_2__ KULL_M_MEMORY_ADDRESS ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_2__*,int) ;

PVOID FUNC_4(PKULL_M_MEMORY_ADDRESS VAR_2, ULONG VAR_3, PLUID VAR_4)
{
 PVOID VAR_5 = ((void*)0), VAR_6;
 KULL_M_MEMORY_ADDRESS VAR_7 = {&VAR_6, VAR_0}, VAR_8 = {((void*)0), VAR_0};

 if((VAR_8.address = FUNC_0(VAR_1, VAR_3 + sizeof(LUID))))
 {
  if(FUNC_3(&VAR_7, VAR_2, sizeof(PVOID)))
  {
   VAR_7.address = VAR_6;
   VAR_7.hMemory = VAR_2->hMemory;

   while(VAR_7.address != VAR_2->address)
   {
    if(FUNC_3(&VAR_8, &VAR_7, VAR_3 + sizeof(LUID)))
    {
     if(FUNC_2(VAR_4, (PLUID) ((PBYTE)(VAR_8.address) + VAR_3)))
     {
      VAR_5 = VAR_7.address;
      break;
     }
     VAR_7.address = ((PLIST_ENTRY) (VAR_8.address))->Flink;
    }
    else break;
   }
  }
  FUNC_1(VAR_8.address);
 }
 return VAR_5;
}
