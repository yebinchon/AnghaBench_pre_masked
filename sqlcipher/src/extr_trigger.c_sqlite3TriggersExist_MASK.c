
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int op; int tr_tm; int pColumns; struct TYPE_9__* pNext; } ;
typedef TYPE_2__ Trigger ;
typedef int Table ;
struct TYPE_10__ {TYPE_1__* db; } ;
struct TYPE_8__ {int flags; } ;
typedef TYPE_3__ Parse ;
typedef int ExprList ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 TYPE_2__* FUNC_3 (TYPE_3__*,int *) ;

Trigger *FUNC_4(
  Parse *VAR_1,
  Table *VAR_2,
  int VAR_3,
  ExprList *VAR_4,
  int *VAR_5
){
  int VAR_6 = 0;
  Trigger *VAR_7 = 0;
  Trigger *VAR_8;

  if( (VAR_1->db->flags & VAR_0)!=0 ){
    VAR_7 = FUNC_3(VAR_1, VAR_2);
  }
  FUNC_1( VAR_7==0 || FUNC_0(VAR_2)==0 );
  for(VAR_8=VAR_7; VAR_8; VAR_8=VAR_8->pNext){
    if( VAR_8->op==VAR_3 && FUNC_2(VAR_8->pColumns, VAR_4) ){
      VAR_6 |= VAR_8->tr_tm;
    }
  }
  if( VAR_5 ){
    *VAR_5 = VAR_6;
  }
  return (VAR_6 ? VAR_7 : 0);
}
