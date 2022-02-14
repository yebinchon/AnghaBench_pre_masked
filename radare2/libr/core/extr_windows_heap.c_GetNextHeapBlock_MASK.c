
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WPARAM ;
typedef int USHORT ;
struct TYPE_11__ {size_t BlockCount; scalar_t__ Granularity; scalar_t__ Blocks; } ;
struct TYPE_10__ {size_t index; int dwAddress; int dwSize; TYPE_1__* extraInfo; } ;
struct TYPE_9__ {int flags; int size; int extra; scalar_t__ address; } ;
struct TYPE_8__ {scalar_t__ granularity; scalar_t__ unusedBytes; } ;
typedef size_t SIZE_T ;
typedef TYPE_1__* PHeapBlockExtraInfo ;
typedef TYPE_2__* PHeapBlockBasicInfo ;
typedef TYPE_3__* PHeapBlock ;
typedef TYPE_4__* PDEBUG_HEAP_INFORMATION ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static bool FUNC_2(PDEBUG_HEAP_INFORMATION VAR_1, PHeapBlock VAR_2) {
 FUNC_1 (VAR_1 && VAR_2, 0);
 PHeapBlockBasicInfo VAR_3;

 VAR_3 = (PHeapBlockBasicInfo)VAR_1->Blocks;
 SIZE_T VAR_4 = VAR_2->index;

 if (VAR_4 > VAR_1->BlockCount) {
  return 0;
 }

 if (VAR_3[VAR_4].flags & 2) {
  do {
   if (VAR_4 > VAR_1->BlockCount) {
    return 0;
   }


   VAR_2->dwAddress = (void *)(VAR_3[VAR_4].address + VAR_1->Granularity);

   VAR_4++;
   VAR_2->dwSize = VAR_3->size;
  } while (VAR_3[VAR_4].flags & 2);
  VAR_2->index = VAR_4;
 } else {
  VAR_2->dwSize = VAR_3[VAR_4].size;
  if (VAR_3[VAR_4].extra & VAR_0) {
   PHeapBlockExtraInfo VAR_5 = (PHeapBlockExtraInfo)(VAR_3[VAR_4].extra & ~VAR_0);
   VAR_2->extraInfo = VAR_5;
   VAR_2->dwSize -= VAR_5->unusedBytes;
   VAR_2->dwAddress = (void *)(VAR_3[VAR_4].address + VAR_5->granularity);
  } else {
   VAR_2->extraInfo = ((void*)0);
   VAR_2->dwAddress = (WPARAM)VAR_2->dwAddress + VAR_2->dwSize;
  }
  VAR_2->index++;
 }

 WPARAM VAR_6;
 if (VAR_3[VAR_4].extra & VAR_0) {
  VAR_6 = VAR_3[VAR_4].flags;
 } else {
  VAR_6 = (USHORT)VAR_3[VAR_4].flags;
 }
 FUNC_0 (VAR_2, VAR_6);

 return 1;
}
