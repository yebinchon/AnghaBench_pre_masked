
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tjhandle ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (unsigned char*,int,int,int) ;
 int FUNC_3 (unsigned char*) ;
 double FUNC_4 () ;
 int FUNC_5 (unsigned char*,int,int,int,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (unsigned char*,int ,unsigned long) ;
 char** VAR_4 ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,int,char*,char*,char*,char*,char*,...) ;
 char** VAR_5 ;
 char** VAR_6 ;
 unsigned long FUNC_10 (int,int,int) ;
 unsigned long FUNC_11 (int,int,int) ;
 int FUNC_12 (int ,unsigned char*,int,int ,int,int,unsigned char**,unsigned long*,int,int,int) ;
 int FUNC_13 (int ,unsigned char*,int,int ,int,int,unsigned char*,int,int) ;
 int* VAR_7 ;
 int FUNC_14 (unsigned char*,unsigned long,char*) ;
 scalar_t__ VAR_8 ;

void FUNC_15(tjhandle VAR_9, unsigned char **VAR_10,
 unsigned long *VAR_11, int VAR_12, int VAR_13, int VAR_14, char *VAR_15,
 int VAR_16, int VAR_17, int VAR_18)
{
 char VAR_19[1024]; unsigned char *VAR_20=((void*)0);
 double VAR_21;

 if(VAR_8==VAR_2)
  FUNC_8("%s %s -> %s YUV ... ", VAR_4[VAR_14],
   (VAR_18&VAR_0)? "Bottom-Up":"Top-Down ", VAR_6[VAR_16]);
 else
  FUNC_8("%s %s -> %s Q%d ... ", VAR_4[VAR_14],
   (VAR_18&VAR_0)? "Bottom-Up":"Top-Down ", VAR_6[VAR_16],
   VAR_17);

 if((VAR_20=(unsigned char *)FUNC_6(VAR_12*VAR_13*VAR_7[VAR_14]))==((void*)0))
  FUNC_0("Memory allocation failure");
 FUNC_5(VAR_20, VAR_12, VAR_13, VAR_14, VAR_18);
 if(*VAR_10 && *VAR_11>0) FUNC_7(*VAR_10, 0, *VAR_11);

 VAR_21=FUNC_4();
 if(VAR_8==VAR_2)
 {
  FUNC_1(FUNC_13(VAR_9, VAR_20, VAR_12, 0, VAR_13, VAR_14, *VAR_10, VAR_16, VAR_18));
 }
 else
 {
  if(!VAR_3)
  {
   VAR_18|=VAR_1;
   *VAR_11=(VAR_8==VAR_2? FUNC_11(VAR_12, VAR_13, VAR_16)
    : FUNC_10(VAR_12, VAR_13, VAR_16));
  }
  FUNC_1(FUNC_12(VAR_9, VAR_20, VAR_12, 0, VAR_13, VAR_14, VAR_10, VAR_11, VAR_16,
   VAR_17, VAR_18));
 }
 VAR_21=FUNC_4()-VAR_21;

 if(VAR_8==VAR_2)
  FUNC_9(VAR_19, 1024, "%s_enc_%s_%s_%s.yuv", VAR_15, VAR_4[VAR_14],
   (VAR_18&VAR_0)? "BU":"TD", VAR_5[VAR_16]);
 else
  FUNC_9(VAR_19, 1024, "%s_enc_%s_%s_%s_Q%d.jpg", VAR_15,
   VAR_4[VAR_14], (VAR_18&VAR_0)? "BU":"TD", VAR_5[VAR_16],
   VAR_17);
 FUNC_14(*VAR_10, *VAR_11, VAR_19);
 if(VAR_8==VAR_2)
 {
  if(FUNC_2(*VAR_10, VAR_12, VAR_13, VAR_16)) FUNC_8("Passed.");
  else FUNC_8("FAILED!");
 }
 else FUNC_8("Done.");
 FUNC_8("  %f ms\n  Result in %s\n", VAR_21*1000., VAR_19);

 bailout:
 if(VAR_20) FUNC_3(VAR_20);
}
