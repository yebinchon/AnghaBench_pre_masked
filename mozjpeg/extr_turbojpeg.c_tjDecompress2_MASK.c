
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int tjhandle ;
struct TYPE_17__ {int image_width; int image_height; int output_width; int output_height; int output_scanline; scalar_t__ global_state; int scale_denom; int scale_num; void* do_fancy_upsampling; } ;
struct TYPE_16__ {int denom; int num; } ;
struct TYPE_14__ {void* stopOnWarning; scalar_t__ warning; int setjmp_buffer; } ;
struct TYPE_13__ {int dct_method; int out_color_space; } ;
struct TYPE_15__ {int init; TYPE_2__ jerr; TYPE_1__ dinfo; } ;
typedef unsigned char* JSAMPROW ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int,TYPE_4__) ;
 int VAR_12 ;
 void* VAR_13 ;
 int FUNC_1 (char*) ;
 TYPE_5__* VAR_14 ;
 int FUNC_2 (unsigned char**) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*,unsigned char const*,unsigned long) ;
 int FUNC_7 (TYPE_5__*,void*) ;
 int FUNC_8 (TYPE_5__*,unsigned char**,int) ;
 int FUNC_9 (TYPE_5__*) ;
 scalar_t__ FUNC_10 (int) ;
 int * VAR_15 ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (int ) ;
 TYPE_4__* VAR_16 ;
 TYPE_3__* VAR_17 ;
 int* VAR_18 ;

int FUNC_13(tjhandle VAR_19, const unsigned char *VAR_20,
                            unsigned long VAR_21, unsigned char *VAR_22,
                            int VAR_23, int VAR_24, int VAR_25, int VAR_26,
                            int VAR_27)
{
  JSAMPROW *VAR_28 = ((void*)0);
  int VAR_29, VAR_30 = 0, VAR_31, VAR_32, VAR_33, VAR_34;

 FUNC_3(VAR_19);
  VAR_17->jerr.stopOnWarning = (VAR_27 & VAR_11) ? VAR_13 : VAR_2;
 if((VAR_17->init&VAR_0)==0)
  FUNC_1("tjDecompress2(): Instance has not been initialized for decompression");

  if (VAR_20 == ((void*)0) || VAR_21 <= 0 || VAR_22 == ((void*)0) || VAR_23 < 0 ||
      VAR_24 < 0 || VAR_25 < 0 || VAR_26 < 0 || VAR_26 >= VAR_12)
  FUNC_1("tjDecompress2(): Invalid argument");


 if(VAR_27&VAR_8) FUNC_11("JSIMD_FORCEMMX=1");
 else if(VAR_27&VAR_9) FUNC_11("JSIMD_FORCESSE=1");
 else if(VAR_27&VAR_10) FUNC_11("JSIMD_FORCESSE2=1");


  if (FUNC_12(VAR_17->jerr.setjmp_buffer)) {

  VAR_30=-1; goto bailout;
 }

 FUNC_6(VAR_14, VAR_20, VAR_21);
 FUNC_7(VAR_14, VAR_13);
  VAR_17->dinfo.out_color_space = VAR_15[VAR_26];
  if (VAR_27 & VAR_6) VAR_17->dinfo.dct_method = VAR_3;
 if(VAR_27&VAR_7) VAR_14->do_fancy_upsampling=VAR_2;

 VAR_31=VAR_14->image_width; VAR_32=VAR_14->image_height;
 if(VAR_23==0) VAR_23=VAR_31;
 if(VAR_25==0) VAR_25=VAR_32;
  for (VAR_29 = 0; VAR_29 < VAR_4; VAR_29++) {
  VAR_33=FUNC_0(VAR_31, VAR_16[VAR_29]);
  VAR_34=FUNC_0(VAR_32, VAR_16[VAR_29]);
  if(VAR_33<=VAR_23 && VAR_34<=VAR_25)
   break;
 }
 if(VAR_29>=VAR_4)
  FUNC_1("tjDecompress2(): Could not scale down to desired image dimensions");
 VAR_23=VAR_33; VAR_25=VAR_34;
 VAR_14->scale_num=VAR_16[VAR_29].num;
 VAR_14->scale_denom=VAR_16[VAR_29].denom;

 FUNC_9(VAR_14);
 if(VAR_24==0) VAR_24=VAR_14->output_width*VAR_18[VAR_26];

  if ((VAR_28 =
       (JSAMPROW *)FUNC_10(sizeof(JSAMPROW) * VAR_14->output_height)) == ((void*)0))
  FUNC_1("tjDecompress2(): Memory allocation failure");
  if (FUNC_12(VAR_17->jerr.setjmp_buffer)) {

  VAR_30=-1; goto bailout;
 }
  for (VAR_29 = 0; VAR_29 < (int)VAR_14->output_height; VAR_29++) {
  if(VAR_27&VAR_5)
   VAR_28[VAR_29]=&VAR_22[(VAR_14->output_height-VAR_29-1)*VAR_24];
    else
      VAR_28[VAR_29] = &VAR_22[VAR_29 * VAR_24];
 }
 while(VAR_14->output_scanline<VAR_14->output_height)
  FUNC_8(VAR_14, &VAR_28[VAR_14->output_scanline],
   VAR_14->output_height-VAR_14->output_scanline);
 FUNC_5(VAR_14);

 bailout:
 if(VAR_14->global_state>VAR_1) FUNC_4(VAR_14);
 if(VAR_28) FUNC_2(VAR_28);
 if(VAR_17->jerr.warning) VAR_30=-1;
  VAR_17->jerr.stopOnWarning = VAR_2;
 return VAR_30;
}
