
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_44__ TYPE_8__ ;
typedef struct TYPE_43__ TYPE_7__ ;
typedef struct TYPE_42__ TYPE_6__ ;
typedef struct TYPE_41__ TYPE_5__ ;
typedef struct TYPE_40__ TYPE_4__ ;
typedef struct TYPE_39__ TYPE_3__ ;
typedef struct TYPE_38__ TYPE_2__ ;
typedef struct TYPE_37__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
typedef scalar_t__ i64 ;
struct TYPE_44__ {scalar_t__ nSpace; int n; scalar_t__* p; } ;
struct TYPE_43__ {int rc; TYPE_2__* pConfig; int * pHash; } ;
struct TYPE_39__ {TYPE_8__ pgidx; TYPE_8__ buf; } ;
struct TYPE_42__ {scalar_t__ bFirstRowidInPage; TYPE_3__ writer; } ;
struct TYPE_41__ {scalar_t__ nLevel; int nSegment; TYPE_1__* aLevel; } ;
struct TYPE_40__ {int iSegid; int pgnoFirst; int pgnoLast; } ;
struct TYPE_38__ {int pgsz; int eDetail; } ;
struct TYPE_37__ {int nSeg; TYPE_4__* aSeg; } ;
typedef TYPE_4__ Fts5StructureSegment ;
typedef TYPE_5__ Fts5Structure ;
typedef TYPE_6__ Fts5SegWriter ;
typedef TYPE_7__ Fts5Index ;
typedef int Fts5Hash ;
typedef TYPE_8__ Fts5Buffer ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_7__*,TYPE_5__*) ;
 int FUNC_2 (TYPE_8__*,int const*,int) ;
 int FUNC_3 (int const*,int*,int*) ;
 scalar_t__ FUNC_4 (int const*,int *) ;
 int FUNC_5 (TYPE_7__*,TYPE_5__**,int) ;
 int FUNC_6 (TYPE_7__*,TYPE_5__**) ;
 int FUNC_7 (int const*,int) ;
 int FUNC_8 (scalar_t__*,int ) ;
 int FUNC_9 (int *,TYPE_5__**) ;
 int FUNC_10 (int *,TYPE_5__*,int ,int,int ) ;
 int FUNC_11 (TYPE_7__*) ;
 int FUNC_12 (TYPE_7__*,int ,TYPE_5__*) ;
 TYPE_5__* FUNC_13 (TYPE_7__*) ;
 int FUNC_14 (TYPE_5__*) ;
 int FUNC_15 (TYPE_7__*,TYPE_5__*) ;
 int FUNC_16 (TYPE_7__*,TYPE_6__*,int,int const*) ;
 int FUNC_17 (TYPE_7__*,TYPE_6__*,scalar_t__) ;
 int FUNC_18 (TYPE_7__*,TYPE_6__*,int*) ;
 int FUNC_19 (TYPE_7__*,TYPE_6__*) ;
 int FUNC_20 (TYPE_7__*,TYPE_6__*,int) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,char const**,int const**,int*) ;
 scalar_t__ FUNC_23 (int *) ;
 int FUNC_24 (int *,int ,int ) ;
 int FUNC_25 (int *) ;
 scalar_t__ FUNC_26 (scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_27 (char const*) ;

__attribute__((used)) static void FUNC_28(Fts5Index *VAR_3){
  Fts5Hash *VAR_4 = VAR_3->pHash;
  Fts5Structure *VAR_5;
  int VAR_6;
  int VAR_7 = 0;



  VAR_5 = FUNC_13(VAR_3);
  VAR_6 = FUNC_1(VAR_3, VAR_5);
  FUNC_11(VAR_3);

  if( VAR_6 ){
    const int VAR_8 = VAR_3->pConfig->pgsz;
    int VAR_9 = VAR_3->pConfig->eDetail;
    Fts5StructureSegment *VAR_10;
    Fts5Buffer *VAR_11;
    Fts5Buffer *VAR_12;

    Fts5SegWriter VAR_13;
    FUNC_20(VAR_3, &VAR_13, VAR_6);

    VAR_11 = &VAR_13.writer.buf;
    VAR_12 = &VAR_13.writer.pgidx;



    FUNC_0( VAR_3->rc || VAR_11->nSpace>=(VAR_8 + VAR_0) );
    FUNC_0( VAR_3->rc || VAR_12->nSpace>=(VAR_8 + VAR_0) );



    if( VAR_3->rc==VAR_2 ){
      VAR_3->rc = FUNC_24(VAR_4, 0, 0);
    }
    while( VAR_3->rc==VAR_2 && 0==FUNC_23(VAR_4) ){
      const char *VAR_14;
      const u8 *VAR_15;
      int VAR_16;


      FUNC_22(VAR_4, &VAR_14, &VAR_15, &VAR_16);
      FUNC_16(VAR_3, &VAR_13, (int)FUNC_27(VAR_14), (const u8*)VAR_14);
      if( VAR_3->rc!=VAR_2 ) break;

      FUNC_0( VAR_13.bFirstRowidInPage==0 );
      if( VAR_8>=(VAR_11->n + VAR_12->n + VAR_16 + 1) ){

        FUNC_2(VAR_11, VAR_15, VAR_16);
      }else{
        i64 VAR_17 = 0;
        i64 VAR_18 = 0;
        int VAR_19 = 0;




        while( VAR_3->rc==VAR_2 && VAR_19<VAR_16 ){
          VAR_19 += FUNC_4(&VAR_15[VAR_19], (u64*)&VAR_18);
          VAR_17 += VAR_18;

          if( VAR_13.bFirstRowidInPage ){
            FUNC_8(&VAR_11->p[0], (u16)VAR_11->n);
            VAR_11->n += FUNC_26(&VAR_11->p[VAR_11->n], VAR_17);
            VAR_13.bFirstRowidInPage = 0;
            FUNC_17(VAR_3, &VAR_13, VAR_17);
            if( VAR_3->rc!=VAR_2 ) break;
          }else{
            VAR_11->n += FUNC_26(&VAR_11->p[VAR_11->n], VAR_18);
          }
          FUNC_0( VAR_11->n<=VAR_11->nSpace );

          if( VAR_9==VAR_1 ){
            if( VAR_19<VAR_16 && VAR_15[VAR_19]==0 ){
              VAR_11->p[VAR_11->n++] = 0;
              VAR_19++;
              if( VAR_19<VAR_16 && VAR_15[VAR_19]==0 ){
                VAR_11->p[VAR_11->n++] = 0;
                VAR_19++;
              }
            }
            if( (VAR_11->n + VAR_12->n)>=VAR_8 ){
              FUNC_19(VAR_3, &VAR_13);
            }
          }else{
            int VAR_20;
            int VAR_21;
            int VAR_22 = FUNC_3(&VAR_15[VAR_19], &VAR_21, &VAR_20);
            VAR_22 += VAR_21;
            if( (VAR_11->n + VAR_12->n + VAR_22) <= VAR_8 ){


              FUNC_2(VAR_11, &VAR_15[VAR_19], VAR_22);
            }else{



              const u8 *VAR_23 = &VAR_15[VAR_19];
              int VAR_24 = 0;
              while( VAR_3->rc==VAR_2 ){
                int VAR_25 = VAR_8 - VAR_11->n - VAR_12->n;
                int VAR_26 = 0;
                if( (VAR_22 - VAR_24)<=VAR_25 ){
                  VAR_26 = VAR_22 - VAR_24;
                }else{
                  VAR_26 = FUNC_7(&VAR_23[VAR_24], VAR_25);
                }
                FUNC_0( VAR_26>0 );
                FUNC_2(VAR_11, &VAR_23[VAR_24], VAR_26);
                VAR_24 += VAR_26;
                if( (VAR_11->n + VAR_12->n)>=VAR_8 ){
                  FUNC_19(VAR_3, &VAR_13);
                }
                if( VAR_24>=VAR_22 ) break;
              }
            }
            VAR_19 += VAR_22;
          }
        }
      }



      FUNC_0( VAR_11->n<=VAR_11->nSpace );
      if( VAR_3->rc==VAR_2 ) FUNC_25(VAR_4);
    }
    FUNC_21(VAR_4);
    FUNC_18(VAR_3, &VAR_13, &VAR_7);



    if( VAR_5->nLevel==0 ){
      FUNC_9(&VAR_3->rc, &VAR_5);
    }
    FUNC_10(&VAR_3->rc, VAR_5, 0, 1, 0);
    if( VAR_3->rc==VAR_2 ){
      VAR_10 = &VAR_5->aLevel[0].aSeg[ VAR_5->aLevel[0].nSeg++ ];
      VAR_10->iSegid = VAR_6;
      VAR_10->pgnoFirst = 1;
      VAR_10->pgnoLast = VAR_7;
      VAR_5->nSegment++;
    }
    FUNC_12(VAR_3, 0, VAR_5);
  }

  FUNC_5(VAR_3, &VAR_5, VAR_7);
  FUNC_6(VAR_3, &VAR_5);
  FUNC_15(VAR_3, VAR_5);
  FUNC_14(VAR_5);
}
