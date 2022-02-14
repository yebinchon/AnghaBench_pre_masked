
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int fulltext_vtab ;
struct TYPE_5__ {scalar_t__ pData; } ;
struct TYPE_6__ {int eof; int leafReader; int pStmt; TYPE_1__ rootData; } ;
typedef TYPE_2__ LeavesReader ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(fulltext_vtab *VAR_3, LeavesReader *VAR_4){
  FUNC_0( !FUNC_5(VAR_4) );
  FUNC_4(&VAR_4->leafReader);

  if( FUNC_1(&VAR_4->leafReader) ){
    int VAR_5;
    if( VAR_4->rootData.pData ){
      VAR_4->eof = 1;
      return VAR_1;
    }
    VAR_5 = FUNC_8(VAR_4->pStmt);
    if( VAR_5!=VAR_2 ){
      VAR_4->eof = 1;
      return VAR_5==VAR_0 ? VAR_1 : VAR_5;
    }
    FUNC_2(&VAR_4->leafReader);
    FUNC_3(FUNC_6(VAR_4->pStmt, 0),
                   FUNC_7(VAR_4->pStmt, 0),
                   &VAR_4->leafReader);
  }
  return VAR_1;
}
