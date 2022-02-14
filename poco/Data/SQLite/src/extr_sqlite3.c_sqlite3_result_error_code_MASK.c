
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int isError; TYPE_4__* pOut; TYPE_1__* pVdbe; } ;
typedef TYPE_2__ sqlite3_context ;
struct TYPE_7__ {int flags; } ;
struct TYPE_5__ {int rcApp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,int ,int,int ,int ) ;

void FUNC_2(sqlite3_context *VAR_3, int VAR_4){
  VAR_3->isError = VAR_4 ? VAR_4 : -1;



  if( VAR_3->pOut->flags & VAR_0 ){
    FUNC_1(VAR_3->pOut, FUNC_0(VAR_4), -1,
                         VAR_2, VAR_1);
  }
}
