
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int y ;
typedef int x ;
struct rlimit {scalar_t__ rlim_cur; scalar_t__ rlim_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int,struct rlimit*) ;
 int FUNC_4 (struct rlimit*,int ,int) ;
 void* VAR_5 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int,int) ;
 int FUNC_7 (int,struct rlimit*) ;
 int FUNC_8 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (char*,char*) ;
 void* FUNC_10 (char*,int ,int ) ;
 void* VAR_8 ;

int FUNC_11(int *VAR_9, char ***VAR_10){
  int VAR_11, VAR_12, VAR_13;
  int VAR_14 = *VAR_9;
  char **VAR_15 = *VAR_10;
  for(VAR_11=VAR_12=1; VAR_11<VAR_14; VAR_11++){
    char *VAR_16 = VAR_15[VAR_11];
    if( VAR_16[0]=='-' ){
      VAR_16++;
      if( VAR_16[0]=='-' ) VAR_16++;
      if( VAR_16[0]=='v' && (VAR_13 = FUNC_5(VAR_16))>0 ){
        VAR_4 += VAR_13;
        continue;
      }
      if( FUNC_9(VAR_16,"vdbe-debug")==0 ){
        VAR_3 = 1;
        continue;
      }
      if( FUNC_9(VAR_16,"limit")==0 ){
        if( VAR_11+1==VAR_14 ){
          FUNC_2(VAR_6, "missing argument to %s\n", VAR_15[VAR_11]);
          FUNC_1(1);
        }
        VAR_5 = FUNC_10(VAR_15[++VAR_11], 0, 0);
        continue;
      }
      if( FUNC_9(VAR_16,"memtrace")==0 ){
        FUNC_8(VAR_7);
        continue;
      }
      if( FUNC_9(VAR_16,"mem")==0 ){
        VAR_3 = 1;
        continue;
      }
      if( FUNC_9(VAR_16,"max-db-size")==0 ){
        if( VAR_11+1==VAR_14 ){
          FUNC_2(VAR_6, "missing argument to %s\n", VAR_15[VAR_11]);
          FUNC_1(1);
        }
        VAR_8 = FUNC_10(VAR_15[++VAR_11], 0, 0);
        continue;
      }

      if( FUNC_9(VAR_16,"max-stack")==0
       || FUNC_9(VAR_16,"max-data")==0
       || FUNC_9(VAR_16,"max-as")==0
      ){
        struct rlimit VAR_17,VAR_18;
        int VAR_19 = VAR_2;
        char *VAR_20 = "RLIMIT_STACK";
        if( VAR_11+1==VAR_14 ){
          FUNC_2(VAR_6, "missing argument to %s\n", VAR_15[VAR_11]);
          FUNC_1(1);
        }
        if( VAR_16[4]=='d' ){
          VAR_19 = VAR_1;
          VAR_20 = "RLIMIT_DATA";
        }
        if( VAR_16[4]=='a' ){
          VAR_19 = VAR_0;
          VAR_20 = "RLIMIT_AS";
        }
        FUNC_4(&VAR_17,0,sizeof(VAR_17));
        FUNC_3(VAR_19, &VAR_17);
        VAR_18.rlim_cur = FUNC_0(VAR_15[++VAR_11]);
        VAR_18.rlim_max = VAR_17.rlim_cur;
        FUNC_7(VAR_19, &VAR_18);
        FUNC_4(&VAR_18,0,sizeof(VAR_18));
        FUNC_3(VAR_19, &VAR_18);
        FUNC_6("%s changed from %d to %d\n",
               VAR_20, (int)VAR_17.rlim_cur, (int)VAR_18.rlim_cur);
        continue;
      }

    }
    VAR_15[VAR_12++] = VAR_15[VAR_11];
  }
  VAR_15[VAR_12] = 0;
  *VAR_9 = VAR_12;
  return 0;
}
