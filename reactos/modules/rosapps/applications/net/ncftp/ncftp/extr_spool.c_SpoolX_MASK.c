
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
typedef int spathname2 ;
typedef int spathname ;
typedef int sdir ;
typedef int mode_t ;
typedef int ldir2 ;
struct TYPE_2__ {char* defaultAnonPassword; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char*,int,char const,int ,int ) ;
 int FUNC_3 (char*,char const* const,int ,int) ;
 char* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 (int *,char*,...) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 scalar_t__ FUNC_11 (char const* const,char*) ;
 int FUNC_12 (char const* const) ;
 int FUNC_13 (int) ;
 int FUNC_14 (char*) ;

int
FUNC_15(
 const char *const VAR_7,
 const char *const VAR_8,
 const char *const VAR_9,
 const char *const VAR_10,
 const char *const VAR_11,
 const char *const VAR_12,
 const char *const VAR_13,
 const unsigned int VAR_14,
 const char *const VAR_15,
 const char *const VAR_16,
 int VAR_17,
 int VAR_18,
 int VAR_19,
 int VAR_20,
 const char *const VAR_21,
 const char *const VAR_22,
 const char *const VAR_23,
 time_t VAR_24)
{
 char VAR_25[256];
 char VAR_26[160];
 char VAR_27[256];
 char VAR_28[256];
 char VAR_29[256];
 FILE *VAR_30;


 mode_t VAR_31;


 if (FUNC_1(VAR_25, sizeof(VAR_25)) < 0)
  return (-1);

 VAR_2++;
 FUNC_2(VAR_25, VAR_28, sizeof(VAR_28), VAR_7[0], VAR_2, VAR_24);
 FUNC_2(VAR_25, VAR_27, sizeof(VAR_27), 'z', VAR_2, VAR_24);



 VAR_31 = FUNC_13(077);
 VAR_30 = FUNC_6(VAR_27, VAR_0);
 (void) FUNC_13(VAR_31);

 if (VAR_30 == ((void*)0))
  return (-1);

 if (FUNC_7(VAR_30, "# This is a NcFTP spool file entry.\n# Run the \"ncftpbatch\" program to process the spool directory.\n#\n") < 0)
  goto err;
 if (FUNC_7(VAR_30, "op=%s\n", VAR_7) < 0)
  goto err;
 if (FUNC_7(VAR_30, "hostname=%s\n", VAR_12) < 0)
  goto err;
 if ((VAR_13 != ((void*)0)) && (VAR_13[0] != '\0') && (FUNC_7(VAR_30, "host-ip=%s\n", VAR_13) < 0))
  goto err;
 if ((VAR_14 > 0) && (VAR_14 != (unsigned int) VAR_4) && (FUNC_7(VAR_30, "port=%u\n", VAR_14) < 0))
  goto err;
 if ((VAR_15 != ((void*)0)) && (VAR_15[0] != '\0') && (FUNC_11(VAR_15, "anonymous") != 0) && (FUNC_7(VAR_30, "user=%s\n", VAR_15) < 0))
  goto err;
 if ((FUNC_11(VAR_15, "anonymous") != 0) && (VAR_16 != ((void*)0)) && (VAR_16[0] != '\0')) {
  (void) FUNC_8(VAR_26, VAR_5, VAR_6);
  FUNC_3(VAR_26 + VAR_6, VAR_16, FUNC_12(VAR_16), 1);
  if (FUNC_7(VAR_30, "pass=%s\n", VAR_26) < 0)
   goto err;
 } else if ((FUNC_11(VAR_15, "anonymous") == 0) && (VAR_1.defaultAnonPassword[0] != '\0')) {
  if (FUNC_7(VAR_30, "anon-pass=%s\n", VAR_1.defaultAnonPassword) < 0)
   goto err;
 }
 if (FUNC_7(VAR_30, "xtype=%c\n", VAR_17) < 0)
  goto err;
 if ((VAR_18 != 0) && (FUNC_7(VAR_30, "recursive=%s\n", FUNC_4(VAR_18)) < 0))
  goto err;
 if ((VAR_19 != 0) && (FUNC_7(VAR_30, "delete=%s\n", FUNC_4(VAR_19)) < 0))
  goto err;
 if (FUNC_7(VAR_30, "passive=%d\n", VAR_20) < 0)
  goto err;
 if (FUNC_7(VAR_30, "remote-dir=%s\n", VAR_9) < 0)
  goto err;
 if ((VAR_11 == ((void*)0)) || (VAR_11[0] == '\0') || (FUNC_11(VAR_11, ".") == 0)) {

  FUNC_0(VAR_29, sizeof(VAR_29));
  if (FUNC_7(VAR_30, "local-dir=%s\n", VAR_29) < 0)
   goto err;
 } else {
  if (FUNC_7(VAR_30, "local-dir=%s\n", VAR_11) < 0)
   goto err;
 }
 if (FUNC_7(VAR_30, "remote-file=%s\n", VAR_8) < 0)
  goto err;
 if (FUNC_7(VAR_30, "local-file=%s\n", VAR_10) < 0)
  goto err;
 if ((VAR_21 != ((void*)0)) && (VAR_21[0] != '\0') && (FUNC_7(VAR_30, "pre-command=%s\n", VAR_21) < 0))
  goto err;
 if ((VAR_22 != ((void*)0)) && (VAR_22[0] != '\0') && (FUNC_7(VAR_30, "per-file-command=%s\n", VAR_22) < 0))
  goto err;
 if ((VAR_23 != ((void*)0)) && (VAR_23[0] != '\0') && (FUNC_7(VAR_30, "post-command=%s\n", VAR_23) < 0))
  goto err;

 if (FUNC_5(VAR_30) < 0)
  goto err2;


 if (FUNC_10(VAR_27, VAR_28) < 0) {
  FUNC_9("rename spoolfile failed");
  goto err3;
 }
 VAR_3++;
 return (0);

err:
 (void) FUNC_5(VAR_30);
err2:
 FUNC_9("write to spool file failed");
err3:
 (void) FUNC_14(VAR_27);
 return (-1);
}
