
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_21__ {int Protect; } ;
struct TYPE_20__ {scalar_t__ address; int * member_1; int * member_0; } ;
struct TYPE_17__ {int * hMemory; } ;
struct TYPE_18__ {TYPE_1__ kull_m_memoryAdress; } ;
struct TYPE_19__ {scalar_t__ result; TYPE_2__ kull_m_memoryRange; } ;
typedef int SIZE_T ;
typedef int (* PKULL_M_PATCH_CALLBACK ) (int,int **) ;
typedef TYPE_3__* PKULL_M_MEMORY_SEARCH ;
typedef TYPE_4__* PKULL_M_MEMORY_ADDRESS ;
typedef int NTSTATUS ;
typedef TYPE_5__ MEMORY_BASIC_INFORMATION ;
typedef scalar_t__ LPBYTE ;
typedef scalar_t__ LONG ;
typedef TYPE_4__ KULL_M_MEMORY_ADDRESS ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_4__*,TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*,int ,int,int*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,TYPE_5__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int ,TYPE_3__*,int) ;

BOOL FUNC_6(PKULL_M_MEMORY_SEARCH VAR_6, PKULL_M_MEMORY_ADDRESS VAR_7, SIZE_T VAR_8, PKULL_M_MEMORY_ADDRESS VAR_9, SIZE_T VAR_10, LONG VAR_11, PKULL_M_PATCH_CALLBACK VAR_12, int VAR_13, wchar_t * VAR_14[], NTSTATUS * VAR_15)
{
 BOOL VAR_16 = VAR_0, VAR_17 = !VAR_12, VAR_18 = VAR_5;
 KULL_M_MEMORY_ADDRESS VAR_19 = {((void*)0), VAR_6->kull_m_memoryRange.kull_m_memoryAdress.hMemory};
 KULL_M_MEMORY_ADDRESS VAR_20 = {((void*)0), &VAR_1};
 MEMORY_BASIC_INFORMATION VAR_21;
 NTSTATUS VAR_22;
 DWORD VAR_23, VAR_24 = 0, VAR_25 = 0;

 if(FUNC_5(VAR_7, VAR_8, VAR_6, VAR_5))
 {
  VAR_19.address = (LPBYTE) VAR_6->result + VAR_11;

  if(!VAR_17)
   if((VAR_20.address = FUNC_0(VAR_2, VAR_10)))
    VAR_17 = FUNC_2(&VAR_20, &VAR_19, VAR_10);

  if(VAR_17)
  {
   if(FUNC_4(&VAR_19, &VAR_21))
   {
    VAR_23 = VAR_21.Protect & ~0xff;
    if((VAR_21.Protect & 0x0f) && ((VAR_21.Protect & 0x0f) < VAR_4))
     VAR_25 = VAR_4;
    else if((VAR_21.Protect & 0xf0) && ((VAR_21.Protect & 0xf0) < VAR_3))
     VAR_25 = VAR_3;

    if(VAR_25)
     VAR_18 = FUNC_3(&VAR_19, VAR_10, VAR_25 | VAR_23, &VAR_24);

    if(VAR_18)
    {
     if((VAR_16 = FUNC_2(&VAR_19, VAR_9, VAR_10)))
     {
      if(VAR_12)
      {
       VAR_22 = VAR_12(VAR_13, VAR_14);
       if(VAR_15)
        *VAR_15 = VAR_22;
       VAR_16 = FUNC_2(&VAR_19, &VAR_20, VAR_10);
      }
     }
     if(VAR_24)
      FUNC_3(&VAR_19, VAR_10, VAR_24, ((void*)0));
    }
   }
   if(VAR_20.address)
    FUNC_1(VAR_20.address);
  }
 }
 return VAR_16;
}
