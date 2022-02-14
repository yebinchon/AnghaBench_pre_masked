
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int Trigger ;
typedef int Table ;
struct TYPE_12__ {struct TYPE_12__* pNextTo; } ;
struct TYPE_11__ {TYPE_1__* db; } ;
struct TYPE_10__ {int flags; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ FKey ;
typedef int ExprList ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_2__*,int *,TYPE_3__*,int *) ;
 scalar_t__ FUNC_1 (int *,TYPE_3__*,int*,int) ;
 int FUNC_2 (TYPE_2__*,int *,int *,int,int ,int ) ;
 TYPE_3__* FUNC_3 (int *) ;

void FUNC_4(
  Parse *VAR_2,
  Table *VAR_3,
  ExprList *VAR_4,
  int VAR_5,
  int *VAR_6,
  int VAR_7
){




  if( VAR_2->db->flags&VAR_1 ){
    FKey *VAR_8;
    for(VAR_8 = FUNC_3(VAR_3); VAR_8; VAR_8=VAR_8->pNextTo){
      if( VAR_6==0 || FUNC_1(VAR_3, VAR_8, VAR_6, VAR_7) ){
        Trigger *VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_8, VAR_4);
        if( VAR_9 ){
          FUNC_2(VAR_2, VAR_9, VAR_3, VAR_5, VAR_0, 0);
        }
      }
    }
  }
}
