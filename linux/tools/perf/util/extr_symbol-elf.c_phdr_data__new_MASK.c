
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct phdr_data {int offset; void* len; void* addr; } ;
typedef int off_t ;


 struct phdr_data* FUNC_0 (int) ;

__attribute__((used)) static struct phdr_data *FUNC_1(u64 VAR_0, u64 VAR_1, off_t VAR_2)
{
 struct phdr_data *VAR_3 = FUNC_0(sizeof(*VAR_3));

 if (VAR_3) {
  VAR_3->addr = VAR_0;
  VAR_3->len = VAR_1;
  VAR_3->offset = VAR_2;
 }

 return VAR_3;
}
