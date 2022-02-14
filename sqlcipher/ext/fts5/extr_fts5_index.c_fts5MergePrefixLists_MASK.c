
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int writer ;
typedef int u8 ;
typedef scalar_t__ i64 ;
struct TYPE_20__ {int n; int * p; int member_2; int member_1; int member_0; } ;
struct TYPE_19__ {scalar_t__ iRowid; int nPoslist; size_t nSize; int * aPoslist; int * aEof; } ;
struct TYPE_18__ {scalar_t__ rc; } ;
typedef int Fts5PoslistWriter ;
typedef TYPE_1__ Fts5Index ;
typedef TYPE_2__ Fts5DoclistIter ;
typedef TYPE_3__ Fts5Buffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int *,int) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (scalar_t__*,TYPE_3__*,scalar_t__,int *) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_3__*,scalar_t__,scalar_t__) ;
 int FUNC_10 (int *,int ,int) ;
 scalar_t__ FUNC_11 (scalar_t__*,TYPE_3__*,int) ;
 int FUNC_12 (int *,int,int*,scalar_t__*) ;
 int FUNC_13 (TYPE_3__*,scalar_t__*,scalar_t__) ;

__attribute__((used)) static void FUNC_14(
  Fts5Index *VAR_0,
  Fts5Buffer *VAR_1,
  Fts5Buffer *VAR_2
){
  if( VAR_2->n ){
    i64 VAR_3 = 0;
    Fts5DoclistIter VAR_4;
    Fts5DoclistIter VAR_5;
    Fts5Buffer VAR_6 = {0, 0, 0};
    Fts5Buffer VAR_7 = {0, 0, 0};







    if( FUNC_11(&VAR_0->rc, &VAR_6, VAR_1->n + VAR_2->n + 9) ) return;
    FUNC_7(VAR_1, &VAR_4);
    FUNC_7(VAR_2, &VAR_5);

    while( 1 ){
      if( VAR_4<VAR_5 ){

        FUNC_9(&VAR_6, VAR_3, VAR_4);
        FUNC_3(&VAR_6, VAR_4, VAR_4+VAR_4);
        FUNC_8(&VAR_4);
        if( VAR_4==0 ) break;
      }
      else if( VAR_5!=VAR_4 ){

        FUNC_9(&VAR_6, VAR_3, VAR_5);
        FUNC_3(&VAR_6, VAR_5, VAR_5+VAR_5);
        FUNC_8(&VAR_5);
        if( VAR_5==0 ) break;
      }
      else{

        i64 VAR_8 = 0;
        i64 VAR_9 = 0;
        int VAR_10 = 0;
        int VAR_11 = 0;
        u8 *VAR_12 = &VAR_4[VAR_4];
        u8 *VAR_13 = &VAR_5[VAR_5];
        int VAR_14;
        u8 *VAR_15;

        i64 VAR_16 = 0;
        Fts5PoslistWriter VAR_17;
        FUNC_10(&VAR_17, 0, sizeof(VAR_17));

        FUNC_9(&VAR_6, VAR_3, VAR_5);
        FUNC_6(&VAR_7);
        FUNC_11(&VAR_0->rc, &VAR_7, VAR_4 + VAR_5);
        if( VAR_0->rc ) break;

        FUNC_12(VAR_12, VAR_4, &VAR_10, &VAR_8);
        FUNC_12(VAR_13, VAR_5, &VAR_11, &VAR_9);
        FUNC_0( VAR_8>=0 && VAR_9>=0 );

        if( VAR_8<VAR_9 ){
          FUNC_13(&VAR_7, &VAR_16, VAR_8);
          FUNC_12(VAR_12, VAR_4, &VAR_10, &VAR_8);
        }else{
          FUNC_13(&VAR_7, &VAR_16, VAR_9);
          FUNC_12(VAR_13, VAR_5, &VAR_11, &VAR_9);
        }

        if( VAR_8>=0 && VAR_9>=0 ){
          while( 1 ){
            if( VAR_8<VAR_9 ){
              if( VAR_8!=VAR_16 ){
                FUNC_13(&VAR_7, &VAR_16, VAR_8);
              }
              FUNC_12(VAR_12, VAR_4, &VAR_10, &VAR_8);
              if( VAR_8<0 ) break;
            }else{
              FUNC_1( VAR_9!=VAR_16 );
              FUNC_13(&VAR_7, &VAR_16, VAR_9);
              FUNC_12(VAR_13, VAR_5, &VAR_11, &VAR_9);
              if( VAR_9<0 ) break;
            }
          }
        }

        if( VAR_8>=0 ){
          if( VAR_8!=VAR_16 ){
            FUNC_13(&VAR_7, &VAR_16, VAR_8);
          }
          VAR_15 = &VAR_12[VAR_10];
          VAR_14 = VAR_4 - VAR_10;
        }else{
          FUNC_0( VAR_9>=0 && VAR_9!=VAR_16 );
          FUNC_13(&VAR_7, &VAR_16, VAR_9);
          VAR_15 = &VAR_13[VAR_11];
          VAR_14 = VAR_5 - VAR_11;
        }
        if( VAR_14>0 ){
          FUNC_3(&VAR_7, VAR_15, VAR_14);
        }


        FUNC_4(&VAR_6, VAR_7.n * 2);
        FUNC_3(&VAR_6, VAR_7.p, VAR_7.n);
        FUNC_8(&VAR_4);
        FUNC_8(&VAR_5);
        FUNC_0( VAR_6.n<=(VAR_1->n+VAR_2->n+9) );
        if( VAR_4==0 || VAR_5==0 ) break;
      }
    }

    if( VAR_4 ){
      FUNC_9(&VAR_6, VAR_3, VAR_4);
      FUNC_3(&VAR_6, VAR_4, VAR_4 - VAR_4);
    }
    else if( VAR_5 ){
      FUNC_9(&VAR_6, VAR_3, VAR_5);
      FUNC_3(&VAR_6, VAR_5, VAR_5 - VAR_5);
    }
    FUNC_0( VAR_6.n<=(VAR_1->n+VAR_2->n+9) );

    FUNC_5(&VAR_0->rc, VAR_1, VAR_6.n, VAR_6.p);
    FUNC_2(&VAR_7);
    FUNC_2(&VAR_6);
  }
}
