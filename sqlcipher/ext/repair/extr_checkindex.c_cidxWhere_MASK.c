
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zExpr; scalar_t__ bDesc; } ;
typedef TYPE_1__ CidxColumn ;


 char* FUNC_0 (int*,char*,char*,char const*,int ,...) ;

__attribute__((used)) static char *FUNC_1(
  int *VAR_0, CidxColumn *VAR_1, char **VAR_2, int VAR_3, int VAR_4
){
  char *VAR_5 = 0;
  const char *VAR_6 = "";
  int VAR_7;

  for(VAR_7=0; VAR_7<VAR_3; VAR_7++){
    VAR_5 = FUNC_0(VAR_0, "%z%s(%s) IS %s", VAR_5,
        VAR_6, VAR_1[VAR_7].zExpr, (VAR_2[VAR_7] ? VAR_2[VAR_7] : "NULL")
    );
    VAR_6 = " AND ";
  }

  if( VAR_4 ){
    VAR_5 = FUNC_0(VAR_0, "%z%s(%s) IS NULL", VAR_5, VAR_6, VAR_1[VAR_3].zExpr);
  }
  else if( VAR_2[VAR_3] ){
    VAR_5 = FUNC_0(VAR_0, "%z%s(%s) %s %s", VAR_5,
        VAR_6, VAR_1[VAR_3].zExpr, (VAR_1[VAR_3].bDesc ? "<" : ">"),
        VAR_2[VAR_3]
    );
  }else{
    VAR_5 = FUNC_0(VAR_0, "%z%s(%s) IS NOT NULL", VAR_5, VAR_6,VAR_1[VAR_3].zExpr);
  }

  return VAR_5;
}
