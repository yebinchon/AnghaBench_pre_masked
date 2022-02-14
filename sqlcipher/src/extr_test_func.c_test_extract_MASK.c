
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u64 ;
typedef int u32 ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int sqlite3 ;
typedef int mem ;
struct TYPE_5__ {int zMalloc; scalar_t__ szMalloc; int enc; int * db; } ;
typedef TYPE_1__ Mem ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,size_t*) ;
 int FUNC_5 (int *,int ,TYPE_1__*) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  sqlite3 *VAR_3 = FUNC_6(VAR_0);
  u8 *VAR_4;
  u8 *VAR_5;
  u8 *VAR_6;
  u8 *VAR_7;
  u64 VAR_8;
  int VAR_9;
  int VAR_10 = 0;

  FUNC_1( VAR_1==2 );
  VAR_4 = (u8*)FUNC_8(VAR_2[0]);
  VAR_9 = FUNC_9(VAR_2[1]);

  VAR_6 = VAR_4 + FUNC_4(VAR_4, &VAR_8);
  VAR_7 = VAR_5 = &VAR_4[VAR_8];

  for(VAR_10=0; VAR_6<VAR_5 && VAR_10<=VAR_9; VAR_10++){
    u64 VAR_11;
    Mem VAR_12;

    FUNC_2(&VAR_12, 0, sizeof(VAR_12));
    VAR_12.db = VAR_3;
    VAR_12.enc = FUNC_0(VAR_3);
    VAR_6 += FUNC_4(VAR_6, &VAR_11);
    VAR_7 += FUNC_5(VAR_7, (u32)VAR_11, &VAR_12);

    if( VAR_10==VAR_9 ){
      FUNC_7(VAR_0, &VAR_12);
    }

    if( VAR_12.szMalloc ) FUNC_3(VAR_3, VAR_12.zMalloc);
  }
}
