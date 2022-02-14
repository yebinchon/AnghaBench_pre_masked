
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map_info {scalar_t__ value_size; scalar_t__ key_size; } ;


 void* FUNC_0 (struct bpf_map_info*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct bpf_map_info *VAR_0, void **VAR_1, void **VAR_2)
{
 *VAR_1 = ((void*)0);
 *VAR_2 = ((void*)0);

 if (VAR_0->key_size) {
  *VAR_1 = FUNC_2(VAR_0->key_size);
  if (!*VAR_1) {
   FUNC_3("key mem alloc failed");
   return -1;
  }
 }

 if (VAR_0->value_size) {
  *VAR_2 = FUNC_0(VAR_0);
  if (!*VAR_2) {
   FUNC_3("value mem alloc failed");
   FUNC_1(*VAR_1);
   *VAR_1 = ((void*)0);
   return -1;
  }
 }

 return 0;
}
