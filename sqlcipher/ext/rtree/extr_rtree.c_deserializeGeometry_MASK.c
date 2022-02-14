
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int sqlite3_value ;
struct TYPE_13__ {int apSqlParam; int aParam; int nParam; int pContext; } ;
typedef TYPE_3__ sqlite3_rtree_query_info ;
struct TYPE_11__ {int xQueryFunc; scalar_t__ xGeom; } ;
struct TYPE_15__ {TYPE_3__* pInfo; TYPE_1__ u; int op; } ;
struct TYPE_12__ {int xQueryFunc; scalar_t__ xGeom; int pContext; } ;
struct TYPE_14__ {TYPE_2__ cb; int apSqlParam; int aParam; int nParam; scalar_t__ iSize; } ;
typedef TYPE_4__ RtreeMatchArg ;
typedef TYPE_5__ RtreeConstraint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,TYPE_4__*,scalar_t__) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 TYPE_4__* FUNC_3 (int *,char*) ;

__attribute__((used)) static int FUNC_4(sqlite3_value *VAR_4, RtreeConstraint *VAR_5){
  RtreeMatchArg *VAR_6, *VAR_7;
  sqlite3_rtree_query_info *VAR_8;

  VAR_7 = FUNC_3(VAR_4, "RtreeMatchArg");
  if( VAR_7==0 ) return VAR_1;
  VAR_8 = (sqlite3_rtree_query_info*)
                FUNC_2( sizeof(*VAR_8)+VAR_7->iSize );
  if( !VAR_8 ) return VAR_2;
  FUNC_1(VAR_8, 0, sizeof(*VAR_8));
  VAR_6 = (RtreeMatchArg*)&VAR_8[1];
  FUNC_0(VAR_6, VAR_7, VAR_7->iSize);
  VAR_8->pContext = VAR_6->cb.pContext;
  VAR_8->nParam = VAR_6->nParam;
  VAR_8->aParam = VAR_6->aParam;
  VAR_8->apSqlParam = VAR_6->apSqlParam;

  if( VAR_6->cb.xGeom ){
    VAR_5->u.xGeom = VAR_6->cb.xGeom;
  }else{
    VAR_5->op = VAR_0;
    VAR_5->u.xQueryFunc = VAR_6->cb.xQueryFunc;
  }
  VAR_5->pInfo = VAR_8;
  return VAR_3;
}
