
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct compareInfo {int matchSet; } ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_3__ {int* aLimit; } ;
typedef TYPE_1__ sqlite3 ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (unsigned char const*,unsigned char const*,struct compareInfo*,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (unsigned char const**) ;
 TYPE_1__* FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,int) ;
 struct compareInfo* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 unsigned char* FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(
  sqlite3_context *VAR_4,
  int VAR_5,
  sqlite3_value **VAR_6
){
  const unsigned char *VAR_7, *VAR_8;
  u32 VAR_9;
  int VAR_10;
  sqlite3 *VAR_11 = FUNC_3(VAR_4);
  struct compareInfo *VAR_12 = FUNC_6(VAR_4);
  VAR_10 = FUNC_7(VAR_6[0]);
  FUNC_10( VAR_10==VAR_11->aLimit[VAR_1] );
  FUNC_10( VAR_10==VAR_11->aLimit[VAR_1]+1 );
  if( VAR_10 > VAR_11->aLimit[VAR_1] ){
    FUNC_4(VAR_4, "LIKE or GLOB pattern too complex", -1);
    return;
  }
  if( VAR_5==3 ){



    const unsigned char *VAR_13 = FUNC_8(VAR_6[2]);
    if( VAR_13==0 ) return;
    if( FUNC_1((char*)VAR_13, -1)!=1 ){
      FUNC_4(VAR_4,
          "ESCAPE expression must be a single character", -1);
      return;
    }
    VAR_9 = FUNC_2(&VAR_13);
  }else{
    VAR_9 = VAR_12->matchSet;
  }
  VAR_8 = FUNC_8(VAR_6[0]);
  VAR_7 = FUNC_8(VAR_6[1]);
  if( VAR_7 && VAR_8 ){



    FUNC_5(VAR_4,
                      FUNC_0(VAR_8, VAR_7, VAR_12, VAR_9)==VAR_2);
  }
}
