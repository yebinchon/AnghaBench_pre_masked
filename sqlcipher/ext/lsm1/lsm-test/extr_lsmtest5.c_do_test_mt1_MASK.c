
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ThreadSet ;
typedef int TestDb ;
struct TYPE_6__ {int nKey; int nFanout; } ;
struct TYPE_5__ {int member_0; int member_1; } ;
struct TYPE_7__ {int member_1; int member_2; int member_3; int member_4; int nReadwrite; int nFastReader; int nSlowReader; char const* zSystem; int nMs; TYPE_2__ param; int member_5; TYPE_1__ member_0; } ;
typedef TYPE_3__ Mt1Test ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,int,char const*) ;
 int FUNC_2 (int*,char const*,char*,char const*,int ,int ,int ,int,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int **) ;
 int * FUNC_5 (char const*,int,int*) ;
 int FUNC_6 (int *,int,char const**) ;
 int * FUNC_7 (int) ;
 int FUNC_8 (int *,int,int ,void*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static void FUNC_11(
  const char *VAR_1,
  const char *VAR_2,
  int *VAR_3
){
  Mt1Test VAR_4[] = {

    { {10, 1000}, 4, 0, 0, 10000, 0 },
    { {10, 1000}, 4, 4, 2, 100000, 0 },
    { {10, 100000}, 4, 0, 0, 10000, 0 },
    { {10, 100000}, 4, 4, 2, 100000, 0 },
  };
  int VAR_5;

  for(VAR_5=0; *VAR_3==0 && VAR_5<FUNC_0(VAR_4); VAR_5++){
    Mt1Test *VAR_6 = &VAR_4[VAR_5];
    int VAR_7 = FUNC_2(VAR_3, VAR_2,
        "mt1.%s.db=%d,%d.ms=%d.rdwr=%d.fast=%d.slow=%d",
        VAR_1, VAR_6->param.nFanout, VAR_6->param.nKey,
        VAR_6->nMs, VAR_6->nReadwrite, VAR_6->nFastReader, VAR_6->nSlowReader
    );
    if( VAR_7 ){
      TestDb *VAR_8;
      ThreadSet *VAR_9;
      int VAR_10;
      int VAR_11;

      VAR_6->zSystem = VAR_1;
      VAR_8 = FUNC_5(VAR_1, 1, VAR_3);

      VAR_11 = VAR_6->nReadwrite + VAR_6->nFastReader + VAR_6->nSlowReader;
      VAR_9 = FUNC_7(VAR_11);
      for(VAR_10=0; *VAR_3==0 && VAR_10<VAR_11; VAR_10++){
        FUNC_8(VAR_9, VAR_10, VAR_0, (void *)VAR_6);
      }

      FUNC_10(VAR_9, VAR_6->nMs);
      for(VAR_10=0; *VAR_3==0 && VAR_10<VAR_11; VAR_10++){
        *VAR_3 = FUNC_6(VAR_9, VAR_10, 0);
      }
      FUNC_3(*VAR_3);

      for(VAR_10=0; *VAR_3==0 && VAR_10<VAR_11; VAR_10++){
        const char *VAR_12 = 0;
        *VAR_3 = FUNC_6(VAR_9, VAR_10, &VAR_12);
        FUNC_1("  Info: thread %d (%d): %s\n", VAR_10, *VAR_3, VAR_12);
      }

      FUNC_9(VAR_9);
      FUNC_4(&VAR_8);
    }
  }
}
