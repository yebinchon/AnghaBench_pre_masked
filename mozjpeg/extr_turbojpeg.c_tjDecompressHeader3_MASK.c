
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tjhandle ;
struct TYPE_10__ {int image_width; int image_height; int jpeg_color_space; } ;
struct TYPE_8__ {scalar_t__ warning; int setjmp_buffer; } ;
struct TYPE_9__ {int init; TYPE_1__ jerr; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 TYPE_3__* VAR_7 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,unsigned char const*,unsigned long) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 TYPE_2__* VAR_8 ;

int FUNC_7(tjhandle VAR_9,
                                  const unsigned char *VAR_10,
                                  unsigned long VAR_11, int *VAR_12,
                                  int *VAR_13, int *VAR_14,
                                  int *VAR_15)
{
 int VAR_16=0;

 FUNC_2(VAR_9);
 if((VAR_8->init&VAR_0)==0)
  FUNC_0("tjDecompressHeader3(): Instance has not been initialized for decompression");

  if (VAR_10 == ((void*)0) || VAR_11 <= 0 || VAR_12 == ((void*)0) || VAR_13 == ((void*)0) ||
      VAR_14 == ((void*)0) || VAR_15 == ((void*)0))
  FUNC_0("tjDecompressHeader3(): Invalid argument");

  if (FUNC_6(VAR_8->jerr.setjmp_buffer)) {

  return -1;
 }

 FUNC_4(VAR_7, VAR_10, VAR_11);
 FUNC_5(VAR_7, VAR_6);

 *VAR_12=VAR_7->image_width;
 *VAR_13=VAR_7->image_height;
 *VAR_14=FUNC_1(VAR_7);
  switch (VAR_7->jpeg_color_space) {
  case 131: *VAR_15=VAR_2; break;
  case 130: *VAR_15=VAR_3; break;
  case 128: *VAR_15=VAR_5; break;
  case 132: *VAR_15=VAR_1; break;
  case 129: *VAR_15=VAR_4; break;
  default: *VAR_15=-1; break;
 }

 FUNC_3(VAR_7);

 if(*VAR_14<0)
  FUNC_0("tjDecompressHeader3(): Could not determine subsampling type for JPEG image");
 if(*VAR_15<0)
  FUNC_0("tjDecompressHeader3(): Could not determine colorspace of JPEG image");
 if(*VAR_12<1 || *VAR_13<1)
  FUNC_0("tjDecompressHeader3(): Invalid data returned in header");

 bailout:
 if(VAR_8->jerr.warning) VAR_16=-1;
 return VAR_16;
}
