
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int num; int denom; } ;
typedef TYPE_1__ tjscalingfactor ;
typedef int tjhandle ;


 int VAR_0 ;
 int FUNC_0 (int,TYPE_1__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (unsigned char*,int,int,int,int,TYPE_1__,int) ;
 scalar_t__ FUNC_4 (unsigned char*,int,int,int) ;
 int FUNC_5 (unsigned char*) ;
 double FUNC_6 () ;
 scalar_t__ FUNC_7 (unsigned long) ;
 int FUNC_8 (unsigned char*,int ,unsigned long) ;
 char** VAR_3 ;
 int FUNC_9 (char*,...) ;
 char** VAR_4 ;
 unsigned long FUNC_10 (int,int,int) ;
 int FUNC_11 (int ,unsigned char*,unsigned long,unsigned char*,int,int ,int,int,int) ;
 int FUNC_12 (int ,unsigned char*,unsigned long,int*,int*,int*) ;
 int FUNC_13 (int ,unsigned char*,unsigned long,unsigned char*,int) ;
 int* VAR_5 ;
 scalar_t__ VAR_6 ;

void FUNC_14(tjhandle VAR_7, unsigned char *VAR_8,
 unsigned long VAR_9, int VAR_10, int VAR_11, int VAR_12, char *VAR_13, int VAR_14,
 int VAR_15, tjscalingfactor VAR_16)
{
 unsigned char *VAR_17=((void*)0);
 int VAR_18=0, VAR_19=0, VAR_20=-1; double VAR_21;
 int VAR_22=FUNC_0(VAR_10, VAR_16);
 int VAR_23=FUNC_0(VAR_11, VAR_16);
 unsigned long VAR_24=0;

 if(VAR_6==VAR_2) return;

 if(VAR_6==VAR_1)
  FUNC_9("JPEG -> YUV %s ... ", VAR_4[VAR_14]);
 else
 {
  FUNC_9("JPEG -> %s %s ", VAR_3[VAR_12],
   (VAR_15&VAR_0)? "Bottom-Up":"Top-Down ");
  if(VAR_16.num!=1 || VAR_16.denom!=1)
   FUNC_9("%d/%d ... ", VAR_16.num, VAR_16.denom);
  else FUNC_9("... ");
 }

 FUNC_2(FUNC_12(VAR_7, VAR_8, VAR_9, &VAR_18, &VAR_19,
  &VAR_20));
 if(VAR_18!=VAR_10 || VAR_19!=VAR_11 || VAR_20!=VAR_14)
  FUNC_1("Incorrect JPEG header");

 if(VAR_6==VAR_1) VAR_24=FUNC_10(VAR_10, VAR_11, VAR_14);
 else VAR_24=VAR_22*VAR_23*VAR_5[VAR_12];
 if((VAR_17=(unsigned char *)FUNC_7(VAR_24))==((void*)0))
  FUNC_1("Memory allocation failure");
 FUNC_8(VAR_17, 0, VAR_24);

 VAR_21=FUNC_6();
 if(VAR_6==VAR_1)
 {
  FUNC_2(FUNC_13(VAR_7, VAR_8, VAR_9, VAR_17, VAR_15));
 }
 else
 {
  FUNC_2(FUNC_11(VAR_7, VAR_8, VAR_9, VAR_17, VAR_22, 0,
   VAR_23, VAR_12, VAR_15));
 }
 VAR_21=FUNC_6()-VAR_21;

 if(VAR_6==VAR_1)
 {
  if(FUNC_4(VAR_17, VAR_10, VAR_11, VAR_14)) FUNC_9("Passed.");
  else FUNC_9("FAILED!");
 }
 else
 {
  if(FUNC_3(VAR_17, VAR_22, VAR_23, VAR_12, VAR_14, VAR_16, VAR_15))
   FUNC_9("Passed.");
  else FUNC_9("FAILED!");
 }
 FUNC_9("  %f ms\n", VAR_21*1000.);

 bailout:
 if(VAR_17) FUNC_5(VAR_17);
}
