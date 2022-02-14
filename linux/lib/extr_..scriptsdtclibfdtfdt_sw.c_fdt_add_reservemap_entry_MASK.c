
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct fdt_reserve_entry {void* size; void* address; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*,int) ;
 int FUNC_4 (void*) ;

int FUNC_5(void *VAR_1, uint64_t VAR_2, uint64_t VAR_3)
{
 struct fdt_reserve_entry *VAR_4;
 int VAR_5;

 FUNC_0(VAR_1);

 VAR_5 = FUNC_2(VAR_1);
 if ((VAR_5 + sizeof(*VAR_4)) > FUNC_4(VAR_1))
  return -VAR_0;

 VAR_4 = (struct fdt_reserve_entry *)((char *)VAR_1 + VAR_5);
 VAR_4->address = FUNC_1(VAR_2);
 VAR_4->size = FUNC_1(VAR_3);

 FUNC_3(VAR_1, VAR_5 + sizeof(*VAR_4));

 return 0;
}
