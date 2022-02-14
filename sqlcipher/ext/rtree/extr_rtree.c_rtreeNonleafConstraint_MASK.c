
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3_rtree_dbl ;
struct TYPE_4__ {int rValue; } ;
struct TYPE_5__ {int iCoord; int op; TYPE_1__ u; } ;
typedef TYPE_2__ RtreeConstraint ;


 int VAR_0 ;
 int FUNC_0 (int,int *,int ) ;

 int VAR_1 ;
 int VAR_2 ;


 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(
  RtreeConstraint *VAR_3,
  int VAR_4,
  u8 *VAR_5,
  int *VAR_6
){
  sqlite3_rtree_dbl VAR_7;




  VAR_5 += 8 + 4*(VAR_3->iCoord&0xfe);

  FUNC_1(VAR_3->op==129 || VAR_3->op==128 || VAR_3->op==VAR_1
      || VAR_3->op==VAR_2 || VAR_3->op==130 );
  FUNC_1( ((((char*)VAR_5) - (char*)0)&3)==0 );
  switch( VAR_3->op ){
    case 129:
    case 128:
    case 130:
      FUNC_0(VAR_4, VAR_5, VAR_7);

      if( VAR_3->u.rValue>=VAR_7 ) return;
      if( VAR_3->op!=130 ) break;


    default:
      VAR_5 += 4;
      FUNC_0(VAR_4, VAR_5, VAR_7);

      if( VAR_3->u.rValue<=VAR_7 ) return;
  }
  *VAR_6 = VAR_0;
}
