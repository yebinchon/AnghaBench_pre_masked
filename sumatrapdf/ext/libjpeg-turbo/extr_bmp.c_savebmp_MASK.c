
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int output_message; int error_exit; } ;
struct my_error_mgr {int setjmp_buffer; TYPE_6__ pub; } ;
struct jpeg_decompress_struct {int out_color_components; int output_components; int image_width; int image_height; int scale_num; int scale_denom; scalar_t__ output_scanline; scalar_t__ output_height; TYPE_1__* mem; int global_state; int out_color_space; int err; } ;
typedef int j_common_ptr ;
typedef TYPE_2__* djpeg_dest_ptr ;
struct TYPE_10__ {int buffer_height; int (* finish_output ) (struct jpeg_decompress_struct*,TYPE_2__*) ;int (* put_pixel_rows ) (struct jpeg_decompress_struct*,TYPE_2__*,int) ;int * buffer; int (* start_output ) (struct jpeg_decompress_struct*,TYPE_2__*) ;int * output_file; } ;
struct TYPE_9__ {int (* realize_virt_arrays ) (int ) ;} ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 TYPE_2__* FUNC_4 (struct jpeg_decompress_struct*,int ) ;
 TYPE_2__* FUNC_5 (struct jpeg_decompress_struct*) ;
 int FUNC_6 (struct jpeg_decompress_struct*) ;
 int FUNC_7 (struct jpeg_decompress_struct*) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (struct jpeg_decompress_struct*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (unsigned char*,int,int,int ,int,int ,int,int) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (char*,char*) ;
 char* FUNC_13 (char*,char) ;
 int FUNC_14 (struct jpeg_decompress_struct*,TYPE_2__*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct jpeg_decompress_struct*,TYPE_2__*,int) ;
 int FUNC_17 (struct jpeg_decompress_struct*,TYPE_2__*) ;
 int* VAR_8 ;

int FUNC_18(char *VAR_9, unsigned char *VAR_10, int VAR_11, int VAR_12, int VAR_13,
 int VAR_14)
{
 int VAR_15=0, VAR_16, VAR_17;
 struct jpeg_decompress_struct VAR_18;
 struct my_error_mgr VAR_19;
 djpeg_dest_ptr VAR_20;
 FILE *VAR_21=((void*)0);
 char *VAR_22=((void*)0);

 FUNC_9(&VAR_18, 0, sizeof(struct jpeg_decompress_struct));

 if(!VAR_9 || !VAR_10 || VAR_11<1 || VAR_12<1 || VAR_13<0 || VAR_13>=VAR_5)
  FUNC_0("savebmp(): Invalid argument");

 if((VAR_21=FUNC_3(VAR_9, "wb"))==((void*)0))
  FUNC_1("savebmp(): Cannot open output file");

 VAR_18.err=FUNC_8(&VAR_19.pub);
 VAR_19.pub.error_exit=VAR_6;
 VAR_19.pub.output_message=VAR_7;

 if(FUNC_11(VAR_19.setjmp_buffer))
 {

  VAR_15=-1; goto bailout;
 }

 FUNC_6(&VAR_18);
 if(VAR_13==VAR_3)
 {
  VAR_18.out_color_components=VAR_18.output_components=1;
  VAR_18.out_color_space=VAR_1;
 }
 else
 {
  VAR_18.out_color_components=VAR_18.output_components=3;
  VAR_18.out_color_space=VAR_2;
 }
 VAR_18.image_width=VAR_11; VAR_18.image_height=VAR_12;
 VAR_18.global_state=VAR_0;
 VAR_18.scale_num=VAR_18.scale_denom=1;

 VAR_22=FUNC_13(VAR_9, '.');
 if(VAR_22 && !FUNC_12(VAR_22, ".bmp"))
 {
  if((VAR_20=FUNC_4(&VAR_18, 0))==((void*)0))
   FUNC_0("savebmp(): Could not initialize bitmap writer");
 }
 else
 {
  if((VAR_20=FUNC_5(&VAR_18))==((void*)0))
   FUNC_0("savebmp(): Could not initialize PPM writer");
 }

 VAR_20->output_file=VAR_21;
 (*VAR_20->start_output)(&VAR_18, VAR_20);
 (*VAR_18.mem->realize_virt_arrays)((j_common_ptr)&VAR_18);

 if(VAR_13==VAR_3) VAR_17=VAR_13;
 else VAR_17=VAR_4;
 VAR_16=VAR_8[VAR_13];

 while(VAR_18.output_scanline<VAR_18.output_height)
 {
  int VAR_23, VAR_24=VAR_20->buffer_height;
  for(VAR_23=0; VAR_23<VAR_24; VAR_23++)
  {
   unsigned char *VAR_25; int VAR_26;
   VAR_26=VAR_18.output_scanline+VAR_23;
   if(VAR_14) VAR_25=&VAR_10[(VAR_12-VAR_26-1)*VAR_11*VAR_16];
   else VAR_25=&VAR_10[VAR_26*VAR_11*VAR_16];
   FUNC_10(VAR_25, VAR_13, VAR_14, VAR_20->buffer[VAR_23], VAR_17, 0, VAR_11,
    VAR_24);
  }
  (*VAR_20->put_pixel_rows)(&VAR_18, VAR_20, VAR_24);
  VAR_18.output_scanline+=VAR_24;
 }

 (*VAR_20->finish_output)(&VAR_18, VAR_20);

 bailout:
 FUNC_7(&VAR_18);
 if(VAR_21) FUNC_2(VAR_21);
 return VAR_15;
}
