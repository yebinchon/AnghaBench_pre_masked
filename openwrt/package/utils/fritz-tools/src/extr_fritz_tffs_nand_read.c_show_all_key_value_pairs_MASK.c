
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint32_t ;
struct tffs_key_name_table {size_t size; TYPE_1__* entries; } ;
struct tffs_entry {int val; } ;
struct TYPE_2__ {scalar_t__ val; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct tffs_entry*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct tffs_entry*) ;
 int FUNC_4 (char*,...) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct tffs_key_name_table *VAR_3)
{
 uint8_t VAR_4 = 0;
 struct tffs_entry VAR_5;

 for (uint32_t VAR_6 = 0; VAR_6 < VAR_3->size; VAR_6++) {
  if (FUNC_0(VAR_3->entries[VAR_6].id, &VAR_5)) {
   FUNC_4("%s=", (const char *)VAR_3->entries[VAR_6].val);
   FUNC_3(&VAR_5);
   FUNC_4("\n");
   VAR_4++;
   FUNC_2(VAR_5.val);
  }
 }

 if (!VAR_4) {
  FUNC_1(VAR_2, "ERROR: no values found!\n");
  return VAR_0;
 }

 return VAR_1;
}
