
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int lsm_i64 ;
typedef int lsm_file ;
struct TYPE_10__ {int (* xClose ) (int *) ;int (* xWrite ) (int *,int,int *,int) ;int (* xOpen ) (TYPE_3__*,char*,int ,int **) ;} ;
typedef TYPE_3__ lsm_env ;
struct TYPE_11__ {char* zName; int szSector; TYPE_2__* aFile; } ;
struct TYPE_9__ {int nSector; TYPE_1__* aSector; } ;
struct TYPE_8__ {int * aOld; } ;
typedef TYPE_4__ LsmDb ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char*) ;
 int FUNC_2 (TYPE_3__*,char*,int ,int **) ;
 int FUNC_3 (int *,int,int *,int) ;
 int FUNC_4 (int *) ;
 TYPE_3__* FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(LsmDb *VAR_0){
  lsm_env *VAR_1 = FUNC_5();
  int VAR_2;
  int VAR_3 = VAR_0->aFile[0].nSector + VAR_0->aFile[1].nSector;

  char *VAR_4 = VAR_0->zName;
  char *VAR_5 = 0;

  for(VAR_2=0; VAR_2<2; VAR_2++){
    lsm_file *VAR_6 = 0;
    int VAR_7;

    VAR_1->xOpen(VAR_1, VAR_4, 0, &VAR_6);
    for(VAR_7=0; VAR_7<VAR_0->aFile[VAR_2].nSector; VAR_7++){
      u8 *VAR_8 = VAR_0->aFile[VAR_2].aSector[VAR_7].aOld;
      if( VAR_8 ){
        int VAR_9 = FUNC_8(VAR_3++) % 3;
        switch( VAR_9 ){
          case 0:
            break;

          case 1:
            FUNC_7(VAR_3++, (u32 *)VAR_8, VAR_0->szSector/4);


          case 2:
            VAR_1->xWrite(
                VAR_6, (lsm_i64)VAR_7 * VAR_0->szSector, VAR_8, VAR_0->szSector
            );
            break;
        }
        FUNC_6(VAR_8);
        VAR_0->aFile[VAR_2].aSector[VAR_7].aOld = 0;
      }
    }
    VAR_1->xClose(VAR_6);
    VAR_5 = VAR_4 = FUNC_1("%s-log", VAR_0->zName);
  }

  FUNC_0(VAR_5);
}
