
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_6__ {scalar_t__ rc; scalar_t__ pDataVersion; TYPE_1__* pConfig; } ;
struct TYPE_5__ {int zDb; } ;
typedef TYPE_2__ Fts5Index ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__*,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static i64 FUNC_5(Fts5Index *VAR_2){
  i64 VAR_3 = 0;

  if( VAR_2->rc==VAR_0 ){
    if( VAR_2->pDataVersion==0 ){
      VAR_2->rc = FUNC_0(VAR_2, &VAR_2->pDataVersion,
          FUNC_2("PRAGMA %Q.data_version", VAR_2->pConfig->zDb)
          );
      if( VAR_2->rc ) return 0;
    }

    if( VAR_1==FUNC_4(VAR_2->pDataVersion) ){
      VAR_3 = FUNC_1(VAR_2->pDataVersion, 0);
    }
    VAR_2->rc = FUNC_3(VAR_2->pDataVersion);
  }

  return VAR_3;
}
