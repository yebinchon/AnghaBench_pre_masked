
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct tffs_key_name_table {size_t size; TYPE_1__* entries; } ;
struct tffs_entry {int val; } ;
struct TYPE_2__ {char* val; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct tffs_entry*) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (int ) ;
 char* VAR_2 ;
 int FUNC_3 (struct tffs_entry*) ;
 int FUNC_4 (char*) ;
 int VAR_3 ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char*,int ) ;

__attribute__((used)) static int FUNC_7(struct tffs_key_name_table *VAR_4)
{
 struct tffs_entry VAR_5;
 const char *VAR_6;

 for (uint32_t VAR_7 = 0; VAR_7 < VAR_4->size; VAR_7++) {
  VAR_6 = VAR_4->entries[VAR_7].val;

  if (FUNC_6(VAR_6, VAR_2, FUNC_5(VAR_6)) == 0) {
   if (FUNC_0(VAR_4->entries[VAR_7].id, &VAR_5)) {
    FUNC_3(&VAR_5);
    FUNC_4("\n");
    FUNC_2(VAR_5.val);
    return VAR_1;
   } else {
    FUNC_1(VAR_3,
     "ERROR: no value found for name %s!\n",
     VAR_6);
    return VAR_0;
   }
  }
 }

 FUNC_1(VAR_3, "ERROR: Unknown key name %s!\n", VAR_2);
 return VAR_0;
}
