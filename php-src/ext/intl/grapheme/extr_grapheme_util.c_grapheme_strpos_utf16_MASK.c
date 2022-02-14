
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int UStringSearch ;
typedef int UErrorCode ;
typedef int UCollator ;
typedef int UChar ;
typedef int UBreakIterator ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int) ;
 int * FUNC_3 (unsigned char*,int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int **,int*,char*,size_t,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int *,int,int *) ;
 int FUNC_9 (int *,int ,int ,int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *) ;
 int * FUNC_14 (int *,int,int *,int,char*,int *,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int,int *) ;

int32_t FUNC_17(char *VAR_6, size_t VAR_7, char *VAR_8, size_t VAR_9, int32_t VAR_10, int32_t *VAR_11, int VAR_12, int VAR_13)
{
 UChar *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
 int32_t VAR_16 = 0, VAR_17 = 0, VAR_18, VAR_19, VAR_20 = 0;
 unsigned char VAR_21[VAR_3];
 UBreakIterator* VAR_22 = ((void*)0);
 UErrorCode VAR_23;
 UStringSearch* VAR_24 = ((void*)0);

 if(VAR_11) {
  *VAR_11 = -1;
 }


 VAR_23 = VAR_5;
 FUNC_5(&VAR_14, &VAR_16, VAR_6, VAR_7, &VAR_23 );
 FUNC_0(VAR_23, "Error converting input string to UTF-16");

 VAR_23 = VAR_5;
 FUNC_5(&VAR_15, &VAR_17, VAR_8, VAR_9, &VAR_23 );
 FUNC_0(VAR_23, "Error converting needle string to UTF-16");


 VAR_23 = VAR_5;
 VAR_22 = FUNC_3(VAR_21, &VAR_23 );
 FUNC_0(VAR_23, "Failed to get iterator");
 VAR_23 = VAR_5;
 FUNC_8(VAR_22, VAR_14, VAR_16, &VAR_23);
 FUNC_0(VAR_23, "Failed to set up iterator");

 VAR_23 = VAR_5;
 VAR_24 = FUNC_14(VAR_15, VAR_17, VAR_14, VAR_16, "", VAR_22, &VAR_23);
 FUNC_0(VAR_23, "Error creating search object");

 if(VAR_12) {
  UCollator *VAR_25 = FUNC_11(VAR_24);
  VAR_23 = VAR_5;
  FUNC_9(VAR_25, VAR_1, VAR_0, &VAR_23);
  FUNC_0(VAR_23, "Error setting collation strength");
  FUNC_15(VAR_24);
 }

 if(VAR_10 != 0) {
  VAR_20 = FUNC_4(VAR_22, VAR_10);
  if(VAR_20 == -1) {
   VAR_23 = VAR_4;
   FUNC_0(VAR_23, "Invalid search offset");
  }
  VAR_23 = VAR_5;
  FUNC_16(VAR_24, VAR_20, &VAR_23);
  FUNC_0(VAR_23, "Invalid search offset");
 }


 if(VAR_13) {
  VAR_18 = FUNC_12(VAR_24, &VAR_23);
  if(VAR_18 < VAR_20) {

   VAR_18 = VAR_2;
  }
 } else {
  VAR_18 = FUNC_13(VAR_24, &VAR_23);
 }
 FUNC_0(VAR_23, "Error looking up string");
 if(VAR_18 != VAR_2 && FUNC_7(VAR_22, VAR_18)) {
  VAR_19 = FUNC_2(VAR_22, VAR_14,VAR_18);
  if(VAR_11) {
   *VAR_11 = VAR_18;
  }
 } else {
  VAR_19 = -1;
 }

 if (VAR_14) {
  FUNC_1( VAR_14 );
 }
 if (VAR_15) {
  FUNC_1( VAR_15 );
 }
 FUNC_6 (VAR_22);
 FUNC_10 (VAR_24);

 return VAR_19;
}
