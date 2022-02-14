
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef intptr_t uint64_t ;
typedef scalar_t__ uint32_t ;
struct func_hook {int func_addr; intptr_t hook_addr; int is_64bit_jump; void* bounce_addr; } ;
typedef int mbi ;
struct TYPE_6__ {uintptr_t RegionSize; scalar_t__ AllocationBase; } ;
struct TYPE_5__ {scalar_t__ dwAllocationGranularity; } ;
typedef TYPE_1__ SYSTEM_INFO ;
typedef TYPE_2__ MEMORY_BASIC_INFORMATION ;
typedef int LPVOID ;


 int FUNC_0 (void*,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 intptr_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_3 (int ,int,int,int ) ;
 int FUNC_4 (int ,void const*,TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_5(struct func_hook *VAR_4, intptr_t *VAR_5)
{
 MEMORY_BASIC_INFORMATION VAR_6;
 uintptr_t VAR_7;
 uintptr_t VAR_8;
 SYSTEM_INFO VAR_9;
 bool VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_10 = FUNC_4(FUNC_1(),
     (const void *)VAR_4->func_addr, &VAR_6,
     sizeof(VAR_6));
 if (!VAR_10)
  return;

 FUNC_2(&VAR_9);
 VAR_11 = (int)VAR_9.dwAllocationGranularity;

 VAR_7 = (uintptr_t)VAR_6.AllocationBase - VAR_11;
 for (VAR_12 = 0; VAR_12 < 256; VAR_12++, VAR_7 -= VAR_11) {
  VAR_4->bounce_addr = FUNC_3((LPVOID)VAR_7, VAR_11,
       VAR_2 | VAR_1,
       VAR_3);
  if (VAR_4->bounce_addr)
   break;
 }

 if (!VAR_4->bounce_addr) {
  VAR_7 = (uintptr_t)VAR_6.AllocationBase + VAR_6.RegionSize +
     VAR_11;
  for (VAR_12 = 0; VAR_12 < 256; VAR_12++, VAR_7 += VAR_11) {
   VAR_4->bounce_addr =
    FUNC_3((LPVOID)VAR_7, VAR_11,
          VAR_2 | VAR_1,
          VAR_3);
   if (VAR_4->bounce_addr)
    break;
  }
 }

 if (!VAR_4->bounce_addr)
  return;

 if ((VAR_4->func_addr + 5) > (uintptr_t)VAR_4->bounce_addr)
  VAR_8 = VAR_4->func_addr + 5 - (uintptr_t)VAR_4->bounce_addr;
 else
  VAR_8 = (uintptr_t)VAR_4->bounce_addr - VAR_4->func_addr + 5;

 if (VAR_8 <= 0x7ffffff0) {
  uint8_t *VAR_13 = (uint8_t *)VAR_4->bounce_addr;

  FUNC_0(VAR_4->bounce_addr, VAR_11, 0xCC);

  *(VAR_13++) = 0xFF;
  *(VAR_13++) = 0x25;
  *((uint32_t *)VAR_13) = 0;
  *((uint64_t *)(VAR_13 + 4)) = VAR_4->hook_addr;

  VAR_4->hook_addr = (uint64_t)VAR_4->bounce_addr;
  *VAR_5 = VAR_4->hook_addr - VAR_4->func_addr - VAR_0;
  VAR_4->is_64bit_jump = 0;
 }
}
