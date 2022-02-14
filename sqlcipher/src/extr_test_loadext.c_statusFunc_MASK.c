
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int aOp ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;






 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,...) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int,int*,int*,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (char const*,char const*) ;

__attribute__((used)) static void FUNC_9(
  sqlite3_context *VAR_3,
  int VAR_4,
  sqlite3_value **VAR_5
){
  int VAR_6 = 0, VAR_7, VAR_8, VAR_9, VAR_10;
  if( FUNC_7(VAR_5[0])==VAR_0 ){
    VAR_6 = FUNC_5(VAR_5[0]);
  }else if( FUNC_7(VAR_5[0])==VAR_2 ){
    int VAR_11;
    const char *VAR_12;
    static const struct {
      const char *zName;
      int op;
    } VAR_13[] = {
      { "MEMORY_USED", 132 },
      { "PAGECACHE_USED", 130 },
      { "PAGECACHE_OVERFLOW", 131 },
      { "SCRATCH_USED", 128 },
      { "SCRATCH_OVERFLOW", 129 },
      { "MALLOC_SIZE", 133 },
    };
    int VAR_14 = sizeof(VAR_13)/sizeof(VAR_13[0]);
    VAR_12 = (const char*)FUNC_6(VAR_5[0]);
    for(VAR_11=0; VAR_11<VAR_14; VAR_11++){
      if( FUNC_8(VAR_13[VAR_11].zName, VAR_12)==0 ){
        VAR_6 = VAR_13[VAR_11].op;
        break;
      }
    }
    if( VAR_11>=VAR_14 ){
      char *VAR_15 = FUNC_1("unknown status property: %s", VAR_12);
      FUNC_2(VAR_3, VAR_15, -1);
      FUNC_0(VAR_15);
      return;
    }
  }else{
    FUNC_2(VAR_3, "unknown status type", -1);
    return;
  }
  if( VAR_4==2 ){
    VAR_9 = FUNC_5(VAR_5[1]);
  }else{
    VAR_9 = 0;
  }
  VAR_10 = FUNC_4(VAR_6, &VAR_8, &VAR_7, VAR_9);
  if( VAR_10!=VAR_1 ){
    char *VAR_16 = FUNC_1("sqlite3_status(%d,...) returns %d", VAR_6, VAR_10);
    FUNC_2(VAR_3, VAR_16, -1);
    FUNC_0(VAR_16);
    return;
  }
  if( VAR_4==2 ){
    FUNC_3(VAR_3, VAR_7);
  }else{
    FUNC_3(VAR_3, VAR_8);
  }
}
