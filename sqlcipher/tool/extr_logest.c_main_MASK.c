
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_uint64 ;
typedef int LogEst ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,int,int,...) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char const*,char*) ;

int FUNC_12(int VAR_0, char **VAR_1){
  int VAR_2;
  int VAR_3 = 0;
  LogEst VAR_4[100];
  for(VAR_2=1; VAR_2<VAR_0; VAR_2++){
    const char *VAR_5 = VAR_1[VAR_2];
    if( FUNC_11(VAR_5,"+")==0 ){
      if( VAR_3>=2 ){
        VAR_4[VAR_3-2] = FUNC_4(VAR_4[VAR_3-2],VAR_4[VAR_3-1]);
        VAR_3--;
      }
    }else if( FUNC_11(VAR_5,"x")==0 ){
      if( VAR_3>=2 ){
        VAR_4[VAR_3-2] = FUNC_7(VAR_4[VAR_3-2],VAR_4[VAR_3-1]);
        VAR_3--;
      }
    }else if( FUNC_11(VAR_5,"dup")==0 ){
      if( VAR_3>0 ){
        VAR_4[VAR_3] = VAR_4[VAR_3-1];
        VAR_3++;
      }
    }else if( FUNC_11(VAR_5,"log")==0 ){
      if( VAR_3>0 ) VAR_4[VAR_3-1] = FUNC_6(VAR_4[VAR_3-1]) - 33;
    }else if( FUNC_11(VAR_5,"nlogn")==0 ){
      if( VAR_3>0 ) VAR_4[VAR_3-1] += FUNC_6(VAR_4[VAR_3-1]) - 33;
    }else if( FUNC_11(VAR_5,"inv")==0 ){
      if( VAR_3>0 ) VAR_4[VAR_3-1] = -VAR_4[VAR_3-1];
    }else if( VAR_5[0]=='^' ){
      VAR_4[VAR_3++] = (LogEst)FUNC_1(VAR_5+1);
    }else if( FUNC_3(VAR_5) ){
      VAR_4[VAR_3++] = FUNC_6(FUNC_1(VAR_5));
    }else if( FUNC_2(VAR_5) && VAR_5[0]!='-' ){
      VAR_4[VAR_3++] = FUNC_5(FUNC_0(VAR_5));
    }else{
      FUNC_10(VAR_1[0]);
    }
  }
  for(VAR_2=VAR_3-1; VAR_2>=0; VAR_2--){
    if( VAR_4[VAR_2]<-40 ){
      FUNC_9("%5d (%f)\n", VAR_4[VAR_2], 1.0/(double)FUNC_8(-VAR_4[VAR_2]));
    }else if( VAR_4[VAR_2]<10 ){
      FUNC_9("%5d (%f)\n", VAR_4[VAR_2], FUNC_8(VAR_4[VAR_2]+100)/1024.0);
    }else{
      sqlite3_uint64 VAR_6 = FUNC_8(VAR_4[VAR_2]+100)*100/1024;
      FUNC_9("%5d (%lld.%02lld)\n", VAR_4[VAR_2], VAR_6/100, VAR_6%100);
    }
  }
  return 0;
}
