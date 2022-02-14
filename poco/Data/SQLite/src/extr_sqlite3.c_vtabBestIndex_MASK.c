
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ zErrMsg; TYPE_1__* pModule; } ;
typedef TYPE_2__ sqlite3_vtab ;
typedef int sqlite3_index_info ;
typedef int Table ;
struct TYPE_11__ {TYPE_2__* pVtab; } ;
struct TYPE_10__ {int db; } ;
struct TYPE_8__ {int (* xBestIndex ) (TYPE_2__*,int *) ;} ;
typedef TYPE_3__ Parse ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,char*,scalar_t__) ;
 TYPE_6__* FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_8(Parse *VAR_3, Table *VAR_4, sqlite3_index_info *VAR_5){
  sqlite3_vtab *VAR_6 = FUNC_4(VAR_3->db, VAR_4)->pVtab;
  int VAR_7;

  FUNC_0(VAR_5);
  VAR_7 = VAR_6->pModule->xBestIndex(VAR_6, VAR_5);
  FUNC_1(VAR_5);

  if( VAR_7!=VAR_2 && VAR_7!=VAR_0 ){
    if( VAR_7==VAR_1 ){
      FUNC_5(VAR_3->db);
    }else if( !VAR_6->zErrMsg ){
      FUNC_3(VAR_3, "%s", FUNC_2(VAR_7));
    }else{
      FUNC_3(VAR_3, "%s", VAR_6->zErrMsg);
    }
  }
  FUNC_6(VAR_6->zErrMsg);
  VAR_6->zErrMsg = 0;
  return VAR_7;
}
