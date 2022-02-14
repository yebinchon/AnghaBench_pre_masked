
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_13__ ;


struct TYPE_22__ {scalar_t__ zErrMsg; TYPE_1__* pModule; } ;
typedef TYPE_4__ sqlite3_vtab ;
struct TYPE_23__ {size_t nConstraint; TYPE_3__* aConstraintUsage; TYPE_2__* aConstraint; } ;
typedef TYPE_5__ sqlite3_index_info ;
struct TYPE_24__ {scalar_t__ zName; } ;
typedef TYPE_6__ Table ;
struct TYPE_25__ {int nErr; int db; } ;
struct TYPE_21__ {scalar_t__ argvIndex; } ;
struct TYPE_20__ {int usable; } ;
struct TYPE_19__ {int (* xBestIndex ) (TYPE_4__*,TYPE_5__*) ;} ;
struct TYPE_18__ {TYPE_4__* pVtab; } ;
typedef TYPE_7__ Parse ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 size_t VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_7__*,char*,scalar_t__) ;
 TYPE_13__* FUNC_4 (int ,TYPE_6__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_4__*,TYPE_5__*) ;

__attribute__((used)) static int FUNC_8(Parse *VAR_3, Table *VAR_4, sqlite3_index_info *VAR_5){
  sqlite3_vtab *VAR_6 = FUNC_4(VAR_3->db, VAR_4)->pVtab;
  int VAR_7;

  FUNC_0(VAR_5);
  VAR_7 = VAR_6->pModule->xBestIndex(VAR_6, VAR_5);
  FUNC_1(VAR_5);

  if( VAR_7!=VAR_1 ){
    if( VAR_7==VAR_0 ){
      FUNC_5(VAR_3->db);
    }else if( !VAR_6->zErrMsg ){
      FUNC_3(VAR_3, "%s", FUNC_2(VAR_7));
    }else{
      FUNC_3(VAR_3, "%s", VAR_6->zErrMsg);
    }
  }
  FUNC_6(VAR_6->zErrMsg);
  VAR_6->zErrMsg = 0;
  return VAR_3->nErr;
}
