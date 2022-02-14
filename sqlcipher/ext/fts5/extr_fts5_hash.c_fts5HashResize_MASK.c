
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {int nSlot; TYPE_1__** aSlot; } ;
struct TYPE_7__ {struct TYPE_7__* pHashNext; } ;
typedef TYPE_1__ Fts5HashEntry ;
typedef TYPE_2__ Fts5Hash ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 unsigned int FUNC_1 (int,int *,int) ;
 int FUNC_2 (TYPE_1__**,int ,int) ;
 int FUNC_3 (TYPE_1__**) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(Fts5Hash *VAR_2){
  int VAR_3 = VAR_2->nSlot*2;
  int VAR_4;
  Fts5HashEntry **VAR_5;
  Fts5HashEntry **VAR_6 = VAR_2->aSlot;

  VAR_5 = (Fts5HashEntry**)FUNC_4(VAR_3*sizeof(Fts5HashEntry*));
  if( !VAR_5 ) return VAR_0;
  FUNC_2(VAR_5, 0, VAR_3*sizeof(Fts5HashEntry*));

  for(VAR_4=0; VAR_4<VAR_2->nSlot; VAR_4++){
    while( VAR_6[VAR_4] ){
      unsigned int VAR_7;
      Fts5HashEntry *VAR_8 = VAR_6[VAR_4];
      VAR_6[VAR_4] = VAR_8->pHashNext;
      VAR_7 = FUNC_1(VAR_3, (u8*)FUNC_0(VAR_8),
                          (int)FUNC_5(FUNC_0(VAR_8)));
      VAR_8->pHashNext = VAR_5[VAR_7];
      VAR_5[VAR_7] = VAR_8;
    }
  }

  FUNC_3(VAR_6);
  VAR_2->nSlot = VAR_3;
  VAR_2->aSlot = VAR_5;
  return VAR_1;
}
