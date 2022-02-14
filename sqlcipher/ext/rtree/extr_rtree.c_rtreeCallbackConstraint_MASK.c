
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_11__ {int nCoord; scalar_t__* aCoord; int iLevel; scalar_t__ rScore; scalar_t__ rParentScore; int eWithin; int eParentWithin; int iRowid; } ;
typedef TYPE_2__ sqlite3_rtree_query_info ;
typedef int sqlite3_rtree_geometry ;
typedef scalar_t__ sqlite3_rtree_dbl ;
struct TYPE_10__ {int (* xGeom ) (int *,int,scalar_t__*,int*) ;int (* xQueryFunc ) (TYPE_2__*) ;} ;
struct TYPE_14__ {scalar_t__ op; TYPE_1__ u; TYPE_2__* pInfo; } ;
struct TYPE_13__ {scalar_t__ f; scalar_t__ i; } ;
struct TYPE_12__ {int iLevel; scalar_t__ rScore; int eWithin; } ;
typedef TYPE_3__ RtreeSearchPoint ;
typedef TYPE_4__ RtreeCoord ;
typedef TYPE_5__ RtreeConstraint ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_4__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,scalar_t__*,int*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(
  RtreeConstraint *VAR_5,
  int VAR_6,
  u8 *VAR_7,
  RtreeSearchPoint *VAR_8,
  sqlite3_rtree_dbl *VAR_9,
  int *VAR_10
){
  sqlite3_rtree_query_info *VAR_11 = VAR_5->pInfo;
  int VAR_12 = VAR_11->nCoord;
  int VAR_13;
  RtreeCoord VAR_14;
  sqlite3_rtree_dbl VAR_15[VAR_2*2];

  FUNC_0( VAR_5->op==VAR_1 || VAR_5->op==VAR_3 );
  FUNC_0( VAR_12==2 || VAR_12==4 || VAR_12==6 || VAR_12==8 || VAR_12==10 );

  if( VAR_5->op==VAR_3 && VAR_8->iLevel==1 ){
    VAR_11->iRowid = FUNC_2(VAR_7);
  }
  VAR_7 += 8;

  if( VAR_6==0 ){
    switch( VAR_12 ){
      case 10: FUNC_1(VAR_7+36, &VAR_14); VAR_15[9] = VAR_14.f;
                FUNC_1(VAR_7+32, &VAR_14); VAR_15[8] = VAR_14.f;
      case 8: FUNC_1(VAR_7+28, &VAR_14); VAR_15[7] = VAR_14.f;
                FUNC_1(VAR_7+24, &VAR_14); VAR_15[6] = VAR_14.f;
      case 6: FUNC_1(VAR_7+20, &VAR_14); VAR_15[5] = VAR_14.f;
                FUNC_1(VAR_7+16, &VAR_14); VAR_15[4] = VAR_14.f;
      case 4: FUNC_1(VAR_7+12, &VAR_14); VAR_15[3] = VAR_14.f;
                FUNC_1(VAR_7+8, &VAR_14); VAR_15[2] = VAR_14.f;
      default: FUNC_1(VAR_7+4, &VAR_14); VAR_15[1] = VAR_14.f;
                FUNC_1(VAR_7, &VAR_14); VAR_15[0] = VAR_14.f;
    }
  }else

  {
    switch( VAR_12 ){
      case 10: FUNC_1(VAR_7+36, &VAR_14); VAR_15[9] = VAR_14.i;
                FUNC_1(VAR_7+32, &VAR_14); VAR_15[8] = VAR_14.i;
      case 8: FUNC_1(VAR_7+28, &VAR_14); VAR_15[7] = VAR_14.i;
                FUNC_1(VAR_7+24, &VAR_14); VAR_15[6] = VAR_14.i;
      case 6: FUNC_1(VAR_7+20, &VAR_14); VAR_15[5] = VAR_14.i;
                FUNC_1(VAR_7+16, &VAR_14); VAR_15[4] = VAR_14.i;
      case 4: FUNC_1(VAR_7+12, &VAR_14); VAR_15[3] = VAR_14.i;
                FUNC_1(VAR_7+8, &VAR_14); VAR_15[2] = VAR_14.i;
      default: FUNC_1(VAR_7+4, &VAR_14); VAR_15[1] = VAR_14.i;
                FUNC_1(VAR_7, &VAR_14); VAR_15[0] = VAR_14.i;
    }
  }
  if( VAR_5->op==VAR_1 ){
    int VAR_16 = 0;
    VAR_13 = VAR_5->u.xGeom((sqlite3_rtree_geometry*)VAR_11,
                              VAR_12, VAR_15, &VAR_16);
    if( VAR_16==0 ) *VAR_10 = VAR_0;
    *VAR_9 = VAR_4;
  }else{
    VAR_11->aCoord = VAR_15;
    VAR_11->iLevel = VAR_8->iLevel - 1;
    VAR_11->rScore = VAR_11->rParentScore = VAR_8->rScore;
    VAR_11->eWithin = VAR_11->eParentWithin = VAR_8->eWithin;
    VAR_13 = VAR_5->u.xQueryFunc(VAR_11);
    if( VAR_11->eWithin<*VAR_10 ) *VAR_10 = VAR_11->eWithin;
    if( VAR_11->rScore<*VAR_9 || *VAR_9<VAR_4 ){
      *VAR_9 = VAR_11->rScore;
    }
  }
  return VAR_13;
}
