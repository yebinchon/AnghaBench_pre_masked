
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
struct TYPE_3__ {scalar_t__ st_uid; scalar_t__ st_gid; int st_mode; int st_ino; int st_size; int st_atime; int st_mtime; int st_ctime; int st_dev; int st_nlink; int st_rdev; int st_blksize; int st_blocks; } ;
typedef TYPE_1__ zend_stat_t ;
typedef int zend_long ;
typedef scalar_t__ gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;

 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__*) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int,scalar_t__*) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (int *,int ,char*,...) ;
 scalar_t__ FUNC_14 (int,int,int ) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (int ,char*,int ,int *) ;

__attribute__((used)) static void FUNC_18(zend_stat_t *VAR_14, int VAR_15, zval *VAR_16)
{
 zval VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23,
   VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
 int VAR_30=VAR_6, VAR_31=VAR_9, VAR_32=VAR_12;
 char *VAR_33[13] = {
  "dev", "ino", "mode", "nlink", "uid", "gid", "rdev",
  "size", "atime", "mtime", "ctime", "blksize", "blocks"
 };

 if (VAR_15 >= 138 && VAR_15 <= 137) {
  if(VAR_14->st_uid==FUNC_12()) {
   VAR_30=VAR_7;
   VAR_31=VAR_10;
   VAR_32=VAR_13;
  } else if(VAR_14->st_gid==FUNC_10()) {
   VAR_30=VAR_5;
   VAR_31=VAR_8;
   VAR_32=VAR_11;
  } else {
   int VAR_34, VAR_35, VAR_36;
   gid_t *VAR_37;

   VAR_34 = FUNC_11(0, ((void*)0));
   if(VAR_34 > 0) {
    VAR_37=(gid_t *)FUNC_14(VAR_34, sizeof(gid_t), 0);
    VAR_35=FUNC_11(VAR_34, VAR_37);
    for(VAR_36=0;VAR_36<VAR_35;++VAR_36){
     if(VAR_14->st_gid==VAR_37[VAR_36]) {
      VAR_30=VAR_5;
      VAR_31=VAR_8;
      VAR_32=VAR_11;
      break;
     }
    }
    FUNC_9(VAR_37);
   }
  }
 }

 switch (VAR_15) {
 case 133:
  FUNC_1((zend_long)VAR_14->st_mode);
 case 143:
  FUNC_1((zend_long)VAR_14->st_ino);
 case 132:
  FUNC_1((zend_long)VAR_14->st_size);
 case 134:
  FUNC_1((zend_long)VAR_14->st_uid);
 case 144:
  FUNC_1((zend_long)VAR_14->st_gid);
 case 147:
  FUNC_1((zend_long)VAR_14->st_atime);
 case 135:
  FUNC_1((zend_long)VAR_14->st_mtime);
 case 146:
  FUNC_1((zend_long)VAR_14->st_ctime);
 case 130:
  if (FUNC_4(VAR_14->st_mode)) {
   FUNC_2("link");
  }
  switch(VAR_14->st_mode & VAR_4) {
  case 129: FUNC_2("dir");
  case 128: FUNC_2("file");
  }
  FUNC_13(((void*)0), VAR_0, "Unknown file type (%u)", VAR_14->st_mode & VAR_4);
  FUNC_2("unknown");
 case 138:
  FUNC_0((VAR_14->st_mode & VAR_31) != 0);
 case 139:
  FUNC_0((VAR_14->st_mode&VAR_30)!=0);
 case 137:
  FUNC_0((VAR_14->st_mode&VAR_32)!=0 && !FUNC_3(VAR_14->st_mode));
 case 141:
  FUNC_0(FUNC_5(VAR_14->st_mode));
 case 142:
  FUNC_0(FUNC_3(VAR_14->st_mode));
 case 140:
  FUNC_0(FUNC_4(VAR_14->st_mode));
 case 145:
  VAR_3;
 case 136:

 case 131:
  FUNC_8(VAR_16);

  FUNC_6(&VAR_17, VAR_14->st_dev);
  FUNC_6(&VAR_18, VAR_14->st_ino);
  FUNC_6(&VAR_19, VAR_14->st_mode);
  FUNC_6(&VAR_20, VAR_14->st_nlink);
  FUNC_6(&VAR_21, VAR_14->st_uid);
  FUNC_6(&VAR_22, VAR_14->st_gid);



  FUNC_6(&VAR_23, -1);

  FUNC_6(&VAR_24, VAR_14->st_size);
  FUNC_6(&VAR_25, VAR_14->st_atime);
  FUNC_6(&VAR_26, VAR_14->st_mtime);
  FUNC_6(&VAR_27, VAR_14->st_ctime);



  FUNC_6(&VAR_28,-1);




  FUNC_6(&VAR_29,-1);


  FUNC_16(FUNC_7(VAR_16), &VAR_17);
  FUNC_16(FUNC_7(VAR_16), &VAR_18);
  FUNC_16(FUNC_7(VAR_16), &VAR_19);
  FUNC_16(FUNC_7(VAR_16), &VAR_20);
  FUNC_16(FUNC_7(VAR_16), &VAR_21);
  FUNC_16(FUNC_7(VAR_16), &VAR_22);

  FUNC_16(FUNC_7(VAR_16), &VAR_23);
  FUNC_16(FUNC_7(VAR_16), &VAR_24);
  FUNC_16(FUNC_7(VAR_16), &VAR_25);
  FUNC_16(FUNC_7(VAR_16), &VAR_26);
  FUNC_16(FUNC_7(VAR_16), &VAR_27);
  FUNC_16(FUNC_7(VAR_16), &VAR_28);
  FUNC_16(FUNC_7(VAR_16), &VAR_29);


  FUNC_17(FUNC_7(VAR_16), VAR_33[0], FUNC_15(VAR_33[0]), &VAR_17);
  FUNC_17(FUNC_7(VAR_16), VAR_33[1], FUNC_15(VAR_33[1]), &VAR_18);
  FUNC_17(FUNC_7(VAR_16), VAR_33[2], FUNC_15(VAR_33[2]), &VAR_19);
  FUNC_17(FUNC_7(VAR_16), VAR_33[3], FUNC_15(VAR_33[3]), &VAR_20);
  FUNC_17(FUNC_7(VAR_16), VAR_33[4], FUNC_15(VAR_33[4]), &VAR_21);
  FUNC_17(FUNC_7(VAR_16), VAR_33[5], FUNC_15(VAR_33[5]), &VAR_22);
  FUNC_17(FUNC_7(VAR_16), VAR_33[6], FUNC_15(VAR_33[6]), &VAR_23);
  FUNC_17(FUNC_7(VAR_16), VAR_33[7], FUNC_15(VAR_33[7]), &VAR_24);
  FUNC_17(FUNC_7(VAR_16), VAR_33[8], FUNC_15(VAR_33[8]), &VAR_25);
  FUNC_17(FUNC_7(VAR_16), VAR_33[9], FUNC_15(VAR_33[9]), &VAR_26);
  FUNC_17(FUNC_7(VAR_16), VAR_33[10], FUNC_15(VAR_33[10]), &VAR_27);
  FUNC_17(FUNC_7(VAR_16), VAR_33[11], FUNC_15(VAR_33[11]), &VAR_28);
  FUNC_17(FUNC_7(VAR_16), VAR_33[12], FUNC_15(VAR_33[12]), &VAR_29);

  return;
 }
 FUNC_13(((void*)0), VAR_1, "Didn't understand stat call");
 VAR_2;
}
