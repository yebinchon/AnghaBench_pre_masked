
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ eDetail; } ;
struct TYPE_7__ {scalar_t__ pVtab; } ;
struct TYPE_10__ {TYPE_1__ base; } ;
struct TYPE_9__ {int* a; int* b; } ;
struct TYPE_8__ {TYPE_5__* pConfig; } ;
typedef TYPE_2__ Fts5Table ;
typedef TYPE_3__ Fts5PhraseIter ;
typedef TYPE_4__ Fts5Cursor ;
typedef int Fts5Context ;
typedef TYPE_5__ Fts5Config ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int*,int) ;

__attribute__((used)) static void FUNC_1(
  Fts5Context *VAR_1,
  Fts5PhraseIter *VAR_2,
  int *VAR_3
){
  Fts5Cursor *VAR_4 = (Fts5Cursor*)VAR_1;
  Fts5Config *VAR_5 = ((Fts5Table*)(VAR_4->base.pVtab))->pConfig;

  if( VAR_5->eDetail==VAR_0 ){
    if( VAR_2->a>=VAR_2->b ){
      *VAR_3 = -1;
    }else{
      int VAR_6;
      VAR_2->a += FUNC_0(&VAR_2->a[0], VAR_6);
      *VAR_3 += (VAR_6-2);
    }
  }else{
    while( 1 ){
      int VAR_7;
      if( VAR_2->a>=VAR_2->b ){
        *VAR_3 = -1;
        return;
      }
      if( VAR_2->a[0]==0x01 ) break;
      VAR_2->a += FUNC_0(VAR_2->a, VAR_7);
    }
    VAR_2->a += 1 + FUNC_0(&VAR_2->a[1], *VAR_3);
  }
}
