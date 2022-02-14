
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct image_partition_entry {int size; scalar_t__ data; } ;
struct flash_partition_entry {char* name; int base; int size; } ;


 struct image_partition_entry FUNC_0 (char*,int) ;
 int FUNC_1 (int,int ,char*) ;
 int FUNC_2 (char*,int,int) ;
 size_t FUNC_3 (char*,size_t,char*,char*,int,int) ;

__attribute__((used)) static struct image_partition_entry FUNC_4(const struct flash_partition_entry *VAR_0) {
 struct image_partition_entry VAR_1 = FUNC_0("partition-table", 0x800);

 char *VAR_2 = (char *)VAR_1.data, *VAR_3 = (char *)(VAR_2+VAR_1.size);

 *(VAR_2++) = 0x00;
 *(VAR_2++) = 0x04;
 *(VAR_2++) = 0x00;
 *(VAR_2++) = 0x00;

 size_t VAR_4;
 for (VAR_4 = 0; VAR_0[VAR_4].name; VAR_4++) {
  size_t VAR_5 = VAR_3-VAR_2;
  size_t VAR_6 = FUNC_3(VAR_2, VAR_5, "partition %s base 0x%05x size 0x%05x\n", VAR_0[VAR_4].name, VAR_0[VAR_4].base, VAR_0[VAR_4].size);

  if (VAR_6 > VAR_5-1)
   FUNC_1(1, 0, "flash partition table overflow?");

  VAR_2 += VAR_6;
 }

 VAR_2++;

 FUNC_2(VAR_2, 0xff, VAR_3-VAR_2);

 return VAR_1;
}
