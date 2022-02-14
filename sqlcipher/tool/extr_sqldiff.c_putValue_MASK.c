
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_uint64 ;
typedef int sqlite3_stmt ;
typedef double sqlite3_int64 ;
typedef int FILE ;







 int FUNC_0 (int ,int,size_t,int *) ;
 int FUNC_1 (int*,double*,int) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 double FUNC_5 (int *,int) ;
 double FUNC_6 (int *,int) ;
 double FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;

__attribute__((used)) static void FUNC_10(FILE *VAR_0, sqlite3_stmt *VAR_1, int VAR_2){
  int VAR_3 = FUNC_9(VAR_1, VAR_2);
  sqlite3_int64 VAR_4;
  double VAR_5;
  sqlite3_uint64 VAR_6;
  int VAR_7;

  FUNC_2(VAR_3, VAR_0);
  switch( VAR_3 ){
    case 130:
      VAR_4 = FUNC_7(VAR_1, VAR_2);
      FUNC_1(&VAR_6, &VAR_4, 8);
      for(VAR_7=56; VAR_7>=0; VAR_7-=8) FUNC_2((VAR_6>>VAR_7)&0xff, VAR_0);
      break;
    case 131:
      VAR_5 = FUNC_6(VAR_1, VAR_2);
      FUNC_1(&VAR_6, &VAR_5, 8);
      for(VAR_7=56; VAR_7>=0; VAR_7-=8) FUNC_2((VAR_6>>VAR_7)&0xff, VAR_0);
      break;
    case 128:
      VAR_4 = FUNC_5(VAR_1, VAR_2);
      FUNC_3(VAR_0, (sqlite3_uint64)VAR_4);
      FUNC_0(FUNC_8(VAR_1, VAR_2),1,(size_t)VAR_4,VAR_0);
      break;
    case 132:
      VAR_4 = FUNC_5(VAR_1, VAR_2);
      FUNC_3(VAR_0, (sqlite3_uint64)VAR_4);
      FUNC_0(FUNC_4(VAR_1, VAR_2),1,(size_t)VAR_4,VAR_0);
      break;
    case 129:
      break;
  }
}
