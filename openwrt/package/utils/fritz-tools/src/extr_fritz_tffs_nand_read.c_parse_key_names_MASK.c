
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct tffs_name_table_entry {int val; int id; } ;
struct tffs_key_name_table {scalar_t__ size; struct tffs_name_table_entry* entries; } ;
struct tffs_entry {scalar_t__ len; scalar_t__ val; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 struct tffs_name_table_entry* FUNC_4 (struct tffs_name_table_entry*,int) ;
 int VAR_1 ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct tffs_entry *VAR_2,
        struct tffs_key_name_table *VAR_3)
{
 uint32_t VAR_4 = 0, VAR_5 = 0;
 struct tffs_name_table_entry *VAR_6;

 VAR_3->entries = ((void*)0);

 do {
  VAR_3->entries = FUNC_4(VAR_3->entries,
    sizeof(struct tffs_name_table_entry) * (VAR_5 + 1));
  if (VAR_3->entries == ((void*)0)) {
   FUNC_1(VAR_1, "ERROR: memory allocation failed!\n");
   FUNC_0(VAR_0);
  }
  VAR_6 = &VAR_3->entries[VAR_5];

  VAR_6->id = FUNC_3(VAR_2->val, VAR_4);
  VAR_4 += sizeof(uint32_t);
  VAR_6->val = FUNC_5((const char *)(VAR_2->val + VAR_4));





  VAR_4 += FUNC_2(FUNC_6(VAR_6->val) + 1);

  ++VAR_5;
 } while (VAR_4 < VAR_2->len);

 VAR_3->size = VAR_5;
}
