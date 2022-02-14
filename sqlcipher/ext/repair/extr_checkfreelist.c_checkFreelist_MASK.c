
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char**,char*,int,...) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *,char const*,char*,int*) ;
 int FUNC_3 (int *,int,char const*,int,int ) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char const*,int,int **,int ) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(
  sqlite3 *VAR_3,
  const char *VAR_4,
  char **VAR_5
){


  const char *VAR_6 =
    "WITH freelist_trunk(i, d, n) AS ("
      "SELECT 1, NULL, sqlite_readint32(data, 32) "
      "FROM sqlite_dbpage(:1) WHERE pgno=1 "
        "UNION ALL "
      "SELECT n, data, sqlite_readint32(data) "
      "FROM freelist_trunk, sqlite_dbpage(:1) WHERE pgno=n "
    ")"
    "SELECT i, d FROM freelist_trunk WHERE i!=1;";

  int VAR_7, VAR_8;
  sqlite3_stmt *VAR_9 = 0;
  u32 VAR_10 = 0;
  u32 VAR_11 = 0;
  u32 VAR_12 = 0;

  if( VAR_4==0 ) VAR_4 = "main";

  if( (VAR_7 = FUNC_2(VAR_3, VAR_4, "PRAGMA %s.page_count", &VAR_10))
   || (VAR_7 = FUNC_2(VAR_3, VAR_4, "PRAGMA %s.freelist_count", &VAR_11))
  ){
    return VAR_7;
  }

  VAR_7 = FUNC_8(VAR_3, VAR_6, -1, &VAR_9, 0);
  if( VAR_7!=VAR_0 ) return VAR_7;
  FUNC_3(VAR_9, 1, VAR_4, -1, VAR_2);
  while( VAR_7==VAR_0 && FUNC_9(VAR_9)==VAR_1 ){
    u32 VAR_13;
    u32 VAR_14 = (u32)FUNC_6(VAR_9, 0);
    const u8 *VAR_15 = (const u8*)FUNC_4(VAR_9, 1);
    u32 VAR_16 = (u32)FUNC_5(VAR_9, 1);
    u32 VAR_17 = FUNC_1(&VAR_15[0]);
    u32 VAR_18 = FUNC_1(&VAR_15[4]);

    if( VAR_18>((VAR_16/4)-2-6) ){
      VAR_7 = FUNC_0(VAR_5,
          "leaf count out of range (%d) on trunk page %d",
          (int)VAR_18, (int)VAR_14
      );
      VAR_18 = (VAR_16/4) - 2 - 6;
    }

    VAR_12 += 1+VAR_18;
    if( VAR_17>VAR_10 ){
      VAR_7 = FUNC_0(VAR_5,
          "trunk page %d is out of range", (int)VAR_17
      );
    }

    for(VAR_13=0; VAR_7==VAR_0 && VAR_13<VAR_18; VAR_13++){
      u32 VAR_19 = FUNC_1(&VAR_15[8 + 4*VAR_13]);
      if( VAR_19==0 || VAR_19>VAR_10 ){
        VAR_7 = FUNC_0(VAR_5,
            "leaf page %d is out of range (child %d of trunk page %d)",
            (int)VAR_19, (int)VAR_13, (int)VAR_14
        );
      }
    }
  }

  if( VAR_7==VAR_0 && VAR_12!=VAR_11 ){
    VAR_7 = FUNC_0(VAR_5,
        "free-list count mismatch: actual=%d header=%d",
        (int)VAR_12, (int)VAR_11
    );
  }

  VAR_8 = FUNC_7(VAR_9);
  if( VAR_7==VAR_0 ) VAR_7 = VAR_8;
  return VAR_7;
}
