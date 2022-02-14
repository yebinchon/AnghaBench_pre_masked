
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int tnum; scalar_t__ pSchema; TYPE_3__* pIndex; } ;
typedef TYPE_1__ Table ;
struct TYPE_11__ {int nDb; } ;
struct TYPE_10__ {int tnum; scalar_t__ pSchema; struct TYPE_10__* pNext; } ;
struct TYPE_9__ {TYPE_4__* db; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ Index ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int,int) ;
 int FUNC_2 (TYPE_4__*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(Parse *VAR_0, Table *VAR_1){
  int VAR_2 = VAR_1->tnum;
  int VAR_3 = 0;

  while( 1 ){
    Index *VAR_4;
    int VAR_5 = 0;

    if( VAR_3==0 || VAR_2<VAR_3 ){
      VAR_5 = VAR_2;
    }
    for(VAR_4=VAR_1->pIndex; VAR_4; VAR_4=VAR_4->pNext){
      int VAR_6 = VAR_4->tnum;
      FUNC_0( VAR_4->pSchema==VAR_1->pSchema );
      if( (VAR_3==0 || (VAR_6<VAR_3)) && VAR_6>VAR_5 ){
        VAR_5 = VAR_6;
      }
    }
    if( VAR_5==0 ){
      return;
    }else{
      int VAR_7 = FUNC_2(VAR_0->db, VAR_1->pSchema);
      FUNC_0( VAR_7>=0 && VAR_7<VAR_0->db->nDb );
      FUNC_1(VAR_0, VAR_5, VAR_7);
      VAR_3 = VAR_5;
    }
  }
}
