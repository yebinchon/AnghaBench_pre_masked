
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_int64 ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char**,char**) ;
 int FUNC_1 (char**,int*) ;
 int FUNC_2 (char*,int*) ;
 int FUNC_3 (char**,int) ;
 int FUNC_4 (char**,int*,int) ;
 int FUNC_5 (char**,int*) ;

__attribute__((used)) static int FUNC_6(
  char **VAR_5,
  char **VAR_6,
  char **VAR_7
){
  char *VAR_8 = *VAR_5;
  char *VAR_9 = *VAR_6;
  char *VAR_10 = *VAR_7;

  while( *VAR_9 || *VAR_10 ){
    int VAR_11;
    int VAR_12;

    if( *VAR_9==VAR_2 ){
      FUNC_2(&VAR_9[1], &VAR_11);
      if( VAR_11==0 ) return VAR_0;
    }
    else if( *VAR_9==VAR_3 ) VAR_11 = VAR_1;
    else VAR_11 = 0;

    if( *VAR_10==VAR_2 ){
      FUNC_2(&VAR_10[1], &VAR_12);
      if( VAR_12==0 ) return VAR_0;
    }
    else if( *VAR_10==VAR_3 ) VAR_12 = VAR_1;
    else VAR_12 = 0;

    if( VAR_11==VAR_12 ){
      sqlite3_int64 VAR_13 = 0;
      sqlite3_int64 VAR_14 = 0;
      sqlite3_int64 VAR_15 = 0;
      int VAR_16 = FUNC_3(&VAR_8, VAR_11);
      VAR_9 += VAR_16;
      VAR_10 += VAR_16;
      FUNC_1(&VAR_9, &VAR_13);
      FUNC_1(&VAR_10, &VAR_14);
      do {
        FUNC_4(&VAR_8, &VAR_15, (VAR_13<VAR_14) ? VAR_13 : VAR_14);
        VAR_15 -= 2;
        if( VAR_13==VAR_14 ){
          FUNC_5(&VAR_9, &VAR_13);
          FUNC_5(&VAR_10, &VAR_14);
        }else if( VAR_13<VAR_14 ){
          FUNC_5(&VAR_9, &VAR_13);
        }else{
          FUNC_5(&VAR_10, &VAR_14);
        }
      }while( VAR_13!=VAR_1 || VAR_14!=VAR_1 );
    }else if( VAR_11<VAR_12 ){
      VAR_9 += FUNC_3(&VAR_8, VAR_11);
      FUNC_0(&VAR_8, &VAR_9);
    }else{
      VAR_10 += FUNC_3(&VAR_8, VAR_12);
      FUNC_0(&VAR_8, &VAR_10);
    }
  }

  *VAR_8++ = VAR_3;
  *VAR_5 = VAR_8;
  *VAR_6 = VAR_9 + 1;
  *VAR_7 = VAR_10 + 1;
  return VAR_4;
}
