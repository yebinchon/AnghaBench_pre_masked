
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ pSchema; scalar_t__ pTabSchema; int op; int tr_tm; int pColumns; struct TYPE_11__* pNext; } ;
typedef TYPE_3__ Trigger ;
typedef int Table ;
struct TYPE_12__ {TYPE_2__* db; } ;
struct TYPE_10__ {TYPE_1__* aDb; } ;
struct TYPE_9__ {scalar_t__ pSchema; } ;
typedef TYPE_4__ Parse ;
typedef int ExprList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,int *,int,int,int) ;

void FUNC_3(
  Parse *VAR_5,
  Trigger *VAR_6,
  int VAR_7,
  ExprList *VAR_8,
  int VAR_9,
  Table *VAR_10,
  int VAR_11,
  int VAR_12,
  int VAR_13
){
  Trigger *VAR_14;

  FUNC_0( VAR_7==VAR_2 || VAR_7==VAR_1 || VAR_7==VAR_0 );
  FUNC_0( VAR_9==VAR_4 || VAR_9==VAR_3 );
  FUNC_0( (VAR_7==VAR_2)==(VAR_8!=0) );

  for(VAR_14=VAR_6; VAR_14; VAR_14=VAR_14->pNext){




    FUNC_0( VAR_14->pSchema!=0 );
    FUNC_0( VAR_14->pTabSchema!=0 );
    FUNC_0( VAR_14->pSchema==VAR_14->pTabSchema
         || VAR_14->pSchema==VAR_5->db->aDb[1].pSchema );


    if( VAR_14->op==VAR_7
     && VAR_14->tr_tm==VAR_9
     && FUNC_1(VAR_14->pColumns, VAR_8)
    ){
      FUNC_2(VAR_5, VAR_14, VAR_10, VAR_11, VAR_12, VAR_13);
    }
  }
}
