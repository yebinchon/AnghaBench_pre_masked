
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct tffs_key_name_table {size_t size; TYPE_1__* entries; } ;
struct TYPE_2__ {char* val; } ;


 int FUNC_0 (char*,char*) ;

__attribute__((used)) static void FUNC_1(struct tffs_key_name_table *VAR_0)
{
 for (uint32_t VAR_1 = 0; VAR_1 < VAR_0->size; VAR_1++)
  FUNC_0("%s\n", VAR_0->entries[VAR_1].val);
}
