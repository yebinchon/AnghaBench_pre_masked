
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct seama_seal_header {int metasize; } ;
typedef int hdr ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,...) ;
 size_t FUNC_4 (struct seama_seal_header*,int,int,int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int VAR_5 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int,char**) ;
 char* VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_8(int VAR_9, char **VAR_10) {
 FILE *VAR_11;
 FILE *VAR_12;
 struct seama_seal_header VAR_13;
 size_t VAR_14;
 uint16_t VAR_15;
 int VAR_16 = 0;

 if (VAR_9 < 3) {
  FUNC_3(VAR_8, "No Seama file passed\n");
  VAR_16 = -VAR_1;
  goto out;
 }
 VAR_7 = VAR_10[2];

 VAR_5 = 3;
 FUNC_7(VAR_9, VAR_10);
 if (VAR_4 < 0) {
  FUNC_3(VAR_8, "No entity specified\n");
  VAR_16 = -VAR_1;
  goto out;
 } else if (!VAR_6) {
  FUNC_3(VAR_8, "No output file specified\n");
  VAR_16 = -VAR_1;
  goto out;
 }

 VAR_11 = FUNC_2(VAR_7, "r");
 if (!VAR_11) {
  FUNC_3(VAR_8, "Couldn't open %s\n", VAR_7);
  VAR_16 = -VAR_0;
  goto out;
 }

 VAR_12 = FUNC_2(VAR_6, "w");
 if (!VAR_12) {
  FUNC_3(VAR_8, "Couldn't open %s\n", VAR_6);
  VAR_16 = -VAR_0;
  goto err_close_seama;
 }

 VAR_14 = FUNC_4(&VAR_13, 1, sizeof(VAR_13), VAR_11);
 if (VAR_14 != sizeof(VAR_13)) {
  FUNC_3(VAR_8, "Couldn't read %s header\n", VAR_7);
  VAR_16 = -VAR_2;
  goto err_close_out;
 }
 VAR_15 = FUNC_0(VAR_13.metasize);

 FUNC_5(VAR_11, VAR_15, VAR_3);

 FUNC_6(VAR_11, VAR_12);

err_close_out:
 FUNC_1(VAR_12);
err_close_seama:
 FUNC_1(VAR_11);
out:
 return VAR_16;
}
