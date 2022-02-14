
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct entry {char const* name; int found; scalar_t__ hash; struct entry* next; struct entry* prev; int data2; int data1; int (* func ) (int ,int ) ;} ;
struct base {scalar_t__ found; scalar_t__ registered; struct entry* entries; struct entry* last; } ;


 struct entry* FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (char const*,char const*) ;
 char const* FUNC_6 (char const*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static inline int FUNC_9(struct base *VAR_0, const char *VAR_1) {
  uint32_t VAR_2 = FUNC_4(VAR_1);

  if(FUNC_2(!FUNC_5(VAR_1, VAR_0->last->name))) {
    VAR_0->last->found = 1;
    VAR_0->found++;
    if(VAR_0->last->func) VAR_0->last->func(VAR_0->last->data1, VAR_0->last->data2);
    VAR_0->last = VAR_0->last->next;

    if(!VAR_0->last)
      VAR_0->last = VAR_0->entries;

    if(VAR_0->found == VAR_0->registered)
      return 1;

    return 0;
  }


  struct entry *VAR_3;
  for(VAR_3 = VAR_0->entries; VAR_3 ; VAR_3 = VAR_3->next)
    if(VAR_3->hash == VAR_2 && !FUNC_5(VAR_3->name, VAR_1))
      break;

  if(VAR_3 == VAR_0->last) {
    FUNC_3("ERROR\n");
    FUNC_1(1);
  }

  if(VAR_3) {



    if(VAR_3->func) VAR_3->func(VAR_3->data1, VAR_3->data2);


    if(VAR_3->next) VAR_3->next->prev = VAR_3->prev;
    if(VAR_3->prev) VAR_3->prev->next = VAR_3->next;

    if(VAR_0->entries == VAR_3)
      VAR_0->entries = VAR_3->next;
  }
  else {



    VAR_3 = FUNC_0(1, sizeof(struct entry));
    VAR_3->name = FUNC_6(VAR_1);
    VAR_3->hash = VAR_2;
  }


  VAR_3->next = VAR_0->last;
  if(VAR_0->last) {
    VAR_3->prev = VAR_0->last->prev;
    VAR_0->last->prev = VAR_3;

    if(VAR_0->entries == VAR_0->last)
      VAR_0->entries = VAR_3;
  }
  else
    VAR_3->prev = ((void*)0);

  if(VAR_3->prev)
    VAR_3->prev->next = VAR_3;

  VAR_0->last = VAR_3->next;
  if(!VAR_0->last)
    VAR_0->last = VAR_0->entries;

  VAR_3->found = 1;
  VAR_0->found++;

  if(VAR_0->found == VAR_0->registered)
    return 1;

  FUNC_3("relinked '%s' after '%s' and before '%s': ", VAR_3->name, VAR_3->prev?VAR_3->prev->name:"NONE", VAR_3->next?VAR_3->next->name:"NONE");
  for(VAR_3 = VAR_0->entries; VAR_3 ; VAR_3 = VAR_3->next) FUNC_3("%s ", VAR_3->name);
  FUNC_3("\n");

  return 0;
}
