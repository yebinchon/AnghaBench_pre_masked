
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trx_header {size_t* offset; size_t length; } ;
typedef scalar_t__ ssize_t ;
typedef int hdr ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *,size_t,int ) ;
 int FUNC_4 (int,char**,char*) ;
 char* VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int *,size_t,int) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int *,struct trx_header*) ;
 int VAR_7 ;
 int FUNC_9 (char*,int *,int ) ;
 char* VAR_8 ;

__attribute__((used)) static int FUNC_10(int VAR_9, char **VAR_10) {
 FILE *VAR_11;
 struct trx_header VAR_12 = {};
 ssize_t VAR_13;
 size_t VAR_14 = 0;
 size_t VAR_15 = sizeof(VAR_12);
 int VAR_16;
 int VAR_17 = 0;

 if (VAR_9 < 3) {
  FUNC_2(VAR_7, "No TRX file passed\n");
  VAR_17 = -VAR_1;
  goto out;
 }
 VAR_8 = VAR_10[2];

 VAR_11 = FUNC_1(VAR_8, "w+");
 if (!VAR_11) {
  FUNC_2(VAR_7, "Couldn't open %s\n", VAR_8);
  VAR_17 = -VAR_0;
  goto out;
 }
 FUNC_3(VAR_11, VAR_15, VAR_3);

 VAR_6 = 3;
 while ((VAR_16 = FUNC_4(VAR_9, VAR_10, "f:A:a:b:")) != -1) {
  switch (VAR_16) {
  case 'f':
   if (VAR_14 >= VAR_4) {
    VAR_17 = -VAR_2;
    FUNC_2(VAR_7, "Reached TRX partitions limit, no place for %s\n", VAR_5);
    goto err_close;
   }

   VAR_13 = FUNC_6(VAR_11, VAR_5);
   if (VAR_13 < 0) {
    FUNC_2(VAR_7, "Failed to append file %s\n", VAR_5);
   } else {
    VAR_12.offset[VAR_14++] = VAR_15;
    VAR_15 += VAR_13;
   }

   VAR_13 = FUNC_5(VAR_11, VAR_15, 4);
   if (VAR_13 < 0)
    FUNC_2(VAR_7, "Failed to append zeros\n");
   else
    VAR_15 += VAR_13;

   break;
  case 'A':
   VAR_13 = FUNC_6(VAR_11, VAR_5);
   if (VAR_13 < 0) {
    FUNC_2(VAR_7, "Failed to append file %s\n", VAR_5);
   } else {
    VAR_15 += VAR_13;
   }

   VAR_13 = FUNC_5(VAR_11, VAR_15, 4);
   if (VAR_13 < 0)
    FUNC_2(VAR_7, "Failed to append zeros\n");
   else
    VAR_15 += VAR_13;
   break;
  case 'a':
   VAR_13 = FUNC_5(VAR_11, VAR_15, FUNC_9(VAR_5, ((void*)0), 0));
   if (VAR_13 < 0)
    FUNC_2(VAR_7, "Failed to append zeros\n");
   else
    VAR_15 += VAR_13;
   break;
  case 'b':
   VAR_13 = FUNC_9(VAR_5, ((void*)0), 0) - VAR_15;
   if (VAR_13 < 0) {
    FUNC_2(VAR_7, "Current TRX length is 0x%zx, can't pad it with zeros to 0x%lx\n", VAR_15, FUNC_9(VAR_5, ((void*)0), 0));
   } else {
    VAR_13 = FUNC_7(VAR_11, VAR_13);
    if (VAR_13 < 0)
     FUNC_2(VAR_7, "Failed to append zeros\n");
    else
     VAR_15 += VAR_13;
   }
   break;
  }
  if (VAR_17)
   break;
 }

 VAR_13 = FUNC_5(VAR_11, VAR_15, 0x1000);
 if (VAR_13 < 0)
  FUNC_2(VAR_7, "Failed to append zeros\n");
 else
  VAR_15 += VAR_13;

 VAR_12.length = VAR_15;
 FUNC_8(VAR_11, &VAR_12);
err_close:
 FUNC_0(VAR_11);
out:
 return VAR_17;
}
