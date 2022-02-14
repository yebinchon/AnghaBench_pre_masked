
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ulong ;
struct _IMAGE_SECTION_HEADER {scalar_t__ PointerToRawData; scalar_t__ VirtualAddress; scalar_t__ SizeOfRawData; } ;
struct TYPE_2__ {int Buffer; } ;


 TYPE_1__* FUNC_0 (struct _IMAGE_SECTION_HEADER*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,scalar_t__,...) ;

ulong FUNC_2(struct _IMAGE_SECTION_HEADER *VAR_1, int VAR_2, ulong VAR_3) {
 int VAR_4;
 FUNC_1("Finding RVA for Physical %x\n", VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  FUNC_1("Section %d name %s Raw %x Virt %x\n",
      VAR_4,
      FUNC_0(&VAR_1[VAR_4])->Buffer,
      VAR_1[VAR_4].PointerToRawData,
      VAR_1[VAR_4].VirtualAddress);
  if (VAR_3 >= VAR_1[VAR_4].PointerToRawData &&
   VAR_3 < VAR_1[VAR_4].PointerToRawData + VAR_1[VAR_4].SizeOfRawData) {
   FUNC_1("RVA %x\n", VAR_3 - VAR_1[VAR_4].PointerToRawData + VAR_1[VAR_4].VirtualAddress);
   return VAR_3 - VAR_1[VAR_4].PointerToRawData + VAR_1[VAR_4].VirtualAddress;
  }
 }
 return VAR_0;
}
