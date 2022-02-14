
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int member_1; int member_2; int member_3; int member_4; int member_0; } ;
struct TYPE_7__ {int member_1; int member_2; int member_3; int member_4; TYPE_1__ member_0; } ;
typedef TYPE_2__ Datatest1 ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const*,int,TYPE_2__*,int*) ;
 char* FUNC_2 (char const*,int,TYPE_2__*) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;
 scalar_t__ FUNC_4 (int*,char const*,char*,char*) ;
 int FUNC_5 (char*) ;

void FUNC_6(
  const char *VAR_3,
  const char *VAR_4,
  int *VAR_5
){
  Datatest1 VAR_6[] = {
    { {VAR_0, 500,600, 1000,2000}, 1000, 100, 10, 0},
    { {VAR_0, 20,25, 100,200}, 1000, 250, 1000, 1},
    { {VAR_0, 8,10, 100,200}, 1000, 250, 1000, 1},
    { {VAR_0, 8,10, 10,20}, 1000, 250, 1000, 1},
    { {VAR_0, 8,10, 1000,2000}, 1000, 250, 1000, 1},
    { {VAR_0, 8,100, 10000,20000}, 100, 25, 100, 1},
    { {VAR_0, 80,100, 10,20}, 1000, 250, 1000, 1},
    { {VAR_0, 5000,6000, 10,20}, 100, 25, 100, 1},
    { {VAR_1, 5,10, 10,20}, 1000, 250, 1000, 1},
    { {VAR_1, 5,10, 100,200}, 1000, 250, 1000, 1},
    { {VAR_1, 5,10, 1000,2000}, 1000, 250, 1000, 1},
    { {VAR_1, 5,100, 10000,20000}, 100, 25, 100, 1},
    { {VAR_0, 10,10, 100,100}, 100000, 1000, 100, 0},
    { {VAR_1, 10,10, 100,100}, 100000, 1000, 100, 0},
  };

  int VAR_7;
  int VAR_8;

  for(VAR_8=0; VAR_8<2; VAR_8++){
    if( VAR_8==1 && FUNC_3(VAR_3, "lsm", 3) ) break;
    for(VAR_7=0; *VAR_5==VAR_2 && VAR_7<FUNC_0(VAR_6); VAR_7++){
      char *VAR_9 = FUNC_2(VAR_3, VAR_8, &VAR_6[VAR_7]);
      if( FUNC_4(VAR_5, VAR_4, "%s", VAR_9) ){
        FUNC_1(VAR_3, VAR_8, &VAR_6[VAR_7], VAR_5);
      }
      FUNC_5(VAR_9);
    }
  }
}
