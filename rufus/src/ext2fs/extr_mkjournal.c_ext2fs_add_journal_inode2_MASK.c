
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct stat {int st_ino; } ;
typedef int jfile ;
typedef int ext2_ino_t ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef int blk_t ;
typedef int blk64_t ;
struct TYPE_8__ {int s_journal_uuid; scalar_t__ s_journal_dev; int s_journal_inum; int s_jnl_blocks; } ;
struct TYPE_7__ {int flags; TYPE_4__* super; int device_name; } ;


 scalar_t__ VAR_0 ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_2 (int ,int*,char*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (int,struct stat*) ;
 scalar_t__ FUNC_7 (int,int ,int*) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (char*,int,...) ;
 int FUNC_10 (char*,char*) ;
 scalar_t__ FUNC_11 (TYPE_1__*,char*,int ,int) ;
 scalar_t__ FUNC_12 (TYPE_1__*,int ,int ,int ,int) ;

errcode_t FUNC_13(ext2_filsys VAR_17, blk_t VAR_18,
        blk64_t VAR_19, int VAR_20)
{
 errcode_t VAR_21;
 ext2_ino_t VAR_22;
 struct stat VAR_23;
 char VAR_24[1024];
 int VAR_25;
 int VAR_26 = -1;

 if (VAR_20 & VAR_9)
  VAR_25 = 0;
 else if ((VAR_21 = FUNC_2(VAR_17->device_name,
          &VAR_25,
          VAR_24, sizeof(VAR_24)-10)))
  return VAR_21;

 if (VAR_25 & VAR_7) {



  FUNC_10(VAR_24, "/.journal");
  if ((VAR_26 = FUNC_9(VAR_24, VAR_11|VAR_13, 0600)) < 0)
   return VAR_16;






  VAR_20 &= ~VAR_8;

  if ((VAR_21 = FUNC_11(VAR_17, VAR_24, VAR_18, VAR_20)))
   goto errout;


  if (FUNC_6(VAR_26, &VAR_23) < 0) {
   VAR_21 = VAR_16;
   goto errout;
  }
  if (VAR_21) {
   VAR_21 = VAR_16;
   goto errout;
  }

  if (FUNC_1(VAR_26) < 0) {
   VAR_21 = VAR_16;
   VAR_26 = -1;
   goto errout;
  }
  VAR_22 = VAR_23.st_ino;
  FUNC_8(VAR_17->super->s_jnl_blocks, 0,
         sizeof(VAR_17->super->s_jnl_blocks));
 } else {
  if ((VAR_25 & VAR_6) &&
      !(VAR_17->flags & VAR_1)) {
   VAR_21 = VAR_0;
   goto errout;
  }
  VAR_22 = VAR_5;
  if ((VAR_21 = FUNC_12(VAR_17, VAR_22,
        VAR_18, VAR_19, VAR_20)))
   return VAR_21;
 }

 VAR_17->super->s_journal_inum = VAR_22;
 VAR_17->super->s_journal_dev = 0;
 FUNC_8(VAR_17->super->s_journal_uuid, 0,
        sizeof(VAR_17->super->s_journal_uuid));
 FUNC_4(VAR_17->super);

 FUNC_3(VAR_17);
 return 0;
errout:
 if (VAR_26 >= 0)
  FUNC_1(VAR_26);
 return VAR_21;
}
