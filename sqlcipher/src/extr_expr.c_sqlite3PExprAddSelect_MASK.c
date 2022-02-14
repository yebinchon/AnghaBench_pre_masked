
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int mallocFailed; } ;
struct TYPE_10__ {int * pSelect; } ;
struct TYPE_12__ {TYPE_1__ x; } ;
struct TYPE_11__ {TYPE_4__* db; } ;
typedef int Select ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*,int *) ;

void FUNC_4(Parse *VAR_2, Expr *VAR_3, Select *VAR_4){
  if( VAR_3 ){
    VAR_3->x.pSelect = VAR_4;
    FUNC_0(VAR_3, VAR_1|VAR_0);
    FUNC_2(VAR_2, VAR_3);
  }else{
    FUNC_1( VAR_2->db->mallocFailed );
    FUNC_3(VAR_2->db, VAR_4);
  }
}
