
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*,void*,int) ;
 void* FUNC_4 (int *,int,int ,int ,int,int) ;
 int FUNC_5 (void*,int) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (void**,int,int) ;
 int FUNC_9 (void*,int,int) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (void*,void*,int,int,char*) ;
 int FUNC_12 (void*,void*,int,int,void (*) (char*,char*)) ;

int FUNC_13(char *VAR_6, void (*VAR_7)(char *, char *))
{
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 void *VAR_13, *VAR_14, *VAR_15, *VAR_16;

 FUNC_10("\tDoing %s:\t", VAR_6);

 VAR_10 = FUNC_6("/dev/fb0", VAR_2);
 if (VAR_10 < 0) {
  FUNC_10("\n");
  FUNC_7("Can't open /dev/fb0 now?");
  return 1;
 }

 VAR_15 = FUNC_4(((void*)0), VAR_4, VAR_3, VAR_1,
     VAR_10, 0x0);
 VAR_16 = FUNC_4(((void*)0), VAR_4, VAR_3, VAR_1,
     VAR_10, VAR_4);
 if ((VAR_15 == VAR_0) || (VAR_16 == VAR_0)) {
  FUNC_10("\n");
  FUNC_7("mmap failed");
  FUNC_0(1);
 }

 VAR_11 = FUNC_8(&VAR_13, VAR_4, VAR_4);
 if (VAR_11) {
  FUNC_10("\n");
  return VAR_11;
 }

 VAR_11 = FUNC_8(&VAR_14, VAR_4, VAR_4);
 if (VAR_11) {
  FUNC_10("\n");
  FUNC_2(VAR_13);
  return VAR_11;
 }

 VAR_11 = 0;

 for (VAR_8 = 1; VAR_8 < 16; VAR_8++) {
  VAR_9 = 16;
  VAR_12 = 0;


  FUNC_9(VAR_15, VAR_8, VAR_9);
  FUNC_9(VAR_13, VAR_8, VAR_9);
  FUNC_3(VAR_15, VAR_13, VAR_4);
  FUNC_3(VAR_16, VAR_14, VAR_4);


  FUNC_11(VAR_13, VAR_15, VAR_9, VAR_8, VAR_6);

  VAR_12 |= FUNC_12(VAR_16, VAR_15, VAR_9, VAR_8, VAR_7);
  VAR_12 |= FUNC_12(VAR_14, VAR_13, VAR_9, VAR_8, VAR_7);
  if (VAR_12 && !VAR_5) {
   FUNC_10("FAILED: Got signal");
   VAR_11 = 1;
   break;
  }

  VAR_12 |= FUNC_11(VAR_14, VAR_16, VAR_9, VAR_8, VAR_6);
  if (VAR_12 && !VAR_5) {
   FUNC_10("FAILED: Wrong Data");
   VAR_11 = 1;
   break;
  }
 }

 if (VAR_11 == 0)
  FUNC_10("PASSED");

 FUNC_10("\n");

 FUNC_5(VAR_15, VAR_4);
 FUNC_5(VAR_16, VAR_4);
 FUNC_2(VAR_13);
 FUNC_2(VAR_14);
 FUNC_1(VAR_10);

 return VAR_11;
}
