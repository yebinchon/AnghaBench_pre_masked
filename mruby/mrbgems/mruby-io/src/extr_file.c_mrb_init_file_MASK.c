
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RClass {int dummy; } ;
typedef int mrb_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (struct RClass*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct RClass* FUNC_6 (int *,char*) ;
 struct RClass* FUNC_7 (int *,char*,struct RClass*) ;
 int FUNC_8 (int *,struct RClass*,char*,int ,int) ;
 int FUNC_9 (int *,struct RClass*,char*,int ) ;
 int FUNC_10 (int *,struct RClass*,char*,int ,int) ;
 struct RClass* FUNC_11 (int *,struct RClass*,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int *,int ) ;

void
FUNC_15(mrb_state *VAR_22)
{
  struct RClass *VAR_23, *VAR_24, *VAR_25;

  VAR_23 = FUNC_6(VAR_22, "IO");
  VAR_24 = FUNC_7(VAR_22, "File", VAR_23);
  FUNC_5(VAR_24, VAR_6);
  FUNC_8(VAR_22, VAR_24, "umask", VAR_20, FUNC_2(1));
  FUNC_8(VAR_22, VAR_24, "delete", VAR_21, FUNC_0());
  FUNC_8(VAR_22, VAR_24, "unlink", VAR_21, FUNC_0());
  FUNC_8(VAR_22, VAR_24, "rename", VAR_18, FUNC_3(2));
  FUNC_8(VAR_22, VAR_24, "symlink", VAR_19, FUNC_3(2));
  FUNC_8(VAR_22, VAR_24, "chmod", VAR_16, FUNC_3(1) | FUNC_4());
  FUNC_8(VAR_22, VAR_24, "readlink", VAR_17, FUNC_3(1));

  FUNC_8(VAR_22, VAR_24, "dirname", VAR_12, FUNC_3(1));
  FUNC_8(VAR_22, VAR_24, "basename", VAR_11, FUNC_3(1));
  FUNC_8(VAR_22, VAR_24, "realpath", VAR_15, FUNC_3(1)|FUNC_2(1));
  FUNC_8(VAR_22, VAR_24, "_getwd", VAR_10, FUNC_1());
  FUNC_8(VAR_22, VAR_24, "_gethome", VAR_9, FUNC_2(1));

  FUNC_10(VAR_22, VAR_24, "flock", VAR_13, FUNC_3(1));
  FUNC_10(VAR_22, VAR_24, "mtime", VAR_14, FUNC_1());

  VAR_25 = FUNC_11(VAR_22, VAR_24, "Constants");
  FUNC_9(VAR_22, VAR_25, "LOCK_SH", FUNC_12(VAR_4));
  FUNC_9(VAR_22, VAR_25, "LOCK_EX", FUNC_12(VAR_2));
  FUNC_9(VAR_22, VAR_25, "LOCK_UN", FUNC_12(VAR_5));
  FUNC_9(VAR_22, VAR_25, "LOCK_NB", FUNC_12(VAR_3));
  FUNC_9(VAR_22, VAR_25, "SEPARATOR", FUNC_14(VAR_22, VAR_1));
  FUNC_9(VAR_22, VAR_25, "PATH_SEPARATOR", FUNC_14(VAR_22, VAR_8));



  FUNC_9(VAR_22, VAR_25, "ALT_SEPARATOR", FUNC_13());

  FUNC_9(VAR_22, VAR_25, "NULL", FUNC_14(VAR_22, VAR_7));

}
