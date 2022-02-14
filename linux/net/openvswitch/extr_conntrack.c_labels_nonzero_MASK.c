
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovs_key_ct_labels {scalar_t__* ct_labels_32; } ;


 size_t VAR_0 ;

__attribute__((used)) static bool FUNC_0(const struct ovs_key_ct_labels *VAR_1)
{
 size_t VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (VAR_1->ct_labels_32[VAR_2])
   return 1;

 return 0;
}
