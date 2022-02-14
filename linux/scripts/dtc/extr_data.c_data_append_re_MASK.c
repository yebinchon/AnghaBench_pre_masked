
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct fdt_reserve_entry {void* size; void* address; } ;
struct data {int dummy; } ;
typedef int re ;


 void* FUNC_0 (int ) ;
 struct data FUNC_1 (struct data,struct fdt_reserve_entry*,int) ;

struct data FUNC_2(struct data VAR_0, uint64_t VAR_1, uint64_t VAR_2)
{
 struct fdt_reserve_entry VAR_3;

 VAR_3.address = FUNC_0(VAR_1);
 VAR_3.size = FUNC_0(VAR_2);

 return FUNC_1(VAR_0, &VAR_3, sizeof(VAR_3));
}
