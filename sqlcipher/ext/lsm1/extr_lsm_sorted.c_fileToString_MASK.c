
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int pEnv; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_8__ {int iFirst; } ;
typedef TYPE_2__ Segment ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*,int,int ,char**) ;
 char* FUNC_2 (int ,TYPE_2__*,int) ;
 int FUNC_3 (char*,int,char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(
  lsm_db *VAR_0,
  char *VAR_1,
  int VAR_2,
  int VAR_3,
  Segment *VAR_4
){
  int VAR_5 = 0;
  if( VAR_4 ){
    char *VAR_6;

    VAR_6 = FUNC_2(VAR_0->pEnv, VAR_4, VAR_3);
    FUNC_3(&VAR_1[VAR_5], VAR_2-VAR_5, "%s", VAR_6);
    VAR_5 += FUNC_4(&VAR_1[VAR_5]);
    FUNC_0(VAR_0->pEnv, VAR_6);







    VAR_1[VAR_2] = 0;
  }else{
    VAR_1[0] = '\0';
  }

  return VAR_5;
}
