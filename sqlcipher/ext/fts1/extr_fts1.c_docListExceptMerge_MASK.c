
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sqlite_int64 ;
typedef int DocListReader ;
typedef int DocList ;


 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(
  DocList *VAR_0,
  DocList *VAR_1,
  DocList *VAR_2
){
  DocListReader VAR_3, VAR_4;
  sqlite_int64 VAR_5, VAR_6, VAR_7;

  FUNC_2(&VAR_3, VAR_0);
  FUNC_2(&VAR_4, VAR_1);
  VAR_5 = FUNC_1(&VAR_3);
  VAR_6 = FUNC_1(&VAR_4);

  while( VAR_5>0 && VAR_6>0 ){
    VAR_7 = VAR_5;
    if( VAR_5<VAR_6 ){
      FUNC_0(VAR_2, VAR_5);
    }
    if( VAR_5<=VAR_6 ){
      VAR_5 = FUNC_1(&VAR_3);
    }
    if( VAR_6>0 && VAR_6<=VAR_7 ){
      VAR_6 = FUNC_1(&VAR_4);
    }
  }
  while( VAR_5>0 ){
    FUNC_0(VAR_2, VAR_5);
    VAR_5 = FUNC_1(&VAR_3);
  }
}
