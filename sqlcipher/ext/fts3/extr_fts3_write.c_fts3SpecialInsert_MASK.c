
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int sqlite3_value ;
struct TYPE_8__ {void* bNoIncrDoclist; void* nMaxPendingData; void* nNodeSize; } ;
typedef TYPE_1__ Fts3Table ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (TYPE_1__*,char const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (char const*,char*,int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(Fts3Table *VAR_3, sqlite3_value *VAR_4){
  int VAR_5;
  const char *VAR_6 = (const char *)FUNC_8(VAR_4);
  int VAR_7 = FUNC_7(VAR_4);

  if( !VAR_6 ){
    return VAR_1;
  }else if( VAR_7==8 && 0==FUNC_6(VAR_6, "optimize", 8) ){
    VAR_5 = FUNC_4(VAR_3, 0);
  }else if( VAR_7==7 && 0==FUNC_6(VAR_6, "rebuild", 7) ){
    VAR_5 = FUNC_5(VAR_3);
  }else if( VAR_7==15 && 0==FUNC_6(VAR_6, "integrity-check", 15) ){
    VAR_5 = FUNC_3(VAR_3);
  }else if( VAR_7>6 && 0==FUNC_6(VAR_6, "merge=", 6) ){
    VAR_5 = FUNC_2(VAR_3, &VAR_6[6]);
  }else if( VAR_7>10 && 0==FUNC_6(VAR_6, "automerge=", 10) ){
    VAR_5 = FUNC_1(VAR_3, &VAR_6[10]);
  }else{
    VAR_5 = VAR_0;
  }

  return VAR_5;
}
