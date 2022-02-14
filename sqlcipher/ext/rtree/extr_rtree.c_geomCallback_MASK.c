
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_int64 ;
typedef int sqlite3_context ;
struct TYPE_5__ {int iSize; int nParam; scalar_t__* apSqlParam; int * aParam; int cb; } ;
typedef TYPE_1__ RtreeMatchArg ;
typedef int RtreeGeomCallback ;
typedef int RtreeDValue ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*,char*,int (*) (TYPE_1__*)) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(sqlite3_context *VAR_0, int VAR_1, sqlite3_value **VAR_2){
  RtreeGeomCallback *VAR_3 = (RtreeGeomCallback *)FUNC_4(VAR_0);
  RtreeMatchArg *VAR_4;
  sqlite3_int64 VAR_5;
  int VAR_6 = 0;

  VAR_5 = sizeof(RtreeMatchArg) + (VAR_1-1)*sizeof(RtreeDValue)
           + VAR_1*sizeof(sqlite3_value*);
  VAR_4 = (RtreeMatchArg *)FUNC_1(VAR_5);
  if( !VAR_4 ){
    FUNC_2(VAR_0);
  }else{
    int VAR_7;
    VAR_4->iSize = VAR_5;
    VAR_4->cb = VAR_3[0];
    VAR_4->apSqlParam = (sqlite3_value**)&VAR_4->aParam[VAR_1];
    VAR_4->nParam = VAR_1;
    for(VAR_7=0; VAR_7<VAR_1; VAR_7++){
      VAR_4->apSqlParam[VAR_7] = FUNC_6(VAR_2[VAR_7]);
      if( VAR_4->apSqlParam[VAR_7]==0 ) VAR_6 = 1;



      VAR_4->aParam[VAR_7] = FUNC_5(VAR_2[VAR_7]);

    }
    if( VAR_6 ){
      FUNC_2(VAR_0);
      FUNC_0(VAR_4);
    }else{
      FUNC_3(VAR_0, VAR_4, "RtreeMatchArg", FUNC_0);
    }
  }
}
