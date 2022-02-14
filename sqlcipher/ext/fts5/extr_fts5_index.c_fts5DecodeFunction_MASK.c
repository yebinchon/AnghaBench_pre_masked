
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3_value ;
typedef scalar_t__ sqlite3_int64 ;
typedef int sqlite3_context ;
typedef scalar_t__ i64 ;
struct TYPE_17__ {int nn; int * p; } ;
struct TYPE_16__ {int iLeafPgno; scalar_t__ bEof; char const* iRowid; int n; scalar_t__ p; TYPE_2__* pData; } ;
typedef TYPE_1__ Fts5DlidxLvl ;
typedef TYPE_2__ Fts5Data ;
typedef TYPE_1__ Fts5Buffer ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,TYPE_1__*,int,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int*,TYPE_1__*,scalar_t__) ;
 int FUNC_5 (int*,TYPE_1__*,int *,int) ;
 scalar_t__ FUNC_6 (int*,TYPE_1__*,int *,int) ;
 int FUNC_7 (int*,TYPE_1__*,int *,int) ;
 int FUNC_8 (scalar_t__,int*,int*,int*,int*) ;
 int FUNC_9 (int*,TYPE_1__*,int *,int) ;
 int FUNC_10 (int*,TYPE_1__*,int *,int) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int const*,int) ;
 int FUNC_15 (TYPE_1__*,int ,int) ;
 int FUNC_16 (int*,TYPE_1__*,char*,int,char const*) ;
 int FUNC_17 (int*,TYPE_1__*,int,int const*) ;
 scalar_t__ FUNC_18 (int*,scalar_t__) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 (int *,char const*,int,int ) ;
 scalar_t__ FUNC_22 (int *) ;
 int * FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 scalar_t__ FUNC_25 (int *) ;

