
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int nDb; TYPE_1__* aDb; } ;
struct TYPE_9__ {int cookieMask; TYPE_3__* db; } ;
struct TYPE_8__ {scalar_t__ pBt; } ;
typedef TYPE_2__ Parse ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*,int,int ) ;

void FUNC_6(Parse *VAR_2, int VAR_3){
  Parse *VAR_4 = FUNC_4(VAR_2);

  FUNC_2( VAR_3>=0 && VAR_3<VAR_2->db->nDb );
  FUNC_2( VAR_2->db->aDb[VAR_3].pBt!=0 || VAR_3==1 );
  FUNC_2( VAR_3<VAR_1+2 );
  FUNC_2( FUNC_5(VAR_2->db, VAR_3, 0) );
  if( FUNC_1(VAR_4->cookieMask, VAR_3)==0 ){
    FUNC_0(VAR_4->cookieMask, VAR_3);
    if( !VAR_0 && VAR_3==1 ){
      FUNC_3(VAR_4);
    }
  }
}
