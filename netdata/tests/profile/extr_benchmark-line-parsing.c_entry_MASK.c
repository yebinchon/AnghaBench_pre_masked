
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {void (* func ) (void*,void*) ;struct entry* prev; struct entry* next; void* data2; void* data1; int name; int hash; } ;
struct base {scalar_t__ registered; scalar_t__ wanted; struct entry* entries; struct entry* last; } ;


 struct base* FUNC_0 (int,int) ;
 struct entry* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static inline struct base *FUNC_4(struct base *VAR_0, const char *VAR_1, void *VAR_2, void *VAR_3, void (*VAR_4)(void *, void *)) {
  if(!VAR_0)
    VAR_0 = FUNC_0(1, sizeof(struct base));

  struct entry *VAR_5 = FUNC_1(sizeof(struct entry));
  VAR_5->name = FUNC_3(VAR_1);
  VAR_5->hash = FUNC_2(VAR_5->name);
  VAR_5->data1 = VAR_2;
  VAR_5->data2 = VAR_3;
  VAR_5->func = VAR_4;
  VAR_5->prev = ((void*)0);
  VAR_5->next = VAR_0->entries;

  if(VAR_0->entries) VAR_0->entries->prev = VAR_5;
  else VAR_0->last = VAR_5;

  VAR_0->entries = VAR_5;
  VAR_0->registered++;
  VAR_0->wanted = VAR_0->registered;

  return VAR_0;
}
