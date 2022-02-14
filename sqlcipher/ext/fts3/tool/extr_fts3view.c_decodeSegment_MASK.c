
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zTerm ;
typedef int sqlite3_int64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (unsigned char const*,int*) ;
 int FUNC_3 (char*,unsigned char const*,size_t) ;
 int FUNC_4 (char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(
  const unsigned char *VAR_1,
  int VAR_2
){
  sqlite3_int64 VAR_3 = 0;
  sqlite3_int64 VAR_4;
  sqlite3_int64 VAR_5;
  sqlite3_int64 VAR_6;
  sqlite3_int64 VAR_7;
  int VAR_8;
  sqlite3_int64 VAR_9 = 0;
  int VAR_10 = 0;
  char VAR_11[1000];

  VAR_9 += FUNC_2(VAR_1, &VAR_6);
  VAR_8 = (int)VAR_6;
  FUNC_4("height: %d\n", VAR_8);
  if( VAR_8>0 ){
    VAR_9 += FUNC_2(VAR_1+VAR_9, &VAR_3);
    FUNC_4("left-child: %lld\n", VAR_3);
  }
  while( VAR_9<VAR_2 ){
    if( (VAR_10++)>0 ){
      VAR_9 += FUNC_2(VAR_1+VAR_9, &VAR_4);
    }else{
      VAR_4 = 0;
    }
    VAR_9 += FUNC_2(VAR_1+VAR_9, &VAR_5);
    if( VAR_4+VAR_5+1 >= sizeof(VAR_11) ){
      FUNC_1(VAR_0, "term to long\n");
      FUNC_0(1);
    }
    FUNC_3(VAR_11+VAR_4, VAR_1+VAR_9, (size_t)VAR_5);
    VAR_11[VAR_4+VAR_5] = 0;
    VAR_9 += VAR_5;
    if( VAR_8==0 ){
      VAR_9 += FUNC_2(VAR_1+VAR_9, &VAR_7);
      FUNC_4("term: %-25s doclist %7lld bytes offset %lld\n", VAR_11, VAR_7, VAR_9);
      VAR_9 += VAR_7;
    }else{
      FUNC_4("term: %-25s child %lld\n", VAR_11, ++VAR_3);
    }
  }
}
