
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct safeloader_header {int dummy; } ;
typedef struct safeloader_header uint8_t ;
typedef int hdr ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,...) ;
 size_t FUNC_3 (struct safeloader_header*,int,int,int *) ;
 int FUNC_4 (int *,char*,char*,int*,int*) ;
 int FUNC_5 (int *,int,int ) ;
 size_t FUNC_6 (struct safeloader_header*,int,size_t,int *) ;
 int VAR_6 ;
 int FUNC_7 (int,char**) ;
 int FUNC_8 (int,int) ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_9 (char*,char*) ;

__attribute__((used)) static int FUNC_10(int VAR_11, char **VAR_12) {
 FILE *VAR_13;
 FILE *VAR_14;
 struct safeloader_header VAR_15;
 size_t VAR_16;
 char VAR_17[32];
 int VAR_18, VAR_19;
 int VAR_20 = 0;

 if (VAR_11 < 3) {
  FUNC_2(VAR_10, "No SafeLoader file passed\n");
  VAR_20 = -VAR_1;
  goto out;
 }
 VAR_9 = VAR_12[2];

 VAR_6 = 3;
 FUNC_7(VAR_11, VAR_12);
 if (!VAR_8) {
  FUNC_2(VAR_10, "No partition name specified\n");
  VAR_20 = -VAR_1;
  goto out;
 } else if (!VAR_7) {
  FUNC_2(VAR_10, "No output file specified\n");
  VAR_20 = -VAR_1;
  goto out;
 }

 VAR_13 = FUNC_1(VAR_9, "r");
 if (!VAR_13) {
  FUNC_2(VAR_10, "Couldn't open %s\n", VAR_9);
  VAR_20 = -VAR_0;
  goto out;
 }

 VAR_14 = FUNC_1(VAR_7, "w");
 if (!VAR_14) {
  FUNC_2(VAR_10, "Couldn't open %s\n", VAR_7);
  VAR_20 = -VAR_0;
  goto err_close_safeloader;
 }

 VAR_16 = FUNC_3(&VAR_15, 1, sizeof(VAR_15), VAR_13);
 if (VAR_16 != sizeof(VAR_15)) {
  FUNC_2(VAR_10, "Couldn't read %s header\n", VAR_9);
  VAR_20 = -VAR_2;
  goto err_close_out;
 }


 FUNC_5(VAR_13, 0x1000, VAR_4);

 VAR_20 = -VAR_3;
 while (FUNC_4(VAR_13, "fwup-ptn %s base 0x%x size 0x%x\t\r\n", VAR_17, &VAR_18, &VAR_19) == 3) {
  uint8_t VAR_21[1024];

  if (FUNC_9(VAR_17, VAR_8))
   continue;

  VAR_20 = 0;

  FUNC_5(VAR_13, sizeof(VAR_15) + 0x1000 + VAR_18, VAR_5);

  while ((VAR_16 = FUNC_3(VAR_21, 1, FUNC_8(sizeof(VAR_21), VAR_19), VAR_13)) > 0) {
   if (FUNC_6(VAR_21, 1, VAR_16, VAR_14) != VAR_16) {
    FUNC_2(VAR_10, "Couldn't write %zu B to %s\n", VAR_16, VAR_7);
    VAR_20 = -VAR_2;
    break;
   }
   VAR_19 -= VAR_16;
  }

  if (VAR_19) {
   FUNC_2(VAR_10, "Couldn't extract whole partition %s from %s (%d B left)\n", VAR_8, VAR_9, VAR_19);
   VAR_20 = -VAR_2;
  }

  break;
 }

err_close_out:
 FUNC_0(VAR_14);
err_close_safeloader:
 FUNC_0(VAR_13);
out:
 return VAR_20;
}
