
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct mem_data {scalar_t__ handle; scalar_t__ allocated; } ;


 int VAR_0 ;
 struct mem_data* VAR_1 ;
 scalar_t__ FUNC_0 () ;

size_t
FUNC_1(void) {
 uint32_t VAR_2 = FUNC_0();
 int VAR_3;
 for(VAR_3=0; VAR_3<VAR_0; VAR_3++) {
  struct mem_data* VAR_4 = &VAR_1[VAR_3];
  if(VAR_4->handle == (uint32_t)VAR_2 && VAR_4->allocated != 0) {
   return (size_t) VAR_4->allocated;
  }
 }
 return 0;
}
