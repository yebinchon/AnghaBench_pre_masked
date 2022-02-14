
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ i64 ;
typedef int Fts5Buffer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int*,int*,int*,int*) ;
 int FUNC_1 (int*,int *,char*,...) ;

__attribute__((used)) static void FUNC_2(int *VAR_1, Fts5Buffer *VAR_2, i64 VAR_3){
  int VAR_4, VAR_5, VAR_6, VAR_7;
  FUNC_0(VAR_3, &VAR_4, &VAR_7, &VAR_5, &VAR_6);

  if( VAR_4==0 ){
    if( VAR_3==VAR_0 ){
      FUNC_1(VAR_1, VAR_2, "{averages} ");
    }else{
      FUNC_1(VAR_1, VAR_2, "{structure}");
    }
  }
  else{
    FUNC_1(VAR_1, VAR_2, "{%ssegid=%d h=%d pgno=%d}",
        VAR_7 ? "dlidx " : "", VAR_4, VAR_5, VAR_6
    );
  }
}
