
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_int64 ;
typedef int VdbeOp ;
struct TYPE_7__ {int nOpAlloc; int * aOp; TYPE_2__* pParse; } ;
typedef TYPE_1__ Vdbe ;
struct TYPE_9__ {int* aLimit; } ;
struct TYPE_8__ {int szOpAlloc; TYPE_3__* db; } ;
typedef TYPE_2__ Parse ;
typedef int Op ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int * FUNC_3 (TYPE_3__*,int *,int) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(Vdbe *VAR_4, int VAR_5){
  VdbeOp *VAR_6;
  Parse *VAR_7 = VAR_4->pParse;
  sqlite3_int64 VAR_8 = (VAR_4->nOpAlloc ? 2*(sqlite3_int64)VAR_4->nOpAlloc
                        : (sqlite3_int64)(1024/sizeof(Op)));
  FUNC_0(VAR_5);



  if( VAR_8 > VAR_7->db->aLimit[VAR_0] ){
    FUNC_4(VAR_7->db);
    return VAR_1;
  }

  FUNC_1( VAR_5<=(1024/sizeof(Op)) );
  FUNC_1( VAR_8>=(VAR_4->nOpAlloc+VAR_5) );
  VAR_6 = FUNC_3(VAR_7->db, VAR_4->aOp, VAR_8*sizeof(Op));
  if( VAR_6 ){
    VAR_7->szOpAlloc = FUNC_2(VAR_7->db, VAR_6);
    VAR_4->nOpAlloc = VAR_7->szOpAlloc/sizeof(Op);
    VAR_4->aOp = VAR_6;
  }
  return (VAR_6 ? VAR_3 : VAR_2);
}
