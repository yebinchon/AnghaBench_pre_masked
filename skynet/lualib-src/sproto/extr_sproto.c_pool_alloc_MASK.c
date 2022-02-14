
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool {size_t current_used; int * header; int * current; } ;


 size_t VAR_0 ;
 void* FUNC_0 (struct pool*,size_t) ;

__attribute__((used)) static void *
FUNC_1(struct pool *VAR_1, size_t VAR_2) {

 VAR_2 = (VAR_2 + 7) & ~7;
 if (VAR_2 >= VAR_0) {
  return FUNC_0(VAR_1, VAR_2);
 }
 if (VAR_1->current == ((void*)0)) {
  if (FUNC_0(VAR_1, VAR_0) == ((void*)0))
   return ((void*)0);
  VAR_1->current = VAR_1->header;
 }
 if (VAR_2 + VAR_1->current_used <= VAR_0) {
  void * VAR_3 = (char *)(VAR_1->current+1) + VAR_1->current_used;
  VAR_1->current_used += VAR_2;
  return VAR_3;
 }

 if (VAR_2 >= VAR_1->current_used) {
  return FUNC_0(VAR_1, VAR_2);
 } else {
  void * VAR_4 = FUNC_0(VAR_1, VAR_0);
  VAR_1->current = VAR_1->header;
  VAR_1->current_used = VAR_2;
  return VAR_4;
 }
}
