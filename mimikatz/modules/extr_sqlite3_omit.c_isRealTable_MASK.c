
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zName; scalar_t__ pSelect; } ;
typedef TYPE_1__ Table ;
typedef int Parse ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,char*,char const*,int ) ;

__attribute__((used)) static int FUNC_2(Parse *VAR_0, Table *VAR_1){
  const char *VAR_2 = 0;

  if( VAR_1->pSelect ){
    VAR_2 = "view";
  }


  if( FUNC_0(VAR_1) ){
    VAR_2 = "virtual table";
  }

  if( VAR_2 ){
    FUNC_1(
        VAR_0, "cannot rename columns of %s \"%s\"", VAR_2, VAR_1->zName
    );
    return 1;
  }
  return 0;
}
