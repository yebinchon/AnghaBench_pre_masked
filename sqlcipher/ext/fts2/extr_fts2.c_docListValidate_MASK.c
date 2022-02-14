
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sqlite_int64 ;
typedef scalar_t__ DocListType ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,scalar_t__*) ;
 scalar_t__ FUNC_2 (char const*,int*) ;

__attribute__((used)) static void FUNC_3(DocListType VAR_4, const char *VAR_5, int VAR_6,
                            sqlite_int64 *VAR_7){
  sqlite_int64 VAR_8 = 0;
  FUNC_0( VAR_6>0 );
  FUNC_0( VAR_5!=0 );
  FUNC_0( VAR_5+VAR_6>VAR_5 );
  while( VAR_6!=0 ){
    sqlite_int64 VAR_9;
    int VAR_10 = FUNC_1(VAR_5, &VAR_9);
    VAR_8 += VAR_9;
    if( VAR_4>VAR_0 ){
      int VAR_11;
      while( 1 ){
        VAR_10 += FUNC_2(VAR_5+VAR_10, &VAR_11);
        if( VAR_11==VAR_3 ) break;
        if( VAR_11==VAR_2 ){
          VAR_10 += FUNC_2(VAR_5+VAR_10, &VAR_11);
        }else if( VAR_4>VAR_1 ){
          VAR_10 += FUNC_2(VAR_5+VAR_10, &VAR_11);
          VAR_10 += FUNC_2(VAR_5+VAR_10, &VAR_11);
        }
        FUNC_0( VAR_10<=VAR_6 );
      }
    }
    FUNC_0( VAR_10<=VAR_6 );
    VAR_5 += VAR_10;
    VAR_6 -= VAR_10;
  }
  if( VAR_7 ) *VAR_7 = VAR_8;
}
