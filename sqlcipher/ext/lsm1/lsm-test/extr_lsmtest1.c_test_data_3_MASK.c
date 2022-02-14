
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; } ;
typedef TYPE_1__ Datatest3 ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (char const*,TYPE_1__*,int*) ;
 char* FUNC_2 (char const*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int*,char const*,char*,char*) ;
 int FUNC_4 (char*) ;

void FUNC_5(
  const char *VAR_1,
  const char *VAR_2,
  int *VAR_3
){
  Datatest3 VAR_4[] = {

    { 100, 1000, 5, 5, 50, 100 },
    { 100, 1000, 2, 2, 5, 10 },
  };

  int VAR_5;

  for(VAR_5=0; *VAR_3==VAR_0 && VAR_5<FUNC_0(VAR_4); VAR_5++){
    char *VAR_6 = FUNC_2(VAR_1, &VAR_4[VAR_5]);
    if( FUNC_3(VAR_3, VAR_2, "%s", VAR_6) ){
      FUNC_1(VAR_1, &VAR_4[VAR_5], VAR_3);
    }
    FUNC_4(VAR_6);
  }
}
