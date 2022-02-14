
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct compareInfo {int dummy; } ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_3__ {int* aLimit; } ;
typedef TYPE_1__ sqlite3 ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char const*,unsigned char const*,struct compareInfo*,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (unsigned char const**) ;
 TYPE_1__* FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *,int ) ;
 struct compareInfo* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 unsigned char const* FUNC_9 (int *) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(
  sqlite3_context *VAR_2,
  int VAR_3,
  sqlite3_value **VAR_4
){
  const unsigned char *VAR_5, *VAR_6;
  u32 VAR_7 = 0;
  int VAR_8;
  sqlite3 *VAR_9 = FUNC_4(VAR_2);

  VAR_6 = FUNC_9(VAR_4[0]);
  VAR_5 = FUNC_9(VAR_4[1]);




  VAR_8 = FUNC_8(VAR_4[0]);
  FUNC_10( VAR_8==VAR_9->aLimit[VAR_0] );
  FUNC_10( VAR_8==VAR_9->aLimit[VAR_0]+1 );
  if( VAR_8 > VAR_9->aLimit[VAR_0] ){
    FUNC_5(VAR_2, "LIKE or GLOB pattern too complex", -1);
    return;
  }
  FUNC_0( VAR_6==FUNC_9(VAR_4[0]) );

  if( VAR_3==3 ){



    const unsigned char *VAR_10 = FUNC_9(VAR_4[2]);
    if( VAR_10==0 ) return;
    if( FUNC_2((char*)VAR_10, -1)!=1 ){
      FUNC_5(VAR_2,
          "ESCAPE expression must be a single character", -1);
      return;
    }
    VAR_7 = FUNC_3(&VAR_10);
  }
  if( VAR_5 && VAR_6 ){
    struct compareInfo *VAR_11 = FUNC_7(VAR_2);




    FUNC_6(VAR_2, FUNC_1(VAR_6, VAR_5, VAR_11, VAR_7));
  }
}
