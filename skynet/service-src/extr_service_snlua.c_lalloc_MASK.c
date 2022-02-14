
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snlua {size_t mem; size_t mem_limit; size_t mem_report; int ctx; } ;


 int FUNC_0 (int ,char*,float) ;
 void* FUNC_1 (void*,size_t,size_t) ;

__attribute__((used)) static void *
FUNC_2(void * VAR_0, void *VAR_1, size_t VAR_2, size_t VAR_3) {
 struct snlua *VAR_4 = VAR_0;
 size_t VAR_5 = VAR_4->mem;
 VAR_4->mem += VAR_3;
 if (VAR_1)
  VAR_4->mem -= VAR_2;
 if (VAR_4->mem_limit != 0 && VAR_4->mem > VAR_4->mem_limit) {
  if (VAR_1 == ((void*)0) || VAR_3 > VAR_2) {
   VAR_4->mem = VAR_5;
   return ((void*)0);
  }
 }
 if (VAR_4->mem > VAR_4->mem_report) {
  VAR_4->mem_report *= 2;
  FUNC_0(VAR_4->ctx, "Memory warning %.2f M", (float)VAR_4->mem / (1024 * 1024));
 }
 return FUNC_1(VAR_1, VAR_2, VAR_3);
}
