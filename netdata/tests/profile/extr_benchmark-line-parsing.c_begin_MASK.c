
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {scalar_t__ found; struct entry* next; } ;
struct base {int iteration; scalar_t__ found; struct entry* entries; struct entry* last; scalar_t__ wanted; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct base *VAR_0) {

  if(FUNC_0(VAR_0->iteration % 60) == 1) {
    VAR_0->wanted = 0;
    struct entry *VAR_1;
    for(VAR_1 = VAR_0->entries; VAR_1 ; VAR_1 = VAR_1->next)
      if(VAR_1->found) VAR_0->wanted++;
  }

  VAR_0->iteration++;
  VAR_0->last = VAR_0->entries;
  VAR_0->found = 0;
}
