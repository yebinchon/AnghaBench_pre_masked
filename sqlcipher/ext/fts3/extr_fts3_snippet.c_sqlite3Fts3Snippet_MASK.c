
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int u64 ;
typedef int sqlite3_context ;
struct TYPE_15__ {scalar_t__ pVtab; } ;
struct TYPE_19__ {int pExpr; TYPE_1__ base; } ;
struct TYPE_18__ {int nColumn; } ;
struct TYPE_17__ {int covered; int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_16__ {char* z; int member_2; int member_1; int member_0; } ;
typedef TYPE_2__ StrBuffer ;
typedef TYPE_3__ SnippetFragment ;
typedef TYPE_4__ Fts3Table ;
typedef TYPE_5__ Fts3Cursor ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,TYPE_5__*,int,int,int*,TYPE_3__*,int*) ;
 int FUNC_4 (TYPE_5__*,TYPE_3__*,int,int,int,char const*,char const*,char const*,TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,char*,int,int (*) (char*)) ;

void FUNC_10(
  sqlite3_context *VAR_1,
  Fts3Cursor *VAR_2,
  const char *VAR_3,
  const char *VAR_4,
  const char *VAR_5,
  int VAR_6,
  int VAR_7
){
  Fts3Table *VAR_8 = (Fts3Table *)VAR_2->base.pVtab;
  int VAR_9 = VAR_0;
  int VAR_10;
  StrBuffer VAR_11 = {0, 0, 0};
  int VAR_12 = 0;
  SnippetFragment VAR_13[4];
  int VAR_14 = -1;

  if( !VAR_2->pExpr ){
    FUNC_9(VAR_1, "", 0, FUNC_0);
    return;
  }


  if( VAR_7<-64 ) VAR_7 = -64;
  if( VAR_7>+64 ) VAR_7 = +64;

  for(VAR_12=1; 1; VAR_12++){

    int VAR_15;
    u64 VAR_16 = 0;
    u64 VAR_17 = 0;

    if( VAR_7>=0 ){
      VAR_14 = (VAR_7+VAR_12-1) / VAR_12;
    }else{
      VAR_14 = -1 * VAR_7;
    }

    for(VAR_15=0; VAR_15<VAR_12; VAR_15++){
      int VAR_18 = -1;
      int VAR_19;
      SnippetFragment *VAR_20 = &VAR_13[VAR_15];

      FUNC_5(VAR_20, 0, sizeof(*VAR_20));





      for(VAR_19=0; VAR_19<VAR_8->nColumn; VAR_19++){
        SnippetFragment VAR_21 = {0, 0, 0, 0};
        int VAR_22 = 0;
        if( VAR_6>=0 && VAR_19!=VAR_6 ) continue;


        VAR_9 = FUNC_3(VAR_14, VAR_2, VAR_19, VAR_16, &VAR_17, &VAR_21, &VAR_22);
        if( VAR_9!=VAR_0 ){
          goto snippet_out;
        }
        if( VAR_22>VAR_18 ){
          *VAR_20 = VAR_21;
          VAR_18 = VAR_22;
        }
      }

      VAR_16 |= VAR_20->covered;
    }




    FUNC_2( (VAR_16&VAR_17)==VAR_16 );
    if( VAR_17==VAR_16 || VAR_12==FUNC_1(VAR_13) ) break;
  }

  FUNC_2( VAR_14>0 );

  for(VAR_10=0; VAR_10<VAR_12 && VAR_9==VAR_0; VAR_10++){
    VAR_9 = FUNC_4(VAR_2, &VAR_13[VAR_10],
        VAR_10, (VAR_10==VAR_12-1), VAR_14, VAR_3, VAR_4, VAR_5, &VAR_11
    );
  }

 snippet_out:
  FUNC_6(VAR_8);
  if( VAR_9!=VAR_0 ){
    FUNC_8(VAR_1, VAR_9);
    FUNC_7(VAR_11.z);
  }else{
    FUNC_9(VAR_1, VAR_11.z, -1, FUNC_7);
  }
}
