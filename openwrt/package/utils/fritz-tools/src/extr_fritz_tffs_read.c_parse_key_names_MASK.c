
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct tffs_name_table_entry {size_t* id; char const* val; } ;
struct tffs_key_name_table {size_t size; struct tffs_name_table_entry* entries; } ;
struct tffs_entry {int * val; int header; } ;


 struct tffs_name_table_entry* FUNC_0 (int,int) ;
 size_t FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 struct tffs_name_table_entry* FUNC_3 (struct tffs_name_table_entry*,int) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(struct tffs_entry *VAR_0,
       struct tffs_key_name_table *VAR_1)
{
 uint32_t VAR_2 = 0, VAR_3 = 0;
 struct tffs_name_table_entry *VAR_4;

 VAR_1->entries = FUNC_0(sizeof(*VAR_4), 1);

 do {
  VAR_4 = &VAR_1->entries[VAR_3];

  VAR_4->id = (uint32_t *) &VAR_0->val[VAR_2];
  VAR_2 += sizeof(*VAR_4->id);
  VAR_4->val = (const char *) &VAR_0->val[VAR_2];





  VAR_2 += FUNC_2(FUNC_4(VAR_4->val) + 1);

  ++VAR_3;
  VAR_1->entries = FUNC_3(VAR_1->entries,
      sizeof(*VAR_4) * (VAR_3 + 1));
 } while (VAR_2 < FUNC_1(VAR_0->header));

 VAR_1->size = VAR_3;
}
