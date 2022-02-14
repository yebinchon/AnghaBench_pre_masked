
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3 ;



 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (unsigned char const) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char const*,int,int **,int ) ;
 int FUNC_12 (int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_13(sqlite3 *VAR_5, const char *VAR_6){
  int VAR_7;
  sqlite3_stmt *VAR_8;
  while( FUNC_1(VAR_6[0]&0x7f) ) VAR_6++;
  if( VAR_6[0]==0 ) return VAR_1;
  if( VAR_3>=4 ){
    FUNC_2("RUNNING-SQL: [%s]\n", VAR_6);
    FUNC_0(VAR_4);
  }
  VAR_7 = FUNC_11(VAR_5, VAR_6, -1, &VAR_8, 0);
  if( VAR_7==VAR_1 ){
    while( (VAR_7 = FUNC_12(VAR_8))==VAR_2 ){
      if( VAR_3>=5 ){
        int VAR_9;
        for(VAR_9=0; VAR_9<FUNC_6(VAR_8); VAR_9++){
          if( VAR_9 ) FUNC_2(",");
          switch( FUNC_8(VAR_8, VAR_9) ){
            case 129: {
              FUNC_2("NULL");
              break;
            }
            case 130:
            case 131: {
              FUNC_2("%s", FUNC_7(VAR_8, VAR_9));
              break;
            }
            case 132: {
              int VAR_10 = FUNC_5(VAR_8, VAR_9);
              int VAR_11;
              const unsigned char *VAR_12;
              VAR_12 = (const unsigned char*)FUNC_4(VAR_8, VAR_9);
              FUNC_2("x'");
              for(VAR_11=0; VAR_11<VAR_10; VAR_11++){
                FUNC_2("%02x", VAR_12[VAR_11]);
              }
              FUNC_2("'");
              break;
            }
            case 128: {
              int VAR_13 = FUNC_5(VAR_8, VAR_9);
              int VAR_14;
              const unsigned char *VAR_15;
              VAR_15 = (const unsigned char*)FUNC_4(VAR_8, VAR_9);
              FUNC_2("'");
              for(VAR_14=0; VAR_14<VAR_13; VAR_14++){
                if( VAR_15[VAR_14]=='\'' ){
                  FUNC_2("''");
                }else{
                  FUNC_3(VAR_15[VAR_14]);
                }
              }
              FUNC_2("'");
              break;
            }
          }
        }
        FUNC_2("\n");
        FUNC_0(VAR_4);
      }
    }
    if( VAR_7!=VAR_0 && VAR_3>=4 ){
      FUNC_2("SQL-ERROR: (%d) %s\n", VAR_7, FUNC_9(VAR_5));
      FUNC_0(VAR_4);
    }
  }else if( VAR_3>=4 ){
    FUNC_2("SQL-ERROR (%d): %s\n", VAR_7, FUNC_9(VAR_5));
    FUNC_0(VAR_4);
  }
  return FUNC_10(VAR_8);
}
