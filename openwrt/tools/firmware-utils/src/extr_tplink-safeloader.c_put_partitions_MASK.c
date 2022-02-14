
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct image_partition_entry {char* name; scalar_t__ size; int data; } ;
struct flash_partition_entry {char* name; scalar_t__ size; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ,char*,...) ;
 int FUNC_2 (int *,int ,scalar_t__) ;
 size_t FUNC_3 (char*,size_t,char*,char*,unsigned int,unsigned int) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5(uint8_t *VAR_0, const struct flash_partition_entry *VAR_1, const struct image_partition_entry *VAR_2) {
 size_t VAR_3, VAR_4;
 char *VAR_5 = (char *)VAR_0, *VAR_6 = VAR_5 + 0x800;

 size_t VAR_7 = 0x800;
 for (VAR_3 = 0; VAR_2[VAR_3].name; VAR_3++) {
  for (VAR_4 = 0; VAR_1[VAR_4].name; VAR_4++) {
   if (!FUNC_4(VAR_1[VAR_4].name, VAR_2[VAR_3].name)) {
    if (VAR_2[VAR_3].size > VAR_1[VAR_4].size)
     FUNC_1(1, 0, "%s partition too big (more than %u bytes)", VAR_1[VAR_4].name, (unsigned)VAR_1[VAR_4].size);
    break;
   }
  }

  FUNC_0(VAR_1[VAR_4].name);

  FUNC_2(VAR_0 + VAR_7, VAR_2[VAR_3].data, VAR_2[VAR_3].size);

  size_t VAR_8 = VAR_6-VAR_5;
  size_t VAR_9 = FUNC_3(VAR_5, VAR_8, "fwup-ptn %s base 0x%05x size 0x%05x\t\r\n", VAR_2[VAR_3].name, (unsigned)VAR_7, (unsigned)VAR_2[VAR_3].size);

  if (VAR_9 > VAR_8-1)
   FUNC_1(1, 0, "image partition table overflow?");

  VAR_5 += VAR_9;

  VAR_7 += VAR_2[VAR_3].size;
 }
}
