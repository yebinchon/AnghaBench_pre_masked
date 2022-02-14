
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int lsm_file ;
struct TYPE_7__ {int (* xOpen ) (TYPE_1__*,char const*,int,int *) ;scalar_t__ pVfsCtx; } ;
typedef TYPE_1__ lsm_env ;
struct TYPE_8__ {int bLog; int pReal; int * pDb; } ;
typedef TYPE_2__ LsmFile ;
typedef int LsmDb ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_1__*,char const*,int,int *) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(
  lsm_env *VAR_1,
  const char *VAR_2,
  int VAR_3,
  lsm_file **VAR_4
){
  lsm_env *VAR_5 = FUNC_3();
  LsmDb *VAR_6 = (LsmDb *)VAR_1->pVfsCtx;
  int VAR_7;
  LsmFile *VAR_8;
  int VAR_9;

  VAR_9 = FUNC_1(VAR_2);
  VAR_8 = (LsmFile *)FUNC_5(sizeof(LsmFile));
  VAR_8->pDb = VAR_6;
  VAR_8->bLog = (VAR_9 > 4 && 0==FUNC_0("-log", &VAR_2[VAR_9-4], 4));

  VAR_7 = VAR_5->xOpen(VAR_5, VAR_2, VAR_3, &VAR_8->pReal);
  if( VAR_7!=VAR_0 ){
    FUNC_4(VAR_8);
    VAR_8 = 0;
  }

  *VAR_4 = (lsm_file *)VAR_8;
  return VAR_7;
}
