
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_11__ {TYPE_3__* pNC; } ;
struct TYPE_12__ {TYPE_9__* pParse; TYPE_1__ u; scalar_t__ xSelectCallback2; int xSelectCallback; int xExprCallback; } ;
typedef TYPE_2__ Walker ;
struct TYPE_15__ {scalar_t__ nErr; int nHeight; } ;
struct TYPE_14__ {scalar_t__ nHeight; } ;
struct TYPE_13__ {int ncFlags; scalar_t__ nErr; TYPE_9__* pParse; } ;
typedef TYPE_3__ NameContext ;
typedef TYPE_4__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (TYPE_9__*,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_4 (int) ;

int FUNC_5(
  NameContext *VAR_9,
  Expr *VAR_10
){
  u16 VAR_11;
  Walker VAR_12;

  if( VAR_10==0 ) return VAR_6;
  VAR_11 = VAR_9->ncFlags & (VAR_2|VAR_4|VAR_3);
  VAR_9->ncFlags &= ~(VAR_2|VAR_4|VAR_3);
  VAR_12.pParse = VAR_9->pParse;
  VAR_12.xExprCallback = VAR_7;
  VAR_12.xSelectCallback = VAR_8;
  VAR_12.xSelectCallback2 = 0;
  VAR_12.u.pNC = VAR_9;






  FUNC_3(&VAR_12, VAR_10);



  FUNC_1( VAR_0==VAR_2 );
  FUNC_1( VAR_1==VAR_3 );
  FUNC_4( VAR_9->ncFlags & VAR_2 );
  FUNC_4( VAR_9->ncFlags & VAR_3 );
  FUNC_0(VAR_10, VAR_9->ncFlags & (VAR_2|VAR_3) );
  VAR_9->ncFlags |= VAR_11;
  return VAR_9->nErr>0 || VAR_12.pParse->nErr>0;
}
