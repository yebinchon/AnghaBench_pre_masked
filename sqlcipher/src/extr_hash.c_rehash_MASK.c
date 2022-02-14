
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct _ht {int dummy; } ;
struct TYPE_7__ {unsigned int htsize; TYPE_1__* first; struct _ht* ht; } ;
struct TYPE_6__ {struct TYPE_6__* next; int pKey; } ;
typedef TYPE_1__ HashElem ;
typedef TYPE_2__ Hash ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_2__*,struct _ht*,TYPE_1__*) ;
 int FUNC_1 (struct _ht*,int ,unsigned int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (unsigned int) ;
 int FUNC_5 (struct _ht*) ;
 int FUNC_6 (struct _ht*) ;
 unsigned int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(Hash *VAR_1, unsigned int VAR_2){
  struct _ht *VAR_3;
  HashElem *VAR_4, *VAR_5;
  FUNC_2();
  VAR_3 = (struct _ht *)FUNC_4( VAR_2*sizeof(struct _ht) );
  FUNC_3();

  if( VAR_3==0 ) return 0;
  FUNC_6(VAR_1->ht);
  VAR_1->ht = VAR_3;
  VAR_1->htsize = VAR_2 = FUNC_5(VAR_3)/sizeof(struct _ht);
  FUNC_1(VAR_3, 0, VAR_2*sizeof(struct _ht));
  for(VAR_4=VAR_1->first, VAR_1->first=0; VAR_4; VAR_4 = VAR_5){
    unsigned int VAR_6 = FUNC_7(VAR_4->pKey) % VAR_2;
    VAR_5 = VAR_4->next;
    FUNC_0(VAR_1, &VAR_3[VAR_6], VAR_4);
  }
  return 1;
}
