
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int zName; TYPE_4__* pFKey; } ;
typedef TYPE_2__ Table ;
struct TYPE_16__ {scalar_t__* aAction; struct TYPE_16__* pNextTo; int zTo; struct TYPE_16__* pNextFrom; } ;
struct TYPE_15__ {TYPE_1__* db; } ;
struct TYPE_13__ {int flags; } ;
typedef TYPE_3__ Parse ;
typedef TYPE_4__ FKey ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_4__*,int*,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_4__*,int*,int) ;
 TYPE_4__* FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

int FUNC_4(
  Parse *VAR_2,
  Table *VAR_3,
  int *VAR_4,
  int VAR_5
){
  int VAR_6 = 0;
  if( VAR_2->db->flags&VAR_1 ){
    if( !VAR_4 ){



      VAR_6 = (FUNC_2(VAR_3) || VAR_3->pFKey);
    }else{


      FKey *VAR_7;


      for(VAR_7=VAR_3->pFKey; VAR_7; VAR_7=VAR_7->pNextFrom){
        if( 0==FUNC_3(VAR_3->zName, VAR_7->zTo) ) return 2;
        if( FUNC_0(VAR_3, VAR_7, VAR_4, VAR_5) ){
          VAR_6 = 1;
        }
      }


      for(VAR_7=FUNC_2(VAR_3); VAR_7; VAR_7=VAR_7->pNextTo){
        if( FUNC_1(VAR_3, VAR_7, VAR_4, VAR_5) ){
          if( VAR_7->aAction[1]!=VAR_0 ) return 2;
          VAR_6 = 1;
        }
      }
    }
  }
  return VAR_6;
}
