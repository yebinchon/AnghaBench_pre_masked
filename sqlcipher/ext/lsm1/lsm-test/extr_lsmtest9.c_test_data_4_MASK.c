
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int member_1; int member_2; int member_3; int member_4; int member_0; } ;
struct TYPE_7__ {int member_1; int member_2; int member_3; TYPE_1__ member_0; } ;
typedef TYPE_2__ Datatest4 ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*,TYPE_2__*,int*) ;
 char* FUNC_2 (char const*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int*,char const*,char*,char*) ;
 int FUNC_4 (char*) ;

void FUNC_5(
  const char *VAR_2,
  const char *VAR_3,
  int *VAR_4
){
  Datatest4 VAR_5[] = {

    { {VAR_0, 20,25, 500,600}, 10000, 10, 0 },
    { {VAR_0, 20,25, 500,600}, 10000, 10, 1 },
  };

  int VAR_6;

  for(VAR_6=0; *VAR_4==VAR_1 && VAR_6<FUNC_0(VAR_5); VAR_6++){
    char *VAR_7 = FUNC_2(VAR_2, &VAR_5[VAR_6]);
    if( FUNC_3(VAR_4, VAR_3, "%s", VAR_7) ){
      FUNC_1(VAR_2, &VAR_5[VAR_6], VAR_4);
    }
    FUNC_4(VAR_7);
  }
}
