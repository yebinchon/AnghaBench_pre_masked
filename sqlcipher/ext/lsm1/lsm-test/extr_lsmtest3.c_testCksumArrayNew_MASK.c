
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int TestDb ;
struct TYPE_5__ {int nFirst; int nLast; int nStep; char** azCksum; } ;
typedef int Datasource ;
typedef TYPE_1__ CksumDb ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int,int **) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int *,int,int,int*) ;

CksumDb *FUNC_7(
  Datasource *VAR_1,
  int VAR_2,
  int VAR_3,
  int VAR_4
){
  TestDb *VAR_5;
  CksumDb *VAR_6;
  int VAR_7;
  int VAR_8;
  int VAR_9 = 0;

  FUNC_0( VAR_3>=VAR_2 && ((VAR_3-VAR_2)%VAR_4)==0 );

  VAR_6 = FUNC_1(sizeof(CksumDb));
  FUNC_2(VAR_6, 0, sizeof(CksumDb));
  VAR_6->nFirst = VAR_2;
  VAR_6->nLast = VAR_3;
  VAR_6->nStep = VAR_4;
  VAR_8 = 1 + ((VAR_3 - VAR_2) / VAR_4);



  VAR_6->azCksum = (char **)FUNC_1(VAR_8 * (sizeof(char *) + VAR_0));
  for(VAR_7=0; VAR_7<VAR_8; VAR_7++){
    char *VAR_10 = (char *)(&VAR_6->azCksum[VAR_8]);
    VAR_6->azCksum[VAR_7] = &VAR_10[VAR_7 * VAR_0];
  }

  FUNC_4("lsm", "tempdb.lsm", 1, &VAR_5);
  FUNC_6(VAR_5, VAR_1, 0, VAR_2, &VAR_9);
  for(VAR_7=0; VAR_7<VAR_8; VAR_7++){
    FUNC_5(VAR_5, VAR_6->azCksum[VAR_7]);
    if( VAR_7==VAR_8 ) break;
    FUNC_6(VAR_5, VAR_1, VAR_2+VAR_7*VAR_4, VAR_4, &VAR_9);
  }

  FUNC_3(VAR_5);

  return VAR_6;
}
