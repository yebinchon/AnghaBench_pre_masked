
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {void* zExpr; } ;
struct TYPE_4__ {void* zWhere; TYPE_2__* aCol; } ;
typedef TYPE_1__ CidxIndex ;
typedef int CidxCursor ;
typedef TYPE_2__ CidxColumn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (char const*,char const**,int*) ;
 void* FUNC_2 (int*,char*,...) ;
 scalar_t__ FUNC_3 (char const) ;
 scalar_t__ FUNC_4 (char const) ;
 scalar_t__ FUNC_5 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_6(CidxCursor *VAR_6, CidxIndex *VAR_7, const char *VAR_8){
  const char *VAR_9 = VAR_8;
  const char *VAR_10;
  int VAR_11;
  int VAR_12 = VAR_5;
  int VAR_13 = 1;
  int VAR_14 = 0;
  CidxColumn *VAR_15 = VAR_7->aCol;

  VAR_11 = FUNC_1(VAR_9, &VAR_9, &VAR_14);
  if( VAR_11!=VAR_3 ) goto parse_error;
  VAR_10 = VAR_9+1;
  VAR_9++;
  while( VAR_13>0 ){
    VAR_11 = FUNC_1(VAR_9, &VAR_9, &VAR_14);
    if( VAR_11==VAR_2 ) goto parse_error;
    if( (VAR_11==VAR_1 || VAR_11==VAR_0) && VAR_13==1 ){
      const char *VAR_16 = VAR_9;
      if( VAR_15->zExpr ) goto parse_error;

      if( VAR_14==0 ){
        while( FUNC_4(VAR_9[-1]) ) VAR_9--;
        if( !FUNC_5(&VAR_9[-3], "asc", 3) && 0==FUNC_3(VAR_9[-4]) ){
          VAR_9 -= 3;
          while( FUNC_4(VAR_9[-1]) ) VAR_9--;
        }else
          if( !FUNC_5(&VAR_9[-4], "desc", 4) && 0==FUNC_3(VAR_9[-5]) ){
            VAR_9 -= 4;
            while( FUNC_4(VAR_9[-1]) ) VAR_9--;
          }
        while( FUNC_4(VAR_10[0]) ) VAR_10++;
      }

      VAR_15->zExpr = FUNC_2(&VAR_12, "%.*s", VAR_9-VAR_10, VAR_10);
      VAR_15++;
      VAR_9 = VAR_10 = VAR_16+1;
    }
    if( VAR_11==VAR_3 ) VAR_13++;
    if( VAR_11==VAR_0 ) VAR_13--;
    VAR_9++;
  }


  FUNC_1(VAR_9, &VAR_9, 0);
  if( 0==FUNC_5(VAR_9, "where", 5) ){
    VAR_7->zWhere = FUNC_2(&VAR_12, "%s\n", &VAR_9[5]);
  }else if( VAR_9[0]!='\0' ){
    goto parse_error;
  }

  return VAR_12;

 parse_error:
  FUNC_0(VAR_6, "Parse error in: %s", VAR_8);
  return VAR_4;
}
