
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_21__ {int nDb; TYPE_3__* aDb; scalar_t__ mallocFailed; } ;
typedef TYPE_4__ sqlite3 ;
typedef int Trigger ;
struct TYPE_23__ {int checkSchema; TYPE_4__* db; } ;
struct TYPE_22__ {int nSrc; TYPE_1__* a; } ;
struct TYPE_20__ {TYPE_2__* pSchema; int zDbSName; } ;
struct TYPE_19__ {int trigHash; } ;
struct TYPE_18__ {char* zDatabase; char* zName; } ;
typedef TYPE_5__ SrcList ;
typedef TYPE_6__ Parse ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_6__*,char const*) ;
 int FUNC_3 (TYPE_6__*,int *) ;
 int FUNC_4 (TYPE_6__*,char*,TYPE_5__*,int ) ;
 int * FUNC_5 (int *,char const*) ;
 scalar_t__ FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_4__*,int,int ) ;
 int FUNC_8 (TYPE_4__*,TYPE_5__*) ;
 scalar_t__ FUNC_9 (int ,char const*) ;

void FUNC_10(Parse *VAR_2, SrcList *VAR_3, int VAR_4){
  Trigger *VAR_5 = 0;
  int VAR_6;
  const char *VAR_7;
  const char *VAR_8;
  sqlite3 *VAR_9 = VAR_2->db;

  if( VAR_9->mallocFailed ) goto drop_trigger_cleanup;
  if( VAR_1!=FUNC_6(VAR_2) ){
    goto drop_trigger_cleanup;
  }

  FUNC_0( VAR_3->nSrc==1 );
  VAR_7 = VAR_3->a[0].zDatabase;
  VAR_8 = VAR_3->a[0].zName;
  FUNC_0( VAR_7!=0 || FUNC_1(VAR_9) );
  for(VAR_6=VAR_0; VAR_6<VAR_9->nDb; VAR_6++){
    int VAR_10 = (VAR_6<2) ? VAR_6^1 : VAR_6;
    if( VAR_7 && FUNC_9(VAR_9->aDb[VAR_10].zDbSName, VAR_7) ) continue;
    FUNC_0( FUNC_7(VAR_9, VAR_10, 0) );
    VAR_5 = FUNC_5(&(VAR_9->aDb[VAR_10].pSchema->trigHash), VAR_8);
    if( VAR_5 ) break;
  }
  if( !VAR_5 ){
    if( !VAR_4 ){
      FUNC_4(VAR_2, "no such trigger: %S", VAR_3, 0);
    }else{
      FUNC_2(VAR_2, VAR_7);
    }
    VAR_2->checkSchema = 1;
    goto drop_trigger_cleanup;
  }
  FUNC_3(VAR_2, VAR_5);

drop_trigger_cleanup:
  FUNC_8(VAR_9, VAR_3);
}
