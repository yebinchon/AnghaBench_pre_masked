
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {int image_width; int image_height; int scale_num; int scale_denom; int output_scanline; int output_height; TYPE_2__* mem; int global_state; int out_color_space; } ;
struct TYPE_16__ {int setjmp_buffer; } ;
struct TYPE_18__ {TYPE_4__ dinfo; TYPE_1__ jerr; } ;
typedef TYPE_3__ tjinstance ;
typedef int * tjhandle ;
typedef TYPE_4__* j_decompress_ptr ;
typedef int j_common_ptr ;
typedef TYPE_5__* djpeg_dest_ptr ;
typedef int boolean ;
struct TYPE_20__ {int (* finish_output ) (TYPE_4__*,TYPE_5__*) ;int (* put_pixel_rows ) (TYPE_4__*,TYPE_5__*,int) ;int * buffer; int (* start_output ) (TYPE_4__*,TYPE_5__*) ;int * output_file; } ;
struct TYPE_17__ {int (* realize_virt_arrays ) (int ) ;} ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 TYPE_5__* FUNC_4 (TYPE_4__*,int ,int ) ;
 TYPE_5__* FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int ,unsigned char*,int) ;
 int * VAR_4 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*,char*) ;
 char* FUNC_9 (char const*,char) ;
 int FUNC_10 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_4__*,TYPE_5__*,int) ;
 int FUNC_13 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 () ;
 int* VAR_5 ;

int FUNC_16(const char *VAR_6, unsigned char *VAR_7,
                          int VAR_8, int VAR_9, int VAR_10, int VAR_11,
                          int VAR_12)
{
  int VAR_13 = 0;
  tjhandle VAR_14 = ((void*)0);
  tjinstance *VAR_15;
  j_decompress_ptr VAR_16 = ((void*)0);
  djpeg_dest_ptr VAR_17;
  FILE *VAR_18 = ((void*)0);
  char *VAR_19 = ((void*)0);
  boolean VAR_20;

  if (!VAR_6 || !VAR_7 || VAR_8 < 1 || VAR_9 < 0 || VAR_10 < 1 ||
      VAR_11 < 0 || VAR_11 >= VAR_3)
    FUNC_0("tjSaveImage(): Invalid argument");

  if ((VAR_14 = FUNC_15()) == ((void*)0))
    return -1;
  VAR_15 = (tjinstance *)VAR_14;
  VAR_16 = &VAR_15->dinfo;

  if ((VAR_18 = FUNC_3(VAR_6, "wb")) == ((void*)0))
    FUNC_1("tjSaveImage(): Cannot open output file");

  if (FUNC_7(VAR_15->jerr.setjmp_buffer)) {

    VAR_13 = -1; goto bailout;
  }

  VAR_15->dinfo.out_color_space = VAR_4[VAR_11];
  VAR_16->image_width = VAR_8; VAR_16->image_height = VAR_10;
  VAR_16->global_state = VAR_0;
  VAR_16->scale_num = VAR_16->scale_denom = 1;

  VAR_19 = FUNC_9(VAR_6, '.');
  if (VAR_19 && !FUNC_8(VAR_19, ".bmp")) {
    if ((VAR_17 = FUNC_4(VAR_16, VAR_1, VAR_1)) == ((void*)0))
      FUNC_0("tjSaveImage(): Could not initialize bitmap writer");
    VAR_20 = (VAR_12 & VAR_2) == 0;
  } else {
    if ((VAR_17 = FUNC_5(VAR_16)) == ((void*)0))
      FUNC_0("tjSaveImage(): Could not initialize PPM writer");
    VAR_20 = (VAR_12 & VAR_2) != 0;
  }

  VAR_17->output_file = VAR_18;
  (*VAR_17->start_output) (VAR_16, VAR_17);
  (*VAR_16->mem->realize_virt_arrays) ((j_common_ptr)VAR_16);

  if (VAR_9 == 0) VAR_9 = VAR_8 * VAR_5[VAR_11];

  while (VAR_16->output_scanline < VAR_16->output_height) {
    unsigned char *VAR_21;

    if (VAR_20)
      VAR_21 = &VAR_7[(VAR_10 - VAR_16->output_scanline - 1) * VAR_9];
    else
      VAR_21 = &VAR_7[VAR_16->output_scanline * VAR_9];
    FUNC_6(VAR_17->buffer[0], VAR_21, VAR_8 * VAR_5[VAR_11]);
    (*VAR_17->put_pixel_rows) (VAR_16, VAR_17, 1);
    VAR_16->output_scanline++;
  }

  (*VAR_17->finish_output) (VAR_16, VAR_17);

bailout:
  if (VAR_14) FUNC_14(VAR_14);
  if (VAR_18) FUNC_2(VAR_18);
 return VAR_13;
}
