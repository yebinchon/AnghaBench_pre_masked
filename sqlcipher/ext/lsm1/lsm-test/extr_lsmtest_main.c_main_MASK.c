
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TestFunc TYPE_1__ ;


struct TestFunc {char const* zName; int bRusageReport; int (* xFunc ) (int,char**) ;} ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 () ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int,char**) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,char*,char*,int*) ;
 int FUNC_6 (int,char**) ;
 int FUNC_7 (int ,int*,int*,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 () ;

int FUNC_12(int VAR_10, char **VAR_11){
  struct TestFunc {
    const char *zName;
    int bRusageReport;
    int (*xFunc)(int, char **);
  } VAR_12[] = {
    {"random", 1, VAR_1},
    {"writespeed", 1, VAR_6},
    {"io", 1, VAR_7},

    {"insert", 1, VAR_0},
    {"replay", 1, VAR_2},

    {"speed", 1, VAR_4},
    {"speed2", 1, VAR_3},
    {"show", 0, VAR_8},
    {"work", 1, VAR_9},
    {"test", 1, VAR_5},

    {0, 0}
  };
  int VAR_13;
  int VAR_14;

  int VAR_15 = 0;
  int VAR_16 = 0;





  const char *VAR_17 = "malloc.txt NOT generated";


  FUNC_8(FUNC_4());

  if( VAR_10<2 ){
    FUNC_10("Usage: %s sub-command ?args...?\n", VAR_11[0]);
    return -1;
  }


  FUNC_6(VAR_10, VAR_11);


  FUNC_11();

  VAR_13 = FUNC_5(VAR_12, "sub-command", VAR_11[1], &VAR_14);
  if( VAR_13==0 ){
    VAR_13 = VAR_12[VAR_14].xFunc(VAR_10-2, &VAR_11[2]);
  }






  FUNC_7(FUNC_4(), &VAR_15, &VAR_16, 0);


  if( VAR_15 ){
    FUNC_10("Leaked %d bytes in %d allocations (%s)\n",
        VAR_16, VAR_15, VAR_17
    );
    if( VAR_13==0 ) VAR_13 = -1;
  }
  FUNC_9(FUNC_4());

  if( VAR_12[VAR_14].bRusageReport ){
    FUNC_2();
  }
  return VAR_13;
}
