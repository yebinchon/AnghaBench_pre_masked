
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int key; } ;
typedef TYPE_1__ xtensa_lookup_entry ;


 int FUNC_0 (int ,int ) ;

int
FUNC_1 (const void *VAR_0, const void *VAR_1)
{
  xtensa_lookup_entry *VAR_2 = (xtensa_lookup_entry *) VAR_0;
  xtensa_lookup_entry *VAR_3 = (xtensa_lookup_entry *) VAR_1;

  return FUNC_0 (VAR_2->key, VAR_3->key);
}
