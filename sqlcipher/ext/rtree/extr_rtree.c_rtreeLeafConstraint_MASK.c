
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int rValue; } ;
struct TYPE_5__ {int op; int iCoord; TYPE_1__ u; } ;
typedef int RtreeDValue ;
typedef TYPE_2__ RtreeConstraint ;


 int VAR_0 ;
 int FUNC_0 (int,int *,int ) ;
 int VAR_1 ;




 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(
  RtreeConstraint *VAR_2,
  int VAR_3,
  u8 *VAR_4,
  int *VAR_5
){
  RtreeDValue VAR_6;

  FUNC_1(VAR_2->op==129 || VAR_2->op==128 || VAR_2->op==131
      || VAR_2->op==130 || VAR_2->op==VAR_1 );
  VAR_4 += 8 + VAR_2->iCoord*4;
  FUNC_1( ((((char*)VAR_4) - (char*)0)&3)==0 );
  FUNC_0(VAR_3, VAR_4, VAR_6);
  switch( VAR_2->op ){
    case 129: if( VAR_6 <= VAR_2->u.rValue ) return; break;
    case 128: if( VAR_6 < VAR_2->u.rValue ) return; break;
    case 131: if( VAR_6 >= VAR_2->u.rValue ) return; break;
    case 130: if( VAR_6 > VAR_2->u.rValue ) return; break;
    default: if( VAR_6 == VAR_2->u.rValue ) return; break;
  }
  *VAR_5 = VAR_0;
}
