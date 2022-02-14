
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct CfgParam TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zParam ;
typedef int lsm_db ;
struct CfgParam {char const* zParam; int bWorker; int eParam; } ;
struct TYPE_4__ {int bNoRecovery; int nMtMinCkpt; int nMtMaxCkpt; } ;
typedef TYPE_1__ LsmDb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;





 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int,int*) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (TYPE_3__*,char*,char*,int*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char const*) ;

int FUNC_7(
  LsmDb *VAR_11,
  lsm_db *VAR_12,
  int VAR_13,
  const char *VAR_14,
  int *VAR_15
){
  struct CfgParam {
    const char *zParam;
    int bWorker;
    int eParam;
  } VAR_16[] = {
    { "autoflush", 0, VAR_1 },
    { "page_size", 0, VAR_8 },
    { "block_size", 0, VAR_4 },
    { "safety", 0, VAR_9 },
    { "autowork", 0, VAR_3 },
    { "autocheckpoint", 0, VAR_0 },
    { "mmap", 0, VAR_6 },
    { "use_log", 0, VAR_10 },
    { "automerge", 0, VAR_2 },
    { "max_freelist", 0, VAR_5 },
    { "multi_proc", 0, VAR_7 },
    { "worker_automerge", 1, VAR_2 },
    { "test_no_recovery", 0, 128 },
    { "bg_min_ckpt", 0, 128 },

    { "mt_mode", 0, 129 },
    { "mt_min_ckpt", 0, 130 },
    { "mt_max_ckpt", 0, 131 },




    { 0, 0 }
  };
  const char *VAR_17 = VAR_14;
  int VAR_18 = 1;

  if( VAR_14==0 ) return 0;

  FUNC_0( VAR_12 );
  while( VAR_17[0] ){
    const char *VAR_19;


    while( *VAR_17==' ' ) VAR_17++;
    VAR_19 = VAR_17;

    while( *VAR_17 && *VAR_17!='=' ) VAR_17++;
    if( *VAR_17 ){
      int VAR_20;
      int VAR_21;
      int VAR_22;
      int VAR_23 = 1;
      int VAR_24;
      char VAR_25[32];
      int VAR_26 = VAR_17-VAR_19;
      if( VAR_26==0 || VAR_26>sizeof(VAR_25)-1 ) goto syntax_error;

      FUNC_3(VAR_25, VAR_19, VAR_26);
      VAR_25[VAR_26] = '\0';
      VAR_24 = FUNC_4(VAR_16, "param", VAR_25, &VAR_21);
      if( VAR_24!=0 ) return VAR_24;
      VAR_20 = VAR_16[VAR_21].eParam;

      VAR_17++;
      VAR_19 = VAR_17;
      while( *VAR_17>='0' && *VAR_17<='9' ) VAR_17++;
      if( *VAR_17=='k' || *VAR_17=='K' ){
        VAR_23 = 1;
        VAR_17++;
      }else if( *VAR_17=='M' || *VAR_17=='M' ){
        VAR_23 = 1024;
        VAR_17++;
      }
      VAR_26 = VAR_17-VAR_19;
      if( VAR_26==0 || VAR_26>sizeof(VAR_25)-1 ) goto syntax_error;
      FUNC_3(VAR_25, VAR_19, VAR_26);
      VAR_25[VAR_26] = '\0';
      VAR_22 = FUNC_1(VAR_25) * VAR_23;

      if( VAR_20>0 ){
        if( VAR_13 || VAR_16[VAR_21].bWorker==0 ){
          FUNC_2(VAR_12, VAR_20, &VAR_22);
        }
      }else{
        switch( VAR_20 ){
          case 128:
            if( VAR_11 ) VAR_11->bNoRecovery = VAR_22;
            break;
          case 129:
            if( VAR_11 ) VAR_18 = VAR_22;
            break;
          case 130:
            if( VAR_11 && VAR_22>0 ) VAR_11->nMtMinCkpt = VAR_22*1024;
            break;
          case 131:
            if( VAR_11 && VAR_22>0 ) VAR_11->nMtMaxCkpt = VAR_22*1024;
            break;





        }
      }
    }else if( VAR_17!=VAR_19 ){
      goto syntax_error;
    }
  }

  if( VAR_15 ) *VAR_15 = VAR_18;
  if( VAR_11 && VAR_11->nMtMaxCkpt < VAR_11->nMtMinCkpt ){
    VAR_11->nMtMinCkpt = VAR_11->nMtMaxCkpt;
  }

  return 0;
 syntax_error:
  FUNC_6("syntax error at: \"%s\"\n", VAR_17);
  return 1;
}
