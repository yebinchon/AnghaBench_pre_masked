
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int zRight ;
typedef int zLevel ;
typedef int zLeft ;
struct TYPE_10__ {int pEnv; scalar_t__ xLog; } ;
typedef TYPE_1__ lsm_db ;
typedef int aRight ;
struct TYPE_11__ {int nRight; int * aRhs; int lhs; struct TYPE_11__* pNext; scalar_t__ flags; scalar_t__ iAge; } ;
typedef int Snapshot ;
typedef int Segment ;
typedef TYPE_2__ Level ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char*,int,int,int *) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int * FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char**) ;
 int FUNC_6 (TYPE_1__*,int ,char*,...) ;
 int FUNC_7 (int **,int **,int) ;
 int FUNC_8 (char*,int,char*,int,int,int) ;
 int FUNC_9 (TYPE_1__*,int *,int) ;

void FUNC_10(
  lsm_db *VAR_1,
  Snapshot *VAR_2,
  int VAR_3,
  int VAR_4,
  const char *VAR_5
){
  Snapshot *VAR_6 = VAR_2;
  Level *VAR_7;
  char *VAR_8 = 0;

  FUNC_0( VAR_2 );
  VAR_7 = FUNC_2(VAR_6);
  if( VAR_1->xLog && VAR_7 ){
    static int VAR_9 = 0;
    Level *VAR_10;
    int VAR_11 = 0;

    VAR_9++;
    FUNC_6(VAR_1, VAR_0, "Database structure %d (%s)", VAR_9, VAR_5);





    for(VAR_10=VAR_7; VAR_10; VAR_10=VAR_10->pNext){
      char VAR_12[1024];
      char VAR_13[1024];
      int VAR_14 = 0;

      Segment *VAR_15[24];
      Segment *VAR_16[24];

      int VAR_17 = 0;
      int VAR_18 = 0;

      Segment *VAR_19 = &VAR_10->lhs;
      VAR_15[VAR_17++] = VAR_19;

      for(VAR_14=0; VAR_14<VAR_10->nRight; VAR_14++){
        VAR_16[VAR_18++] = &VAR_10->aRhs[VAR_14];
      }
      for(VAR_14=0; VAR_14<VAR_17 || VAR_14<VAR_18; VAR_14++){
        int VAR_20 = 0;
        char VAR_21[32];
        VAR_12[0] = '\0';
        VAR_13[0] = '\0';

        if( VAR_14<VAR_17 ){
          FUNC_1(VAR_1, VAR_12, sizeof(VAR_12), 24, VAR_15[VAR_14]);
        }
        if( VAR_14<VAR_18 ){
          FUNC_1(VAR_1, VAR_13, sizeof(VAR_13), 24, VAR_16[VAR_14]);
        }

        if( VAR_14==0 ){
          FUNC_8(VAR_21, sizeof(VAR_21), "L%d: (age=%d) (flags=%.4x)",
              VAR_11, (int)VAR_10->iAge, (int)VAR_10->flags
          );
        }else{
          VAR_21[0] = '\0';
        }

        if( VAR_18==0 ){
          VAR_20 = 10;
        }

        FUNC_6(VAR_1, VAR_0, "% 25s % *s% -35s %s",
            VAR_21, VAR_20, "", VAR_12, VAR_13
        );
      }

      VAR_11++;
    }

    if( VAR_3 ){
      for(VAR_10=VAR_7; VAR_10; VAR_10=VAR_10->pNext){
        int VAR_22;
        FUNC_9(VAR_1, &VAR_10->lhs, VAR_4);
        for(VAR_22=0; VAR_22<VAR_10->nRight; VAR_22++){
          FUNC_9(VAR_1, &VAR_10->aRhs[VAR_22], VAR_4);
        }
      }
    }
  }

  FUNC_5(VAR_1, &VAR_8);
  FUNC_6(VAR_1, VAR_0, "Freelist: %s", VAR_8);
  FUNC_3(VAR_1->pEnv, VAR_8);

  FUNC_0( FUNC_4(VAR_1) );
}
