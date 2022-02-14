
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 () ;

bool
FUNC_2(void) {
 if (!VAR_1 && VAR_2) {
  FUNC_0("<jemalloc>: option background_thread currently "
      "supports pthread only\n");
  return 1;
 }






 return 0;
}
