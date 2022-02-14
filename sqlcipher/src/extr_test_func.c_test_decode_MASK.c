
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u64 ;
typedef int u32 ;
struct TYPE_12__ {int zMalloc; scalar_t__ szMalloc; int enc; int * db; } ;
typedef TYPE_1__ sqlite3_value ;
typedef int sqlite3_context ;
typedef int sqlite3 ;
typedef int mem ;
typedef int Tcl_Obj ;
typedef TYPE_1__ Mem ;


 int FUNC_0 (int *) ;





 int VAR_0 ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,int *) ;
 int * FUNC_6 (int ) ;
 int * FUNC_7 () ;
 int * FUNC_8 (char const*,int) ;
 int * FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (TYPE_1__*,int ,int) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int*,size_t*) ;
 int FUNC_14 (int*,int ,TYPE_1__*) ;
 int * FUNC_15 (int *) ;
 int FUNC_16 (int *,int ,int,int ) ;
 scalar_t__ FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*) ;
 scalar_t__ FUNC_21 (TYPE_1__*) ;
 int FUNC_22 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_23(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  sqlite3 *VAR_4 = FUNC_15(VAR_1);
  u8 *VAR_5;
  u8 *VAR_6;
  u8 *VAR_7;
  u8 *VAR_8;
  u64 VAR_9;
  Tcl_Obj *VAR_10;

  VAR_10 = FUNC_7();
  FUNC_4(VAR_10);

  FUNC_10( VAR_2==1 );
  VAR_5 = (u8*)FUNC_17(VAR_3[0]);

  VAR_7 = VAR_5 + FUNC_13(VAR_5, &VAR_9);
  VAR_8 = VAR_6 = &VAR_5[VAR_9];
  while( VAR_7<VAR_6 ){
    Tcl_Obj *VAR_11 = 0;
    u64 VAR_12;
    Mem VAR_13;

    FUNC_11(&VAR_13, 0, sizeof(VAR_13));
    VAR_13.db = VAR_4;
    VAR_13.enc = FUNC_0(VAR_4);
    VAR_7 += FUNC_13(VAR_7, &VAR_12);
    VAR_8 += FUNC_14(VAR_8, (u32)VAR_12, &VAR_13);

    switch( FUNC_22(&VAR_13) ){
      case 128:
        VAR_11 = FUNC_8((const char*)FUNC_21(&VAR_13), -1);
        break;

      case 132: {
        char VAR_14[] = {
          '0', '1', '2', '3', '4', '5', '6', '7',
          '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'
        };
        int VAR_15 = FUNC_18(&VAR_13);
        u8 *VAR_16 = (u8*)FUNC_17(&VAR_13);
        int VAR_17;
        VAR_11 = FUNC_8("x'", -1);
        for(VAR_17=0; VAR_17<VAR_15; VAR_17++){
          char VAR_18[3];
          VAR_18[0] = VAR_14[((VAR_16[VAR_17] >> 4) & 0x0F)];
          VAR_18[1] = VAR_14[(VAR_16[VAR_17] & 0x0F)];
          VAR_18[2] = '\0';
          FUNC_1(VAR_11, VAR_18, 0);
        }
        FUNC_1(VAR_11, "'", 0);
        break;
      }

      case 131:
        VAR_11 = FUNC_6(FUNC_19(&VAR_13));
        break;

      case 130:
        VAR_11 = FUNC_9(FUNC_20(&VAR_13));
        break;

      case 129:
        VAR_11 = FUNC_8("NULL", -1);
        break;

      default:
        FUNC_10( 0 );
    }

    FUNC_5(0, VAR_10, VAR_11);

    if( VAR_13.szMalloc ){
      FUNC_12(VAR_4, VAR_13.zMalloc);
    }
  }

  FUNC_16(VAR_1, FUNC_3(VAR_10), -1, VAR_0);
  FUNC_2(VAR_10);
}
