
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct fdt_reserve_entry {void* size; void* address; } ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (int ) ;
 struct fdt_reserve_entry* FUNC_2 (void*,int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*,struct fdt_reserve_entry*,int ,int) ;

int FUNC_5(void *VAR_0, uint64_t VAR_1, uint64_t VAR_2)
{
 struct fdt_reserve_entry *VAR_3;
 int VAR_4;

 FUNC_0(VAR_0);

 VAR_3 = FUNC_2(VAR_0, FUNC_3(VAR_0));
 VAR_4 = FUNC_4(VAR_0, VAR_3, 0, 1);
 if (VAR_4)
  return VAR_4;

 VAR_3->address = FUNC_1(VAR_1);
 VAR_3->size = FUNC_1(VAR_2);
 return 0;
}
