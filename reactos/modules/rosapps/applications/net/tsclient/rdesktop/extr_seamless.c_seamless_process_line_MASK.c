
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RDPCLIENT ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (char**) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char**,int ) ;
 void* FUNC_4 (char*,char**,int ) ;
 int FUNC_5 (int *,unsigned int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int FUNC_8 (int *,unsigned long,unsigned long) ;
 int FUNC_9 (int *,unsigned long,unsigned long) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long,int,int,int,int,unsigned long) ;
 int FUNC_12 (int *,unsigned long,unsigned long,unsigned long) ;
 int FUNC_13 (int *,unsigned long,unsigned int,unsigned long) ;
 int FUNC_14 (int *,unsigned long,char*,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*) ;
 char* FUNC_19 (char const*) ;

__attribute__((used)) static BOOL
FUNC_20(RDPCLIENT * VAR_3, const char *VAR_4, void *VAR_5)
{
 char *VAR_6, *VAR_7;
 char *VAR_8, *VAR_9, *VAR_10, *VAR_11, *VAR_12, *VAR_13, *VAR_14, *VAR_15;
 unsigned long VAR_16, VAR_17;
 char *VAR_18;

 VAR_7 = FUNC_19(VAR_4);
 VAR_6 = VAR_7;

 FUNC_0(("seamlessrdp got:%s\n", VAR_6));

 VAR_8 = FUNC_1(&VAR_6);
 VAR_9 = FUNC_1(&VAR_6);
 VAR_10 = FUNC_1(&VAR_6);
 VAR_11 = FUNC_1(&VAR_6);
 VAR_12 = FUNC_1(&VAR_6);
 VAR_13 = FUNC_1(&VAR_6);
 VAR_14 = FUNC_1(&VAR_6);
 VAR_15 = FUNC_1(&VAR_6);

 if (!FUNC_2("CREATE", VAR_8))
 {
  unsigned long VAR_19, VAR_20;
  if (!VAR_13)
   return VAR_0;

  VAR_16 = FUNC_4(VAR_10, &VAR_18, 0);
  if (*VAR_18)
   return VAR_0;

  VAR_19 = FUNC_4(VAR_11, &VAR_18, 0);
  if (*VAR_18)
   return VAR_0;

  VAR_20 = FUNC_4(VAR_12, &VAR_18, 0);
  if (*VAR_18)
   return VAR_0;

  VAR_17 = FUNC_4(VAR_13, &VAR_18, 0);
  if (*VAR_18)
   return VAR_0;

  FUNC_7(VAR_3, VAR_16, VAR_19, VAR_20, VAR_17);
 }
 else if (!FUNC_2("DESTROY", VAR_8))
 {
  if (!VAR_11)
   return VAR_0;

  VAR_16 = FUNC_4(VAR_10, &VAR_18, 0);
  if (*VAR_18)
   return VAR_0;

  VAR_17 = FUNC_4(VAR_11, &VAR_18, 0);
  if (*VAR_18)
   return VAR_0;

  FUNC_9(VAR_3, VAR_16, VAR_17);

 }
 else if (!FUNC_2("DESTROYGRP", VAR_8))
 {
  if (!VAR_11)
   return VAR_0;

  VAR_16 = FUNC_4(VAR_10, &VAR_18, 0);
  if (*VAR_18)
   return VAR_0;

  VAR_17 = FUNC_4(VAR_11, &VAR_18, 0);
  if (*VAR_18)
   return VAR_0;

  FUNC_8(VAR_3, VAR_16, VAR_17);
 }
 else if (!FUNC_2("SETICON", VAR_8))
 {
  FUNC_17("SeamlessRDP SETICON1\n");
 }
 else if (!FUNC_2("POSITION", VAR_8))
 {
  int VAR_21, VAR_22, VAR_23, VAR_24;

  if (!VAR_15)
   return VAR_0;

  VAR_16 = FUNC_4(VAR_10, &VAR_18, 0);
  if (*VAR_18)
   return VAR_0;

  VAR_21 = FUNC_3(VAR_11, &VAR_18, 0);
  if (*VAR_18)
   return VAR_0;
  VAR_22 = FUNC_3(VAR_12, &VAR_18, 0);
  if (*VAR_18)
   return VAR_0;

  VAR_23 = FUNC_3(VAR_13, &VAR_18, 0);
  if (*VAR_18)
   return VAR_0;
  VAR_24 = FUNC_3(VAR_14, &VAR_18, 0);
  if (*VAR_18)
   return VAR_0;

  VAR_17 = FUNC_4(VAR_15, &VAR_18, 0);
  if (*VAR_18)
   return VAR_0;

  FUNC_11(VAR_3, VAR_16, VAR_21, VAR_22, VAR_23, VAR_24, VAR_17);
 }
 else if (!FUNC_2("ZCHANGE", VAR_8))
 {
  unsigned long VAR_25;

  VAR_16 = FUNC_4(VAR_10, &VAR_18, 0);
  if (*VAR_18)
   return VAR_0;

  VAR_25 = FUNC_4(VAR_11, &VAR_18, 0);
  if (*VAR_18)
   return VAR_0;

  VAR_17 = FUNC_4(VAR_12, &VAR_18, 0);
  if (*VAR_18)
   return VAR_0;

  FUNC_12(VAR_3, VAR_16, VAR_25, VAR_17);
 }
 else if (!FUNC_2("TITLE", VAR_8))
 {
  if (!VAR_12)
   return VAR_0;

  VAR_16 = FUNC_4(VAR_10, &VAR_18, 0);
  if (*VAR_18)
   return VAR_0;

  VAR_17 = FUNC_4(VAR_12, &VAR_18, 0);
  if (*VAR_18)
   return VAR_0;

  FUNC_14(VAR_3, VAR_16, VAR_11, VAR_17);
 }
 else if (!FUNC_2("STATE", VAR_8))
 {
  unsigned int VAR_26;

  if (!VAR_12)
   return VAR_0;

  VAR_16 = FUNC_4(VAR_10, &VAR_18, 0);
  if (*VAR_18)
   return VAR_0;

  VAR_26 = FUNC_4(VAR_11, &VAR_18, 0);
  if (*VAR_18)
   return VAR_0;

  VAR_17 = FUNC_4(VAR_12, &VAR_18, 0);
  if (*VAR_18)
   return VAR_0;

  FUNC_13(VAR_3, VAR_16, VAR_26, VAR_17);
 }
 else if (!FUNC_2("DEBUG", VAR_8))
 {
  FUNC_0(("SeamlessRDP:%s\n", VAR_4));
 }
 else if (!FUNC_2("SYNCBEGIN", VAR_8))
 {
  if (!VAR_10)
   return VAR_0;

  VAR_17 = FUNC_4(VAR_10, &VAR_18, 0);
  if (*VAR_18)
   return VAR_0;

  FUNC_15(VAR_3, VAR_17);
 }
 else if (!FUNC_2("SYNCEND", VAR_8))
 {
  if (!VAR_10)
   return VAR_0;

  VAR_17 = FUNC_4(VAR_10, &VAR_18, 0);
  if (*VAR_18)
   return VAR_0;


 }
 else if (!FUNC_2("HELLO", VAR_8))
 {
  if (!VAR_10)
   return VAR_0;

  VAR_17 = FUNC_4(VAR_10, &VAR_18, 0);
  if (*VAR_18)
   return VAR_0;

  FUNC_6(VAR_3, !!(VAR_17 & VAR_1));
 }
 else if (!FUNC_2("ACK", VAR_8))
 {
  unsigned int VAR_27;

  VAR_27 = FUNC_4(VAR_10, &VAR_18, 0);
  if (*VAR_18)
   return VAR_0;

  FUNC_5(VAR_3, VAR_27);
 }
 else if (!FUNC_2("HIDE", VAR_8))
 {
  if (!VAR_10)
   return VAR_0;

  VAR_17 = FUNC_4(VAR_10, &VAR_18, 0);
  if (*VAR_18)
   return VAR_0;

  FUNC_10(VAR_3);
 }
 else if (!FUNC_2("UNHIDE", VAR_8))
 {
  if (!VAR_10)
   return VAR_0;

  VAR_17 = FUNC_4(VAR_10, &VAR_18, 0);
  if (*VAR_18)
   return VAR_0;

  FUNC_16(VAR_3);
 }


 FUNC_18(VAR_7);
 return VAR_2;
}