__attribute__((used)) static void FUNC_26(
  sqlite3_context *VAR_5,
  int VAR_6,
  sqlite3_value **VAR_7
){
  i64 VAR_8;
  int VAR_9,VAR_10,VAR_11,VAR_12;
  const u8 *VAR_13; int VAR_14;
  u8 *VAR_15 = 0;
  Fts5Buffer VAR_16;
  int VAR_17 = VAR_3;
  sqlite3_int64 VAR_18 = 0;
  int VAR_19 = (FUNC_22(VAR_5)!=0);

  FUNC_1( VAR_6==2 );
  FUNC_0(VAR_6);
  FUNC_15(&VAR_16, 0, sizeof(Fts5Buffer));
  VAR_8 = FUNC_25(VAR_7[0]);




  VAR_14 = FUNC_24(VAR_7[1]);
  VAR_13 = FUNC_23(VAR_7[1]);
  VAR_18 = VAR_14 + VAR_2;
  VAR_15 = (u8*)FUNC_18(&VAR_17, VAR_18);
  if( VAR_15==0 ) goto decode_out;
  if( VAR_14>0 ) FUNC_14(VAR_15, VAR_13, VAR_14);

  FUNC_8(VAR_8, &VAR_9, &VAR_12, &VAR_10, &VAR_11);

  FUNC_4(&VAR_17, &VAR_16, VAR_8);
  if( VAR_12 ){
    Fts5Data VAR_20;
    Fts5DlidxLvl VAR_21;

    VAR_20.p = VAR_15;
    VAR_20.nn = VAR_14;

    FUNC_15(&VAR_21, 0, sizeof(Fts5DlidxLvl));
    VAR_21.pData = &VAR_20;
    VAR_21.iLeafPgno = VAR_11;

    for(FUNC_11(&VAR_21); VAR_21.bEof==0; FUNC_11(&VAR_21)){
      FUNC_16(&VAR_17, &VAR_16,
          " %d(%lld)", VAR_21.iLeafPgno, VAR_21.iRowid
      );
    }
  }else if( VAR_9==0 ){
    if( VAR_8==VAR_0 ){
      FUNC_5(&VAR_17, &VAR_16, VAR_15, VAR_14);
    }else{
      FUNC_10(&VAR_17, &VAR_16, VAR_15, VAR_14);
    }
  }else if( VAR_19 ){
    Fts5Buffer VAR_22;
    int VAR_23;
    int VAR_24 = VAR_23 = FUNC_12(&VAR_15[2]);
    int VAR_25;
    int VAR_26 = 0;
    int VAR_27;

    FUNC_15(&VAR_22, 0, sizeof(Fts5Buffer));


    if( VAR_23<VAR_14 ){
      VAR_24 += FUNC_13(&VAR_15[VAR_24], VAR_25);
    }else{
      VAR_25 = VAR_23;
    }
    FUNC_9(&VAR_17, &VAR_16, &VAR_15[4], VAR_25-4);

    VAR_27 = VAR_25;
    while( VAR_27<VAR_23 ){
      int VAR_28;


      VAR_27 += FUNC_13(&VAR_15[VAR_27], VAR_28);
      VAR_22.n = VAR_26;
      FUNC_2(&VAR_17, &VAR_22, VAR_28, &VAR_15[VAR_27]);
      FUNC_16(
          &VAR_17, &VAR_16, " term=%.*s", VAR_22.n, (const char*)VAR_22.p
      );
      VAR_27 += VAR_28;


      if( VAR_24<VAR_14 ){
        int VAR_29;
        VAR_24 += FUNC_13(&VAR_15[VAR_24], VAR_29);
        VAR_25 += VAR_29;
      }else{
        VAR_25 = VAR_23;
      }

      FUNC_9(&VAR_17, &VAR_16, &VAR_15[VAR_27], VAR_25-VAR_27);
      VAR_27 = VAR_25;
      if( VAR_27<VAR_23 ){
        VAR_27 += FUNC_13(&VAR_15[VAR_27], VAR_26);
      }
    }

    FUNC_3(&VAR_22);
  }else{
    Fts5Buffer VAR_30;
    int VAR_31;
    int VAR_32;
    int VAR_33 = 0;
    int VAR_34 = 0;
    int VAR_35 = 0;
    int VAR_36;
    int VAR_37;

    FUNC_15(&VAR_30, 0, sizeof(Fts5Buffer));

    if( VAR_14<4 ){
      FUNC_17(&VAR_17, &VAR_16, 7, (const u8*)"corrupt");
      goto decode_out;
    }else{
      VAR_35 = FUNC_12(&VAR_15[0]);
      VAR_32 = VAR_31 = FUNC_12(&VAR_15[2]);
      if( VAR_32<VAR_14 ){
        FUNC_13(&VAR_15[VAR_32], VAR_34);
      }else if( VAR_32>VAR_14 ){
        VAR_17 = VAR_1;
        goto decode_out;
      }
    }


    if( VAR_35!=0 ){
      VAR_36 = VAR_35;
    }else if( VAR_34!=0 ){
      VAR_36 = VAR_34;
    }else{
      VAR_36 = VAR_31;
    }
    if( VAR_36>VAR_14 ){
      VAR_17 = VAR_1;
      goto decode_out;
    }
    FUNC_7(&VAR_17, &VAR_16, &VAR_15[4], VAR_36-4);



    VAR_37 = (VAR_34 ? VAR_34 : VAR_31) - VAR_36;
    if( VAR_37+VAR_36>VAR_14 ){
      VAR_17 = VAR_1;
      goto decode_out;
    }
    FUNC_6(&VAR_17, &VAR_16, &VAR_15[VAR_36], VAR_37);

    while( VAR_32<VAR_14 && VAR_17==VAR_3 ){
      int VAR_38 = (VAR_32==VAR_31);
      int VAR_39;
      int VAR_40;

      VAR_32 += FUNC_13(&VAR_15[VAR_32], VAR_39);
      VAR_33 += VAR_39;
      VAR_36 = VAR_33;

      if( VAR_32<VAR_14 ){
        FUNC_13(&VAR_15[VAR_32], VAR_39);
        VAR_40 = VAR_33 + VAR_39;
      }else{
        VAR_40 = VAR_31;
      }
      if( VAR_40>VAR_31 ){
        VAR_17 = VAR_1;
        break;
      }

      if( VAR_38==0 ){
        VAR_36 += FUNC_13(&VAR_15[VAR_36], VAR_39);
        if( VAR_39>VAR_30.n ){
          VAR_17 = VAR_1;
          break;
        }
        VAR_30.n = VAR_39;
      }
      VAR_36 += FUNC_13(&VAR_15[VAR_36], VAR_39);
      if( VAR_36+VAR_39>VAR_14 ){
        VAR_17 = VAR_1;
        break;
      }
      FUNC_2(&VAR_17, &VAR_30, VAR_39, &VAR_15[VAR_36]);
      VAR_36 += VAR_39;

      FUNC_16(
          &VAR_17, &VAR_16, " term=%.*s", VAR_30.n, (const char*)VAR_30.p
      );
      VAR_36 += FUNC_6(&VAR_17, &VAR_16, &VAR_15[VAR_36], VAR_40-VAR_36);
    }

    FUNC_3(&VAR_30);
  }

 decode_out:
  FUNC_19(VAR_15);
  if( VAR_17==VAR_3 ){
    FUNC_21(VAR_5, (const char*)VAR_16.p, VAR_16.n, VAR_4);
  }else{
    FUNC_20(VAR_5, VAR_17);
  }
  FUNC_3(&VAR_16);
}
