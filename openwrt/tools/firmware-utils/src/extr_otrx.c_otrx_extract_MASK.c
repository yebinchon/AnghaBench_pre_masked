
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trx_header {int * offset; int length; int magic; } ;
typedef int hdr ;
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
 size_t FUNC_3 (struct trx_header*,int,int,int *) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int FUNC_6 (int *,int,size_t,char*) ;
 int FUNC_7 (int,char**) ;
 char** VAR_7 ;
 int FUNC_8 (char*,int,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;

__attribute__((used)) static int FUNC_9(int VAR_11, char **VAR_12) {
 FILE *VAR_13;
 struct trx_header VAR_14;
 size_t VAR_15;
 int VAR_16;
 int VAR_17 = 0;

 if (VAR_11 < 3) {
  FUNC_2(VAR_8, "No TRX file passed\n");
  VAR_17 = -VAR_1;
  goto out;
 }
 VAR_10 = VAR_12[2];

 VAR_6 = 3;
 FUNC_7(VAR_11, VAR_12);

 VAR_13 = FUNC_1(VAR_10, "r");
 if (!VAR_13) {
  FUNC_2(VAR_8, "Couldn't open %s\n", VAR_10);
  VAR_17 = -VAR_0;
  goto out;
 }

 FUNC_4(VAR_13, VAR_9, VAR_3);
 VAR_15 = FUNC_3(&VAR_14, 1, sizeof(VAR_14), VAR_13);
 if (VAR_15 != sizeof(VAR_14)) {
  FUNC_2(VAR_8, "Couldn't read %s header\n", VAR_10);
  VAR_17 = -VAR_2;
  goto err_close;
 }

 if (FUNC_5(VAR_14.magic) != VAR_4) {
  FUNC_2(VAR_8, "Invalid TRX magic: 0x%08x\n", FUNC_5(VAR_14.magic));
  VAR_17 = -VAR_1;
  goto err_close;
 }

 for (VAR_16 = 0; VAR_16 < VAR_5; VAR_16++) {
  size_t VAR_18;

  if (!VAR_7[VAR_16])
   continue;
  if (!VAR_14.offset[VAR_16]) {
   FUNC_8("TRX doesn't contain partition %d, can't extract %s\n", VAR_16 + 1, VAR_7[VAR_16]);
   continue;
  }

  if (VAR_16 + 1 >= VAR_5 || !VAR_14.offset[VAR_16 + 1])
   VAR_18 = FUNC_5(VAR_14.length) - FUNC_5(VAR_14.offset[VAR_16]);
  else
   VAR_18 = FUNC_5(VAR_14.offset[VAR_16 + 1]) - FUNC_5(VAR_14.offset[VAR_16]);

  FUNC_6(VAR_13, VAR_9 + FUNC_5(VAR_14.offset[VAR_16]), VAR_18, VAR_7[VAR_16]);
 }

err_close:
 FUNC_0(VAR_13);
out:
 return VAR_17;
}
