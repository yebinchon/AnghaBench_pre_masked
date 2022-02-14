
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int mutex; } ;
struct TYPE_8__ {int nHash; TYPE_1__** apHash; TYPE_5__* pGroup; } ;
struct TYPE_7__ {unsigned int iKey; struct TYPE_7__* pNext; } ;
typedef TYPE_1__ PgHdr1 ;
typedef TYPE_2__ PCache1 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__**) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(PCache1 *VAR_2){
  PgHdr1 **VAR_3;
  unsigned int VAR_4;
  unsigned int VAR_5;

  FUNC_0( FUNC_7(VAR_2->pGroup->mutex) );

  VAR_4 = VAR_2->nHash*2;
  if( VAR_4<256 ){
    VAR_4 = 256;
  }

  FUNC_2(VAR_2->pGroup);
  if( VAR_2->nHash ){ FUNC_3(); }
  VAR_3 = (PgHdr1 **)FUNC_5(sizeof(PgHdr1 *)*VAR_4);
  if( VAR_2->nHash ){ FUNC_4(); }
  FUNC_1(VAR_2->pGroup);
  if( VAR_3 ){
    for(VAR_5=0; VAR_5<VAR_2->nHash; VAR_5++){
      PgHdr1 *VAR_6;
      PgHdr1 *VAR_7 = VAR_2->apHash[VAR_5];
      while( (VAR_6 = VAR_7)!=0 ){
        unsigned int VAR_8 = VAR_6->iKey % VAR_4;
        VAR_7 = VAR_6->pNext;
        VAR_6->pNext = VAR_3[VAR_8];
        VAR_3[VAR_8] = VAR_6;
      }
    }
    FUNC_6(VAR_2->apHash);
    VAR_2->apHash = VAR_3;
    VAR_2->nHash = VAR_4;
  }

  return (VAR_2->apHash ? VAR_1 : VAR_0);
}
