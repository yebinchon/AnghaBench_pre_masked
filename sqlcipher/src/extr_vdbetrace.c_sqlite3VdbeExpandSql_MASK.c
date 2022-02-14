
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int zBase ;
typedef int utf8 ;
typedef scalar_t__ u8 ;
struct TYPE_19__ {int nVdbeExec; int * aLimit; } ;
typedef TYPE_2__ sqlite3 ;
struct TYPE_20__ {int nVar; TYPE_5__* aVar; TYPE_2__* db; } ;
typedef TYPE_3__ Vdbe ;
struct TYPE_18__ {int i; int r; int nZero; } ;
struct TYPE_22__ {int flags; int* z; int n; TYPE_1__ u; TYPE_2__* db; } ;
struct TYPE_21__ {scalar_t__ accError; scalar_t__ nAlloc; } ;
typedef TYPE_4__ StrAccum ;
typedef TYPE_5__ Mem ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,int*) ;
 int FUNC_3 (TYPE_5__*,int ,int) ;
 int FUNC_4 (char const*,int*) ;
 int FUNC_5 (char const) ;
 char* FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,int ,char*,int,int ) ;
 int FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (TYPE_5__*,scalar_t__) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_5__*,int*,int,scalar_t__,int ) ;
 int FUNC_12 (TYPE_3__*,char const*,int) ;
 int FUNC_13 (TYPE_4__*,char const*,int) ;
 int FUNC_14 (TYPE_4__*,char*,int,...) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (int) ;

char *FUNC_17(
  Vdbe *VAR_11,
  const char *VAR_12
){
  sqlite3 *VAR_13;
  int VAR_14 = 0;
  int VAR_15 = 1;
  int VAR_16;
  int VAR_17;
  int VAR_18;
  Mem *VAR_19;
  StrAccum VAR_20;

  Mem VAR_21;

  char VAR_22[100];

  VAR_13 = VAR_11->db;
  FUNC_7(&VAR_20, 0, VAR_22, sizeof(VAR_22),
                      VAR_13->aLimit[VAR_6]);
  if( VAR_13->nVdbeExec>1 ){
    while( *VAR_12 ){
      const char *VAR_23 = VAR_12;
      while( *(VAR_12++)!='\n' && *VAR_12 );
      FUNC_13(&VAR_20, "-- ", 3);
      FUNC_1( (VAR_12 - VAR_23) > 0 );
      FUNC_13(&VAR_20, VAR_23, (int)(VAR_12-VAR_23));
    }
  }else if( VAR_11->nVar==0 ){
    FUNC_13(&VAR_20, VAR_12, FUNC_8(VAR_12));
  }else{
    while( VAR_12[0] ){
      VAR_16 = FUNC_2(VAR_12, &VAR_17);
      FUNC_1( VAR_16>0 );
      FUNC_13(&VAR_20, VAR_12, VAR_16);
      VAR_12 += VAR_16;
      FUNC_1( VAR_12[0] || VAR_17==0 );
      if( VAR_17==0 ) break;
      if( VAR_12[0]=='?' ){
        if( VAR_17>1 ){
          FUNC_1( FUNC_5(VAR_12[1]) );
          FUNC_4(&VAR_12[1], &VAR_14);
        }else{
          VAR_14 = VAR_15;
        }
      }else{
        FUNC_1( VAR_12[0]==':' || VAR_12[0]=='$' ||
                VAR_12[0]=='@' || VAR_12[0]=='#' );
        FUNC_16( VAR_12[0]==':' );
        FUNC_16( VAR_12[0]=='$' );
        FUNC_16( VAR_12[0]=='@' );
        FUNC_16( VAR_12[0]=='#' );
        VAR_14 = FUNC_12(VAR_11, VAR_12, VAR_17);
        FUNC_1( VAR_14>0 );
      }
      VAR_12 += VAR_17;
      VAR_15 = VAR_14 + 1;
      FUNC_1( VAR_14>0 && VAR_14<=VAR_11->nVar );
      VAR_19 = &VAR_11->aVar[VAR_14-1];
      if( VAR_19->flags & VAR_2 ){
        FUNC_13(&VAR_20, "NULL", 4);
      }else if( VAR_19->flags & VAR_1 ){
        FUNC_14(&VAR_20, "%lld", VAR_19->u.i);
      }else if( VAR_19->flags & VAR_3 ){
        FUNC_14(&VAR_20, "%!.15g", VAR_19->u.r);
      }else if( VAR_19->flags & VAR_4 ){
        int VAR_24;

        u8 VAR_25 = FUNC_0(VAR_13);
        if( VAR_25!=VAR_10 ){
          FUNC_3(&VAR_21, 0, sizeof(VAR_21));
          VAR_21 = VAR_13;
          FUNC_11(&VAR_21, VAR_19->z, VAR_19->n, VAR_25, VAR_8);
          if( VAR_7==FUNC_9(&VAR_21, VAR_10) ){
            VAR_20.accError = VAR_7;
            VAR_20.nAlloc = 0;
          }
          VAR_19 = &VAR_21;
        }

        VAR_24 = VAR_19->n;






        FUNC_14(&VAR_20, "'%.*q'", VAR_24, VAR_19->z);






        if( VAR_25!=VAR_10 ) FUNC_10(&VAR_21);

      }else if( VAR_19->flags & VAR_5 ){
        FUNC_14(&VAR_20, "zeroblob(%d)", VAR_19->u.nZero);
      }else{
        int VAR_26;
        FUNC_1( VAR_19->flags & VAR_0 );
        FUNC_13(&VAR_20, "x'", 2);
        VAR_26 = VAR_19->n;



        for(VAR_18=0; VAR_18<VAR_26; VAR_18++){
          FUNC_14(&VAR_20, "%02x", VAR_19->z[VAR_18]&0xff);
        }
        FUNC_13(&VAR_20, "'", 1);





      }
    }
  }
  if( VAR_20.accError ) FUNC_15(&VAR_20);
  return FUNC_6(&VAR_20);
}
