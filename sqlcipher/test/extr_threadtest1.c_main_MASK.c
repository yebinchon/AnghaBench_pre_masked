
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,int ,void*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int FUNC_7 (char*,char*,int) ;
 char* FUNC_8 (char*,...) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_10 (char*) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_11(int VAR_5, char **VAR_6){
  char *VAR_7;
  int VAR_8, VAR_9;
  pthread_t VAR_10;
  if( VAR_5>2 && FUNC_9(VAR_6[1], "-v")==0 ){
    VAR_3 = 1;
    VAR_5--;
    VAR_6++;
  }
  if( VAR_5<2 || (VAR_9=FUNC_0(VAR_6[1]))<1 ) VAR_9 = 10;
  for(VAR_8=0; VAR_8<VAR_9; VAR_8++){
    char VAR_11[200];
    FUNC_7(VAR_11, "testdb-%d", (VAR_8+1)/2);
    FUNC_10(VAR_11);
  }
  for(VAR_8=0; VAR_8<VAR_9; VAR_8++){
    VAR_7 = FUNC_8("%d.testdb-%d", VAR_8%2+1, (VAR_8+2)/2);
    if( (VAR_8%2)==0 ){


      char *VAR_12 = &VAR_7[2];
      char *VAR_13 = FUNC_8("%s-journal", VAR_12);
      FUNC_10(VAR_12);
      FUNC_10(VAR_13);
      FUNC_1(VAR_13);
    }

    FUNC_3(&VAR_10, 0, VAR_4, (void*)VAR_7);
    FUNC_4(VAR_10);
  }
  FUNC_5(&VAR_0);
  while( VAR_2>0 ){
    FUNC_2(&VAR_1, &VAR_0);
  }
  FUNC_6(&VAR_0);
  for(VAR_8=0; VAR_8<VAR_9; VAR_8++){
    char VAR_14[200];
    FUNC_7(VAR_14, "testdb-%d", (VAR_8+1)/2);
    FUNC_10(VAR_14);
  }
  return 0;
}
