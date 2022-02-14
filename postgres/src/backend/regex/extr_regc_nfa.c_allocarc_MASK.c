
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct arcbatch* next; struct arc* a; } ;
struct state {int noas; struct arc* free; TYPE_2__ oas; } ;
struct nfa {TYPE_1__* v; } ;
struct arcbatch {struct arc* a; struct arcbatch* next; } ;
struct arc {struct arc* freechain; scalar_t__ type; } ;
struct TYPE_3__ {scalar_t__ spaceused; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct arc *
FUNC_3(struct nfa *VAR_4,
   struct state *VAR_5)
{
 struct arc *VAR_6;


 if (VAR_5->free == ((void*)0) && VAR_5->noas < VAR_0)
 {
  VAR_6 = &VAR_5->oas.a[VAR_5->noas];
  VAR_5->noas++;
  return VAR_6;
 }


 if (VAR_5->free == ((void*)0))
 {
  struct arcbatch *VAR_7;
  int VAR_8;

  if (VAR_4->v->spaceused >= VAR_3)
  {
   FUNC_1(VAR_2);
   return ((void*)0);
  }
  VAR_7 = (struct arcbatch *) FUNC_0(sizeof(struct arcbatch));
  if (VAR_7 == ((void*)0))
  {
   FUNC_1(VAR_1);
   return ((void*)0);
  }
  VAR_4->v->spaceused += sizeof(struct arcbatch);
  VAR_7->next = VAR_5->oas.next;
  VAR_5->oas.next = VAR_7;

  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  {
   VAR_7->a[VAR_8].type = 0;
   VAR_7->a[VAR_8].freechain = &VAR_7->a[VAR_8 + 1];
  }
  VAR_7->a[VAR_0 - 1].freechain = ((void*)0);
  VAR_5->free = &VAR_7->a[0];
 }
 FUNC_2(VAR_5->free != ((void*)0));

 VAR_6 = VAR_5->free;
 VAR_5->free = VAR_6->freechain;
 return VAR_6;
}
