
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seama_seal_header {int magic; int imagesize; int metasize; } ;
typedef struct seama_seal_header uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int hdr ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,...) ;
 size_t FUNC_5 (struct seama_seal_header*,int,int,int *) ;
 int VAR_5 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,char**) ;
 int FUNC_8 (char*,...) ;
 char* VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(int VAR_8, char **VAR_9) {
 FILE *VAR_10;
 struct seama_seal_header VAR_11;
 size_t VAR_12;
 uint16_t VAR_13;
 uint32_t VAR_14;
 uint8_t VAR_15[1024];
 int VAR_16 = 0;

 if (VAR_8 < 3) {
  FUNC_4(VAR_7, "No Seama file passed\n");
  VAR_16 = -VAR_1;
  goto out;
 }
 VAR_6 = VAR_9[2];

 VAR_5 = 3;
 FUNC_7(VAR_8, VAR_9);

 VAR_10 = FUNC_3(VAR_6, "r");
 if (!VAR_10) {
  FUNC_4(VAR_7, "Couldn't open %s\n", VAR_6);
  VAR_16 = -VAR_0;
  goto out;
 }

 VAR_12 = FUNC_5(&VAR_11, 1, sizeof(VAR_11), VAR_10);
 if (VAR_12 != sizeof(VAR_11)) {
  FUNC_4(VAR_7, "Couldn't read %s header\n", VAR_6);
  VAR_16 = -VAR_2;
  goto err_close;
 }
 VAR_13 = FUNC_0(VAR_11.metasize);
 VAR_14 = FUNC_1(VAR_11.imagesize);

 if (FUNC_1(VAR_11.magic) != VAR_3) {
  FUNC_4(VAR_7, "Invalid Seama magic: 0x%08x\n", FUNC_1(VAR_11.magic));
  VAR_16 = -VAR_1;
  goto err_close;
 }

 if (VAR_13 >= sizeof(VAR_15)) {
  FUNC_4(VAR_7, "Too small buffer (%zu B) to read all meta info (%d B)\n", sizeof(VAR_15), VAR_13);
  VAR_16 = -VAR_1;
  goto err_close;
 }

 if (VAR_14) {
  FUNC_4(VAR_7, "Invalid Seama image size: 0x%08x (should be 0)\n", VAR_14);
  VAR_16 = -VAR_1;
  goto err_close;
 }

 VAR_12 = FUNC_5(VAR_15, 1, VAR_13, VAR_10);
 if (VAR_12 != VAR_13) {
  FUNC_4(VAR_7, "Couldn't read %d B of meta\n", VAR_13);
  VAR_16 = -VAR_2;
  goto err_close;
 }

 if (VAR_4 < 0) {
  char *VAR_17, *VAR_18;

  FUNC_8("Meta size:\t%d\n", VAR_13);
  FUNC_8("Image size:\t%d\n", VAR_14);

  VAR_17 = (char *)&VAR_15[VAR_13 - 1];
  *VAR_17 = '\0';
  for (VAR_18 = (char *)VAR_15; VAR_18 < VAR_17 && FUNC_9(VAR_18); VAR_18 += FUNC_9(VAR_18) + 1) {
   FUNC_8("Meta entry:\t%s\n", VAR_18);
  }
 }

 FUNC_6(VAR_10);

err_close:
 FUNC_2(VAR_10);
out:
 return VAR_16;
}
