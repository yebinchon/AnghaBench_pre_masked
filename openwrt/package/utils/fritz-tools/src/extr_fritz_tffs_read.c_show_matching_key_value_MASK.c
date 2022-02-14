
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct tffs_key_name_table {int size; TYPE_1__* entries; } ;
struct tffs_entry {int dummy; } ;
struct TYPE_2__ {char* val; int * id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,struct tffs_entry*) ;
 int FUNC_1 (int ,char*,char const*) ;
 char* VAR_2 ;
 int FUNC_2 (struct tffs_entry*) ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char*,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(uint8_t *VAR_4,
       struct tffs_key_name_table *VAR_5)
{
 int VAR_6;
 uint16_t VAR_7;
 struct tffs_entry VAR_8;
 const char *VAR_9;

 for (VAR_6 = 0; VAR_6 < VAR_5->size; VAR_6++) {
  VAR_9 = VAR_5->entries[VAR_6].val;

  if (FUNC_5(VAR_9, VAR_2, FUNC_4(VAR_9)) == 0) {
   VAR_7 = FUNC_6(*VAR_5->entries[VAR_6].id);

   if (FUNC_0(VAR_4, VAR_7, &VAR_8)) {
    FUNC_2(&VAR_8);
    FUNC_3("\n");
    return VAR_1;
   } else {
    FUNC_1(VAR_3,
     "ERROR: no value found for name %s!\n",
     VAR_9);
    return VAR_0;
   }
  }
 }

 FUNC_1(VAR_3, "ERROR: Unknown key name %s!\n", VAR_2);
 return VAR_0;
}
