
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int ,int) ;
 char* FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,char**,char*) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (int ,int) ;
 int VAR_10 ;
 int FUNC_10 (char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;

int FUNC_13(int VAR_13, char **VAR_14)
{
 int VAR_15 = -1;
 int VAR_16;
 int VAR_17;
 int VAR_18 = VAR_2;

 while ((VAR_16 = FUNC_7(VAR_13, VAR_14, "b:f:h")) != -1) {
  switch (VAR_16) {
  case 'b':
   if (VAR_7) {
    FUNC_5(VAR_11, "Already specify %s\n",
     VAR_7);
    VAR_18 = VAR_1;
    goto exit;
   }
   VAR_17 = FUNC_11(VAR_10);
   VAR_7 = FUNC_3(VAR_17 + 2, 1);
   if (!VAR_7) {
    FUNC_10("calloc");
    VAR_18 = VAR_1;
    goto exit;
   }
   FUNC_8(VAR_7, VAR_10, VAR_17);
   VAR_7[VAR_17] = '\n';
   VAR_9 = VAR_0;
   break;
  case 'f':
   VAR_8 = VAR_10;
   break;
  case 'h':
   FUNC_12(VAR_12, VAR_14[0]);
   goto exit;
   break;
  case '?':
  default:
   FUNC_12(VAR_11, VAR_14[0]);
   VAR_18 = VAR_1;
   goto exit;
   break;
  }
 }

 VAR_15 = FUNC_9(VAR_8, VAR_4 | VAR_3);
 if (VAR_15 < 0) {
  FUNC_10("open");
  VAR_18 = VAR_1;
  goto exit;
 }
 FUNC_2(VAR_5, VAR_3);
 FUNC_2(VAR_6, VAR_3);

 if (VAR_9 == VAR_0)
  FUNC_0(VAR_15);
 FUNC_1(VAR_15);

exit:
 if (VAR_15 >= 0)
  FUNC_4(VAR_15);
 if (VAR_7)
  FUNC_6(VAR_7);
 return VAR_18;
}
