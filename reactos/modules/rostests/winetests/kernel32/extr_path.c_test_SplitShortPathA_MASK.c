
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char CHAR ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char*,...) ;

__attribute__((used)) static void FUNC_4(CHAR *VAR_2,CHAR *VAR_3,CHAR *VAR_4,CHAR *VAR_5) {
  BOOL VAR_6 = VAR_0, VAR_7 = VAR_0;
  int VAR_8,VAR_9;
  int VAR_10,VAR_11;
  VAR_10=FUNC_2(VAR_2);
  VAR_8=VAR_10;
  VAR_9=VAR_10;

  for(VAR_11=VAR_10-1;(VAR_11>=0) && (!VAR_6);VAR_11--) {
    if(VAR_2[VAR_11]=='.')
      if(VAR_8!=VAR_10) VAR_7=VAR_1; else VAR_8=VAR_11;
    else if(VAR_2[VAR_11]=='\\') {
      if(VAR_11==VAR_10-1) {
        VAR_7=VAR_1;
      } else {
        VAR_9=VAR_11;
        VAR_6=VAR_1;
      }
    }
  }

  FUNC_3(!VAR_7,"Illegal file found in 8.3 path '%s'\n",VAR_2);

  if(VAR_8!=VAR_10) FUNC_0(VAR_5,VAR_2+VAR_8+1); else FUNC_0(VAR_5,"");
  if(VAR_9!=VAR_10) {
    FUNC_1(VAR_4,VAR_2+VAR_9+1,VAR_8-VAR_9);
    FUNC_1(VAR_3,VAR_2,VAR_9+1);
  } else {
    FUNC_1(VAR_4,VAR_2,VAR_8+1);
    FUNC_0(VAR_3,"");
  }

  FUNC_3(FUNC_2(VAR_4)<=8 && FUNC_2(VAR_5)<=3,
     "GetShortPathNAmeA did not return an 8.3 path\n");
}
