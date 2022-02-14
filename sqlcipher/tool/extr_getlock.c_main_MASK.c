
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int,int ,scalar_t__,int,char*) ;
 char* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (unsigned char*,char*,int) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,unsigned char*,int) ;
 int VAR_12 ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (char*) ;

int FUNC_11(int VAR_13, char **VAR_14){
  int VAR_15;
  int VAR_16;
  char *VAR_17;
  ssize_t VAR_18;
  int VAR_19;
  int VAR_20;
  unsigned char VAR_21[100];
  int VAR_22 = 0;
  int VAR_23;

  if( VAR_13!=2 ) FUNC_10(VAR_14[0]);
  VAR_15 = FUNC_6(VAR_14[1], VAR_2, 0);
  if( VAR_15<0 ){
    FUNC_1(VAR_12, "cannot open %s\n", VAR_14[1]);
    return 1;
  }


  VAR_18 = FUNC_8(VAR_15, VAR_21, 100);
  if( VAR_18!=100 || FUNC_4(VAR_21, "SQLite format 3",16)!=0 ){
    FUNC_1(VAR_12, "not an SQLite database: %s\n", VAR_14[1]);
    FUNC_0(1);
  }


  if( FUNC_2(VAR_15, VAR_0, VAR_5, VAR_6, "EXCLUSIVE") ){
    return 0;
  }
  VAR_19 = VAR_21[18]==2;
  if( VAR_19==0 ){

    if( FUNC_2(VAR_15, VAR_0, VAR_3, 1, "PENDING") ) return 0;
    if( FUNC_2(VAR_15, VAR_0, VAR_4, 1, "RESERVED") ) return 0;
    if( FUNC_2(VAR_15, VAR_1, VAR_5, VAR_6, "SHARED") ){
      return 0;
    }
  }else{

    VAR_20 = (int)FUNC_9(VAR_14[1]);
    VAR_17 = FUNC_3( VAR_20 + 100 );
    if( VAR_17==0 ){
      FUNC_1(VAR_12, "out of memory\n");
      FUNC_0(1);
    }
    FUNC_5(VAR_17, VAR_14[1], VAR_20);
    FUNC_5(&VAR_17[VAR_20], "-shm", 5);
    VAR_16 = FUNC_6(VAR_17, VAR_2, 0);
    if( VAR_16<0 ){
      FUNC_1(VAR_12, "cannot open %s\n", VAR_17);
      return 1;
    }
    if( FUNC_2(VAR_16, VAR_0, VAR_10, 1, "WAL-RECOVERY") ){
      return 0;
    }
    VAR_22 += FUNC_2(VAR_16, VAR_0, VAR_7, 1, "WAL-CHECKPOINT");
    VAR_22 += FUNC_2(VAR_16, VAR_0, VAR_11, 1, "WAL-WRITE");
    for(VAR_23=0; VAR_23<VAR_9; VAR_23++){
      VAR_22 += FUNC_2(VAR_16, VAR_1, VAR_8+VAR_23, 1, "WAL-READ");
    }
  }
  if( VAR_22==0 ){
    FUNC_7("file is not locked\n");
  }
  return 0;
}
