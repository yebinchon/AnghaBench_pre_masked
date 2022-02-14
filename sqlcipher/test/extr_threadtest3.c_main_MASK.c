
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int aTest ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void FUNC_7 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

int FUNC_8(int VAR_19, char **VAR_20){
  struct ThreadTest {
    void (*xTest)(int);
    const char *zTest;
    int nMs;
  } VAR_21[] = {
    { VAR_14, "walthread1", 20000 },
    { VAR_15, "walthread2", 20000 },
    { VAR_16, "walthread3", 20000 },
    { VAR_17, "walthread4", 20000 },
    { VAR_18, "walthread5", 1000 },

    { VAR_2, "cgt_pager_1", 0 },
    { VAR_6, "dynamic_triggers", 20000 },

    { VAR_3, "checkpoint_starvation_1", 10000 },
    { VAR_4, "checkpoint_starvation_2", 10000 },

    { VAR_5, "create_drop_index_1", 10000 },
    { VAR_7, "lookaside1", 10000 },
    { VAR_13, "vacuum1", 10000 },
    { VAR_11, "stress1", 10000 },
    { VAR_12, "stress2", 60000 },
  };
  static char *VAR_22[] = { 0, "*", 0 };
  int VAR_23, VAR_24;
  int VAR_25 = 0;

  FUNC_3(VAR_0);
  if( VAR_19<2 ){
    VAR_19 = 2;
    VAR_20 = VAR_22;
  }




  for(VAR_24=1; VAR_24<VAR_19; VAR_24++){
    const char *VAR_26 = VAR_20[VAR_24];
    if( VAR_26[0]=='-' ){
      if( FUNC_6(VAR_26, "-multiplexor")==0 ){

        int VAR_27 = FUNC_4(0, 1);
        if( VAR_27!=VAR_1 ){
          FUNC_1(VAR_9, "Failed to install multiplexor VFS (%d)\n", VAR_27);
          return 253;
        }
      }
      else {
        goto usage;
      }

      continue;
    }

    for(VAR_23=0; VAR_23<sizeof(VAR_21)/sizeof(VAR_21[0]); VAR_23++){
      if( FUNC_5(VAR_26, VAR_21[VAR_23].zTest)==0 ) break;
    }
    if( VAR_23>=sizeof(VAR_21)/sizeof(VAR_21[0]) ) goto usage;
  }

  for(VAR_24=1; VAR_24<VAR_19; VAR_24++){
    if( VAR_20[VAR_24][0]=='-' ) continue;
    for(VAR_23=0; VAR_23<sizeof(VAR_21)/sizeof(VAR_21[0]); VAR_23++){
      char const *VAR_28 = VAR_21[VAR_23].zTest;
      if( FUNC_5(VAR_20[VAR_24],VAR_28)==0 ){
        FUNC_2("Running %s for %d seconds...\n", VAR_28, VAR_21[VAR_23].nMs/1000);
        FUNC_0(VAR_10);
        VAR_21[VAR_23].xTest(VAR_21[VAR_23].nMs);
        VAR_25++;
      }
    }
  }
  if( VAR_25==0 ) goto usage;

  FUNC_2("%d errors out of %d tests\n", VAR_8, VAR_25);
  return (VAR_8>0 ? 255 : 0);

 usage:
  FUNC_2("Usage: %s [-multiplexor] [testname|testprefix*]...\n", VAR_20[0]);
  FUNC_2("Available tests are:\n");
  for(VAR_23=0; VAR_23<sizeof(VAR_21)/sizeof(VAR_21[0]); VAR_23++){
    FUNC_2("   %s\n", VAR_21[VAR_23].zTest);
  }

  return 254;
}
