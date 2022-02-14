
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ bDisable; } ;
struct TYPE_8__ {TYPE_1__ lookaside; } ;
typedef TYPE_2__ sqlite3 ;
struct TYPE_9__ {scalar_t__ disableLookaside; int pConstExpr; int aLabel; TYPE_2__* db; } ;
typedef TYPE_3__ Parse ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;

void FUNC_3(Parse *VAR_0){
  sqlite3 *VAR_1 = VAR_0->db;
  FUNC_1(VAR_1, VAR_0->aLabel);
  FUNC_2(VAR_1, VAR_0->pConstExpr);
  if( VAR_1 ){
    FUNC_0( VAR_1->lookaside.bDisable >= VAR_0->disableLookaside );
    VAR_1->lookaside.bDisable -= VAR_0->disableLookaside;
  }
  VAR_0->disableLookaside = 0;
}
