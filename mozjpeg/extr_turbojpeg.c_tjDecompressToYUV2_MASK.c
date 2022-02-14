
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tjhandle ;
struct TYPE_9__ {int image_width; int image_height; } ;
struct TYPE_7__ {void* stopOnWarning; int setjmp_buffer; } ;
struct TYPE_8__ {int headerRead; TYPE_1__ jerr; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ) ;
 void* VAR_4 ;
 int FUNC_2 (char*) ;
 TYPE_3__* VAR_5 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_3__*,unsigned char const*,unsigned long) ;
 int FUNC_7 (TYPE_3__*,void*) ;
 scalar_t__ FUNC_8 (int ) ;
 int * VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_9 (int ,unsigned char const*,unsigned long,unsigned char**,int,int*,int,int) ;
 int FUNC_10 (int,int,int) ;
 int FUNC_11 (int,int,int) ;

int FUNC_12(tjhandle VAR_8, const unsigned char *VAR_9,
                                 unsigned long VAR_10, unsigned char *VAR_11,
 int VAR_12, int VAR_13, int VAR_14, int VAR_15)
{
 unsigned char *VAR_16[3];
 int VAR_17, VAR_18, VAR_19[3], VAR_20=-1, VAR_21=-1;
 int VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;

 FUNC_4(VAR_8);
  VAR_7->jerr.stopOnWarning = (VAR_15 & VAR_2) ? VAR_4 : VAR_0;

  if (VAR_9 == ((void*)0) || VAR_10 <= 0 || VAR_11 == ((void*)0) || VAR_12 < 0 ||
      VAR_13 < 1 || !FUNC_5(VAR_13) || VAR_14 < 0)
  FUNC_2("tjDecompressToYUV2(): Invalid argument");

  if (FUNC_8(VAR_7->jerr.setjmp_buffer)) {

  return -1;
 }

 FUNC_6(VAR_5, VAR_9, VAR_10);
 FUNC_7(VAR_5, VAR_4);
 VAR_21=FUNC_3(VAR_5);
 if(VAR_21<0)
  FUNC_2("tjDecompressToYUV2(): Could not determine subsampling type for JPEG image");

 VAR_23=VAR_5->image_width; VAR_24=VAR_5->image_height;
 if(VAR_12==0) VAR_12=VAR_23;
 if(VAR_14==0) VAR_14=VAR_24;

  for (VAR_22 = 0; VAR_22 < VAR_1; VAR_22++) {
  VAR_25=FUNC_1(VAR_23, VAR_6[VAR_22]);
  VAR_26=FUNC_1(VAR_24, VAR_6[VAR_22]);
  if(VAR_25<=VAR_12 && VAR_26<=VAR_14)
   break;
 }
 if(VAR_22>=VAR_1)
  FUNC_2("tjDecompressToYUV2(): Could not scale down to desired image dimensions");

 VAR_17=FUNC_11(0, VAR_12, VAR_21);
 VAR_18=FUNC_10(0, VAR_14, VAR_21);
 VAR_16[0]=VAR_11;
 VAR_19[0]=FUNC_0(VAR_17, VAR_13);
  if (VAR_21 == VAR_3) {
  VAR_19[1]=VAR_19[2]=0;
  VAR_16[1]=VAR_16[2]=((void*)0);
  } else {
  int VAR_27=FUNC_11(1, VAR_12, VAR_21);
  int VAR_28=FUNC_10(1, VAR_14, VAR_21);

  VAR_19[1]=VAR_19[2]=FUNC_0(VAR_27, VAR_13);
  VAR_16[1]=VAR_16[0]+VAR_19[0]*VAR_18;
  VAR_16[2]=VAR_16[1]+VAR_19[1]*VAR_28;
 }

 VAR_7->headerRead=1;
 return FUNC_9(VAR_8, VAR_9, VAR_10, VAR_16, VAR_12,
  VAR_19, VAR_14, VAR_15);

 bailout:
  VAR_7->jerr.stopOnWarning = VAR_0;
 return VAR_20;
}
