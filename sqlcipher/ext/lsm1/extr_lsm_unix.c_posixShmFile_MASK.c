
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* zName; int pEnv; } ;
typedef TYPE_1__ PosixFile ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static char *FUNC_3(PosixFile *VAR_0){
  char *VAR_1;
  int VAR_2 = FUNC_2(VAR_0->zName);
  VAR_1 = (char *)FUNC_0(VAR_0->pEnv, VAR_2+4+1);
  if( VAR_1 ){
    FUNC_1(VAR_1, VAR_0->zName, VAR_2);
    FUNC_1(&VAR_1[VAR_2], "-shm", 5);
  }
  return VAR_1;
}
