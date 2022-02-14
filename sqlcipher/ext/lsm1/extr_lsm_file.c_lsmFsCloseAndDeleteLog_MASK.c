
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pEnv; int zDb; scalar_t__ fdLog; } ;
typedef TYPE_1__ FileSystem ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 char* FUNC_3 (int ,char*,int ) ;

int FUNC_4(FileSystem *VAR_1){
  char *VAR_2;

  if( VAR_1->fdLog ){
    FUNC_0(VAR_1->pEnv, VAR_1->fdLog );
    VAR_1->fdLog = 0;
  }

  VAR_2 = FUNC_3(VAR_1->pEnv, "%s-log", VAR_1->zDb);
  if( VAR_2 ){
    FUNC_1(VAR_1->pEnv, VAR_2);
    FUNC_2(VAR_1->pEnv, VAR_2);
  }
  return VAR_0;
}
