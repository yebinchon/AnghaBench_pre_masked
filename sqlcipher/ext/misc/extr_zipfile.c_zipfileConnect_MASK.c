
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3_vtab ;
typedef scalar_t__ sqlite3_int64 ;
typedef int sqlite3 ;
struct TYPE_3__ {char* zFile; int * aBuffer; int * db; } ;
typedef TYPE_1__ ZipfileTab ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 char* FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char const* const,char*) ;
 scalar_t__ FUNC_7 (char const*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(
  sqlite3 *VAR_5,
  void *VAR_6,
  int VAR_7, const char *const*VAR_8,
  sqlite3_vtab **VAR_9,
  char **VAR_10
){
  int VAR_11 = sizeof(ZipfileTab) + VAR_3;
  int VAR_12 = 0;
  const char *VAR_13 = 0;
  ZipfileTab *VAR_14 = 0;
  int VAR_15;
  FUNC_0( 0==FUNC_6(VAR_8[0], "zipfile") );
  if( (0!=FUNC_6(VAR_8[2], "zipfile") && VAR_7<4) || VAR_7>4 ){
    *VAR_10 = FUNC_5("zipfile constructor requires one argument");
    return VAR_0;
  }

  if( VAR_7>3 ){
    VAR_13 = VAR_8[3];
    VAR_12 = (int)FUNC_7(VAR_13)+1;
  }

  VAR_15 = FUNC_3(VAR_5, VAR_4);
  if( VAR_15==VAR_2 ){
    VAR_14 = (ZipfileTab*)FUNC_4((sqlite3_int64)VAR_11+VAR_12);
    if( VAR_14==0 ) return VAR_1;
    FUNC_2(VAR_14, 0, VAR_11+VAR_12);
    VAR_14->db = VAR_5;
    VAR_14->aBuffer = (u8*)&VAR_14[1];
    if( VAR_13 ){
      VAR_14->zFile = (char*)&VAR_14->aBuffer[VAR_3];
      FUNC_1(VAR_14->zFile, VAR_13, VAR_12);
      FUNC_8(VAR_14->zFile);
    }
  }
  *VAR_9 = (sqlite3_vtab*)VAR_14;
  return VAR_15;
}
