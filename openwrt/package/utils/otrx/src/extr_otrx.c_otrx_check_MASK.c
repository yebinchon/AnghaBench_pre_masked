
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trx_header {int version; int crc32; int length; int magic; } ;
typedef struct trx_header uint8_t ;
typedef int uint32_t ;
typedef int hdr ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,...) ;
 size_t FUNC_3 (struct trx_header*,int,int,int *) ;
 int FUNC_4 (int *,scalar_t__,int ) ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int FUNC_6 (int,char**) ;
 int FUNC_7 (int,struct trx_header*,size_t) ;
 int FUNC_8 (int,size_t) ;
 int FUNC_9 (char*,int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 char* VAR_9 ;

__attribute__((used)) static int FUNC_10(int VAR_10, char **VAR_11) {
 FILE *VAR_12;
 struct trx_header VAR_13;
 size_t VAR_14, VAR_15;
 uint8_t VAR_16[1024];
 uint32_t VAR_17;
 int VAR_18 = 0;

 if (VAR_10 < 3) {
  FUNC_2(VAR_7, "No TRX file passed\n");
  VAR_18 = -VAR_1;
  goto out;
 }
 VAR_9 = VAR_11[2];

 VAR_6 = 3;
 FUNC_6(VAR_10, VAR_11);

 VAR_12 = FUNC_1(VAR_9, "r");
 if (!VAR_12) {
  FUNC_2(VAR_7, "Couldn't open %s\n", VAR_9);
  VAR_18 = -VAR_0;
  goto out;
 }

 FUNC_4(VAR_12, VAR_8, VAR_3);
 VAR_14 = FUNC_3(&VAR_13, 1, sizeof(VAR_13), VAR_12);
 if (VAR_14 != sizeof(VAR_13)) {
  FUNC_2(VAR_7, "Couldn't read %s header\n", VAR_9);
  VAR_18 = -VAR_2;
  goto err_close;
 }

 if (FUNC_5(VAR_13.magic) != VAR_5) {
  FUNC_2(VAR_7, "Invalid TRX magic: 0x%08x\n", FUNC_5(VAR_13.magic));
  VAR_18 = -VAR_1;
  goto err_close;
 }

 VAR_15 = FUNC_5(VAR_13.length);
 if (VAR_15 < sizeof(VAR_13)) {
  FUNC_2(VAR_7, "Length read from TRX too low (%zu B)\n", VAR_15);
  VAR_18 = -VAR_1;
  goto err_close;
 }

 VAR_17 = 0xffffffff;
 FUNC_4(VAR_12, VAR_8 + VAR_4, VAR_3);
 VAR_15 -= VAR_4;
 while ((VAR_14 = FUNC_3(VAR_16, 1, FUNC_8(sizeof(VAR_16), VAR_15), VAR_12)) > 0) {
  VAR_17 = FUNC_7(VAR_17, VAR_16, VAR_14);
  VAR_15 -= VAR_14;
 }

 if (VAR_15) {
  FUNC_2(VAR_7, "Couldn't read last %zd B of data from %s\n", VAR_15, VAR_9);
  VAR_18 = -VAR_2;
  goto err_close;
 }

 if (VAR_17 != FUNC_5(VAR_13.crc32)) {
  FUNC_2(VAR_7, "Invalid data crc32: 0x%08x instead of 0x%08x\n", VAR_17, FUNC_5(VAR_13.crc32));
  VAR_18 = -VAR_1;
  goto err_close;
 }

 FUNC_9("Found a valid TRX version %d\n", FUNC_5(VAR_13.version));

err_close:
 FUNC_0(VAR_12);
out:
 return VAR_18;
}
