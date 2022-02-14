
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mem_data {int handle; scalar_t__ allocated; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (scalar_t__*,scalar_t__,int) ;
 int VAR_0 ;
 struct mem_data* VAR_1 ;

__attribute__((used)) static ssize_t*
FUNC_1(uint32_t VAR_2) {
 int VAR_3 = (int)(VAR_2 & (VAR_0 - 1));
 struct mem_data *VAR_4 = &VAR_1[VAR_3];
 uint32_t VAR_5 = VAR_4->handle;
 ssize_t VAR_6 = VAR_4->allocated;
 if(VAR_5 == 0 || VAR_6 <= 0) {

  if(!FUNC_0(&VAR_4->handle, VAR_5, VAR_2)) {
   return 0;
  }
  if (VAR_6 < 0) {
   FUNC_0(&VAR_4->allocated, VAR_6, 0);
  }
 }
 if(VAR_4->handle != VAR_2) {
  return 0;
 }
 return &VAR_4->allocated;
}
