
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int isInstanceError; } ;
typedef TYPE_1__ tjinstance ;
typedef scalar_t__ tjhandle ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,unsigned char const*,int,int,int,int,unsigned char**,int*,int,int) ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 (int,int,int) ;

int FUNC_7(tjhandle VAR_3, const unsigned char *VAR_4,
                           int VAR_5, int VAR_6, int VAR_7, int VAR_8,
                           unsigned char *VAR_9, int VAR_10, int VAR_11,
                           int VAR_12)
{
 unsigned char *VAR_13[3];
 int VAR_14, VAR_15, VAR_16[3], VAR_17=-1;
  tjinstance *VAR_18 = (tjinstance *)VAR_3;

  if (!VAR_18) FUNC_2("tjEncodeYUV3(): Invalid handle");
  VAR_18->isInstanceError = VAR_0;

  if (VAR_5 <= 0 || VAR_7 <= 0 || VAR_9 == ((void*)0) || VAR_10 < 0 || !FUNC_3(VAR_10) ||
      VAR_11 < 0 || VAR_11 >= VAR_1)
  FUNC_1("tjEncodeYUV3(): Invalid argument");

 VAR_14=FUNC_6(0, VAR_5, VAR_11);
 VAR_15=FUNC_5(0, VAR_7, VAR_11);
 VAR_13[0]=VAR_9;
 VAR_16[0]=FUNC_0(VAR_14, VAR_10);
  if (VAR_11 == VAR_2) {
  VAR_16[1]=VAR_16[2]=0;
  VAR_13[1]=VAR_13[2]=((void*)0);
  } else {
  int VAR_19=FUNC_6(1, VAR_5, VAR_11);
  int VAR_20=FUNC_5(1, VAR_7, VAR_11);

  VAR_16[1]=VAR_16[2]=FUNC_0(VAR_19, VAR_10);
  VAR_13[1]=VAR_13[0]+VAR_16[0]*VAR_15;
  VAR_13[2]=VAR_13[1]+VAR_16[1]*VAR_20;
 }

 return FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
  VAR_13, VAR_16, VAR_11, VAR_12);

 bailout:
 return VAR_17;
}
