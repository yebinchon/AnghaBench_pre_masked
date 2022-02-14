
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct fdt_reserve_entry {int size; int address; } ;


 int VAR_0 ;
 int FUNC_0 (void const*) ;
 int FUNC_1 (int *) ;
 struct fdt_reserve_entry* FUNC_2 (void const*,int) ;

int FUNC_3(const void *VAR_1, int VAR_2, uint64_t *VAR_3, uint64_t *VAR_4)
{
 const struct fdt_reserve_entry *VAR_5;

 FUNC_0(VAR_1);
 VAR_5 = FUNC_2(VAR_1, VAR_2);
 if (!VAR_5)
  return -VAR_0;

 *VAR_3 = FUNC_1(&VAR_5->address);
 *VAR_4 = FUNC_1(&VAR_5->size);
 return 0;
}
