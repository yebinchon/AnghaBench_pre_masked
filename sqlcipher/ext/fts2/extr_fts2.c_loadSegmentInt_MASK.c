
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sqlite_int64 ;
typedef int fulltext_vtab ;
typedef int DataBuffer ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int,char const*,int,int,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (int *,scalar_t__,char const*,int,int,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (int *,char const*,int,char const*,int,int,int *) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__,char const*,int,int,int *) ;

__attribute__((used)) static int FUNC_5(fulltext_vtab *VAR_1, const char *VAR_2, int VAR_3,
                          sqlite_int64 VAR_4,
                          const char *VAR_5, int VAR_6, int VAR_7,
                          DataBuffer *VAR_8){

  if( *VAR_2=='\0' ){
    return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_5, VAR_6, VAR_7, VAR_8);
  }else{
    int VAR_9;
    sqlite_int64 VAR_10, VAR_11;




    FUNC_1(VAR_2, VAR_3, VAR_5, VAR_6, VAR_7,
                          &VAR_10, &VAR_11);
    while( VAR_10>VAR_4 ){
      sqlite_int64 VAR_12, VAR_13;
      VAR_9 = FUNC_2(VAR_1, VAR_10, VAR_5, VAR_6, VAR_7,
                                        &VAR_12, &VAR_13);
      if( VAR_9!=VAR_0 ) return VAR_9;


      if( VAR_10!=VAR_11 ){
        sqlite_int64 VAR_14;
        VAR_9 = FUNC_2(VAR_1, VAR_11, VAR_5, VAR_6, VAR_7,
                                          &VAR_14, &VAR_13);
        if( VAR_9!=VAR_0 ) return VAR_9;
      }

      FUNC_0( VAR_12<=VAR_13 );
      VAR_10 = VAR_12;
      VAR_11 = VAR_13;
    }
    FUNC_0( VAR_10<=VAR_4 );
    FUNC_0( VAR_11<=VAR_4 );


    return FUNC_4(VAR_1, VAR_10, VAR_11,
                             VAR_5, VAR_6, VAR_7, VAR_8);
  }
}
