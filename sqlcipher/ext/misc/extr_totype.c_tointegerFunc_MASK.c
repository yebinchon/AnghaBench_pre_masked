
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef scalar_t__ sqlite3_int64 ;
typedef int sqlite3_context ;





 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,unsigned char const*,int) ;
 int FUNC_2 (int *,scalar_t__) ;
 unsigned char* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 double FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 unsigned char* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char const*,scalar_t__*,int) ;
 int FUNC_10 (unsigned char const) ;

__attribute__((used)) static void FUNC_11(
  sqlite3_context *VAR_2,
  int VAR_3,
  sqlite3_value **VAR_4
){
  FUNC_0( VAR_3==1 );
  (void)VAR_3;
  switch( FUNC_8(VAR_4[0]) ){
    case 130: {
      double VAR_5 = FUNC_5(VAR_4[0]);
      sqlite3_int64 VAR_6 = (sqlite3_int64)VAR_5;
      if( VAR_5==(double)VAR_6 ){
        FUNC_2(VAR_2, VAR_6);
      }
      break;
    }
    case 129: {
      FUNC_2(VAR_2, FUNC_6(VAR_4[0]));
      break;
    }
    case 131: {
      const unsigned char *VAR_7 = FUNC_3(VAR_4[0]);
      if( VAR_7 ){
        int VAR_8 = FUNC_4(VAR_4[0]);
        if( VAR_8==sizeof(sqlite3_int64) ){
          sqlite3_int64 VAR_9;
          if( VAR_1 ){
            int VAR_10;
            unsigned char VAR_11[sizeof(sqlite3_int64)];
            for(VAR_10=0; VAR_10<sizeof(sqlite3_int64); VAR_10++){
              VAR_11[VAR_10] = VAR_7[sizeof(sqlite3_int64)-1-VAR_10];
            }
            FUNC_1(&VAR_9, VAR_11, sizeof(sqlite3_int64));
          }else{
            FUNC_1(&VAR_9, VAR_7, sizeof(sqlite3_int64));
          }
          FUNC_2(VAR_2, VAR_9);
        }
      }
      break;
    }
    case 128: {
      const unsigned char *VAR_12 = FUNC_7(VAR_4[0]);
      if( VAR_12 ){
        int VAR_13 = FUNC_4(VAR_4[0]);
        if( VAR_13 && !FUNC_10(VAR_12[0]) ){
          sqlite3_int64 VAR_14;
          if( !FUNC_9((const char*)VAR_12, &VAR_14, VAR_13) ){
            FUNC_2(VAR_2, VAR_14);
          }
        }
      }
      break;
    }
    default: {
      FUNC_0( FUNC_8(VAR_4[0])==VAR_0 );
      break;
    }
  }
}
