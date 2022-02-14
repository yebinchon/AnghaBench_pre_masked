
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {scalar_t__ DeviceNumber; scalar_t__* PartitionOffset; int * PartitionSize; } ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,scalar_t__) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 () ;
 size_t VAR_3 ;
 int VAR_4 ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,scalar_t__,char*,...) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,...) ;

char* FUNC_9(DWORD VAR_5, uint64_t VAR_6, BOOL VAR_7, BOOL VAR_8)
{
 BOOL VAR_9 = (VAR_5 == VAR_2.DeviceNumber);
 DWORD VAR_10;
 char *VAR_11 = ((void*)0), VAR_12[VAR_1], VAR_13[64];

 FUNC_0(VAR_5);


 if (VAR_6 == 0) {
  VAR_10 = 0;
 } else if (VAR_9) {
  for (VAR_10 = 0; (VAR_10 < VAR_0) && (VAR_6 != VAR_2.PartitionOffset[VAR_10]); VAR_10++);
  if (VAR_10 >= VAR_0) {
   FUNC_8("Error: Could not find a partition at offset %lld on this disk", VAR_6);
   goto out;
  }
 } else {
  FUNC_8("Error: Searching for a partition on a non matching disk");
  goto out;
 }
 FUNC_4(VAR_13, "Harddisk%luPartition%lu", VAR_5, VAR_10 + 1);
 FUNC_6(VAR_12, VAR_4);
 if (!FUNC_1(VAR_13, &VAR_12[VAR_3], (DWORD)(VAR_1 - VAR_3)) || (FUNC_7(VAR_12) < 20)) {
  FUNC_8("Could not find a DOS volume name for '%s': %s", VAR_13, FUNC_2());

  if (!VAR_9)
   goto out;
  FUNC_4(VAR_12, "\\\\.\\PhysicalDrive%lu%s %I64u %I64u", VAR_5, VAR_7 ? "\\" : "",
   VAR_2.PartitionOffset[VAR_10], VAR_2.PartitionSize[VAR_10]);
 } else if (VAR_7) {
  FUNC_5(VAR_12, "\\");
 }
 VAR_11 = FUNC_3(VAR_12);

out:
 return VAR_11;
}
