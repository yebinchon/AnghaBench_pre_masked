
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lsm_env ;
struct TYPE_3__ {int nSize; scalar_t__ iLastPg; scalar_t__ iFirst; scalar_t__ iRoot; } ;
typedef TYPE_1__ Segment ;
typedef scalar_t__ LsmPgno ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,char*) ;
 char* FUNC_2 (int *,char*,...) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static char *FUNC_4(lsm_env *VAR_0, Segment *VAR_1, int VAR_2){
  int VAR_3 = VAR_1->nSize;
  LsmPgno VAR_4 = VAR_1->iRoot;
  LsmPgno VAR_5 = VAR_1->iFirst;
  LsmPgno VAR_6 = VAR_1->iLastPg;
  char *VAR_7;

  char *VAR_8;
  char *VAR_9;
  int VAR_10;

  VAR_8 = FUNC_2(VAR_0, "%d.%d", VAR_5, VAR_6);
  if( VAR_4 ){
    VAR_9 = FUNC_2(VAR_0, "root=%d", VAR_4);
  }else{
    VAR_9 = FUNC_2(VAR_0, "size=%d", VAR_3);
  }

  VAR_10 = VAR_2 - 2 - FUNC_3(VAR_8) - 1 - FUNC_3(VAR_9);
  VAR_10 = FUNC_0(0, VAR_10);

  if( VAR_4 ){
    VAR_7 = FUNC_2(VAR_0, "/%s %*s%s\\", VAR_8, VAR_10, "", VAR_9);
  }else{
    VAR_7 = FUNC_2(VAR_0, "|%s %*s%s|", VAR_8, VAR_10, "", VAR_9);
  }
  FUNC_1(VAR_0, VAR_8);
  FUNC_1(VAR_0, VAR_9);

  return VAR_7;
}
