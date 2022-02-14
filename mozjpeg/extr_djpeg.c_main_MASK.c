
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_12__ ;


struct jpeg_error_mgr {scalar_t__ num_warnings; int last_addon_message; int first_addon_message; int addon_message_table; } ;
struct jpeg_decompress_struct {int output_height; int output_scanline; int output_width; TYPE_12__* err; } ;
struct TYPE_19__ {int total_passes; int completed_passes; } ;
struct cdjpeg_progress_mgr {TYPE_1__ pub; } ;
typedef int j_common_ptr ;
typedef TYPE_2__* djpeg_dest_ptr ;
struct TYPE_20__ {int (* finish_output ) (struct jpeg_decompress_struct*,TYPE_2__*) ;int (* put_pixel_rows ) (struct jpeg_decompress_struct*,TYPE_2__*,void*) ;int buffer_height; int buffer; int (* start_output ) (struct jpeg_decompress_struct*,TYPE_2__*) ;int (* calc_buffer_dimensions ) (struct jpeg_decompress_struct*,TYPE_2__*) ;int * output_file; } ;
struct TYPE_18__ {scalar_t__ msg_code; } ;
typedef unsigned char JOCTET ;
typedef void* JDIMENSION ;
typedef int FILE ;


 int FUNC_0 (struct jpeg_decompress_struct*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 size_t VAR_4 ;
 int VAR_5 ;
 size_t FUNC_1 (int *,unsigned char*,size_t) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (char***) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (char*,int ) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (unsigned char*) ;
 int FUNC_10 (unsigned char*,unsigned int,int,int *) ;
 char* VAR_20 ;
 TYPE_2__* FUNC_11 (struct jpeg_decompress_struct*,int ,int ) ;
 TYPE_2__* FUNC_12 (struct jpeg_decompress_struct*) ;
 TYPE_2__* FUNC_13 (struct jpeg_decompress_struct*) ;
 TYPE_2__* FUNC_14 (struct jpeg_decompress_struct*) ;
 TYPE_2__* FUNC_15 (struct jpeg_decompress_struct*) ;
 int FUNC_16 (struct jpeg_decompress_struct*) ;
 int FUNC_17 (struct jpeg_decompress_struct*,int*,int*) ;
 int FUNC_18 (struct jpeg_decompress_struct*) ;
 int FUNC_19 (struct jpeg_decompress_struct*) ;
 int FUNC_20 (struct jpeg_decompress_struct*,unsigned char*,unsigned long) ;
 int FUNC_21 (struct jpeg_decompress_struct*,int ) ;
 scalar_t__ FUNC_22 (struct jpeg_decompress_struct*,unsigned char**,unsigned int*) ;
 void* FUNC_23 (struct jpeg_decompress_struct*,int ,int ) ;
 int FUNC_24 (struct jpeg_decompress_struct*,scalar_t__,int ) ;
 int FUNC_25 (struct jpeg_decompress_struct*,int) ;
 int FUNC_26 (struct jpeg_decompress_struct*) ;
 TYPE_12__* FUNC_27 (struct jpeg_error_mgr*) ;
 int FUNC_28 (struct jpeg_decompress_struct*,int *) ;
 scalar_t__ VAR_21 ;
 char* VAR_22 ;
 int FUNC_29 (struct jpeg_decompress_struct*,int,char**,int ,int ) ;
 int VAR_23 ;
 scalar_t__* VAR_24 ;
 int * FUNC_30 () ;
 scalar_t__ FUNC_31 (unsigned char*,unsigned long) ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_32 (int ,struct cdjpeg_progress_mgr*) ;
 int VAR_29 ;
 int * VAR_30 ;
 int * VAR_31 ;
 int FUNC_33 (struct jpeg_decompress_struct*,TYPE_2__*) ;
 int FUNC_34 (struct jpeg_decompress_struct*,TYPE_2__*,void*) ;
 int FUNC_35 (struct jpeg_decompress_struct*,TYPE_2__*,void*) ;
 int FUNC_36 (struct jpeg_decompress_struct*,TYPE_2__*) ;
 int FUNC_37 (struct jpeg_decompress_struct*,TYPE_2__*) ;
 int FUNC_38 (struct jpeg_decompress_struct*,TYPE_2__*,void*) ;
 int FUNC_39 (struct jpeg_decompress_struct*,TYPE_2__*) ;
 int FUNC_40 (struct jpeg_decompress_struct*,TYPE_2__*,void*) ;
 int FUNC_41 (struct jpeg_decompress_struct*,TYPE_2__*) ;
 int FUNC_42 () ;
 int * FUNC_43 () ;

int
FUNC_44(int VAR_32, char **VAR_33)
{
  struct jpeg_decompress_struct VAR_34;
  struct jpeg_error_mgr VAR_35;



  int VAR_36;
  djpeg_dest_ptr VAR_37 = ((void*)0);
  FILE *VAR_38;
  FILE *VAR_39;
  unsigned char *VAR_40 = ((void*)0);
  unsigned long VAR_41 = 0;
  JDIMENSION VAR_42;






  VAR_24 = VAR_33[0];
  if (VAR_24 == ((void*)0) || VAR_24[0] == 0)
    VAR_24 = "djpeg";


  VAR_34.err = FUNC_27(&VAR_35);
  FUNC_16(&VAR_34);

  VAR_35.addon_message_table = VAR_14;
  VAR_35.first_addon_message = VAR_6;
  VAR_35.last_addon_message = VAR_7;







  FUNC_24(&VAR_34, VAR_9, VAR_23);
  FUNC_24(&VAR_34, VAR_8 + 12, VAR_23);
  VAR_36 = FUNC_29(&VAR_34, VAR_32, VAR_33, 0, VAR_3);
  if (VAR_36 < VAR_32 - 1) {
    FUNC_8(VAR_29, "%s: only one input file\n", VAR_24);
    FUNC_42();
  }



  if (VAR_36 < VAR_32) {
    if ((VAR_38 = FUNC_7(VAR_33[VAR_36], VAR_11)) == ((void*)0)) {
      FUNC_8(VAR_29, "%s: can't open %s\n", VAR_24, VAR_33[VAR_36]);
      FUNC_4(VAR_0);
    }
  } else {

    VAR_38 = FUNC_30();
  }


  if (VAR_22 != ((void*)0)) {
    if ((VAR_39 = FUNC_7(VAR_22, VAR_13)) == ((void*)0)) {
      FUNC_8(VAR_29, "%s: can't open %s\n", VAR_24, VAR_22);
      FUNC_4(VAR_0);
    }
  } else {

    VAR_39 = FUNC_43();
  }
    FUNC_28(&VAR_34, VAR_38);


  (void)FUNC_21(&VAR_34, VAR_12);


  VAR_36 = FUNC_29(&VAR_34, VAR_32, VAR_33, 0, VAR_12);




  switch (VAR_25) {
  default:
    FUNC_0(&VAR_34, VAR_5);
    break;
  }
  VAR_37->output_file = VAR_39;


  (void)FUNC_26(&VAR_34);


  if (VAR_26) {
    JDIMENSION VAR_43;





    if (VAR_27 > VAR_34.output_height - 1) {
      FUNC_8(VAR_29, "%s: skip region exceeds image height %d\n", VAR_24,
              VAR_34.output_height);
      FUNC_4(VAR_0);
    }




    VAR_43 = VAR_34.output_height;
    VAR_34.output_height -= (VAR_27 - VAR_28 + 1);
    (*VAR_37->start_output) (&VAR_34, VAR_37);
    VAR_34.output_height = VAR_43;


    while (VAR_34.output_scanline < VAR_28) {
      VAR_42 = FUNC_23(&VAR_34, VAR_37->buffer,
                                          VAR_37->buffer_height);
      (*VAR_37->put_pixel_rows) (&VAR_34, VAR_37, VAR_42);
    }
    FUNC_25(&VAR_34, VAR_27 - VAR_28 + 1);
    while (VAR_34.output_scanline < VAR_34.output_height) {
      VAR_42 = FUNC_23(&VAR_34, VAR_37->buffer,
                                          VAR_37->buffer_height);
      (*VAR_37->put_pixel_rows) (&VAR_34, VAR_37, VAR_42);
    }


  } else if (VAR_15) {
    JDIMENSION VAR_44;




    if (VAR_18 + VAR_17 > VAR_34.output_width ||
        VAR_19 + VAR_16 > VAR_34.output_height) {
      FUNC_8(VAR_29, "%s: crop dimensions exceed image dimensions %d x %d\n",
              VAR_24, VAR_34.output_width, VAR_34.output_height);
      FUNC_4(VAR_0);
    }

    FUNC_17(&VAR_34, &VAR_18, &VAR_17);
    if (VAR_37->calc_buffer_dimensions)
      (*VAR_37->calc_buffer_dimensions) (&VAR_34, VAR_37);
    else
      FUNC_0(&VAR_34, VAR_5);




    VAR_44 = VAR_34.output_height;
    VAR_34.output_height = VAR_16;
    (*VAR_37->start_output) (&VAR_34, VAR_37);
    VAR_34.output_height = VAR_44;


    FUNC_25(&VAR_34, VAR_19);
    while (VAR_34.output_scanline < VAR_19 + VAR_16) {
      VAR_42 = FUNC_23(&VAR_34, VAR_37->buffer,
                                          VAR_37->buffer_height);
      (*VAR_37->put_pixel_rows) (&VAR_34, VAR_37, VAR_42);
    }
    FUNC_25(&VAR_34, VAR_34.output_height - VAR_19 - VAR_16);


  } else {

    (*VAR_37->start_output) (&VAR_34, VAR_37);


    while (VAR_34.output_scanline < VAR_34.output_height) {
      VAR_42 = FUNC_23(&VAR_34, VAR_37->buffer,
                                          VAR_37->buffer_height);
      (*VAR_37->put_pixel_rows) (&VAR_34, VAR_37, VAR_42);
    }
  }
  if (VAR_20 != ((void*)0)) {
    FILE *VAR_45;
    JOCTET *VAR_46;
    unsigned int VAR_47;

    if ((VAR_45 = FUNC_7(VAR_20, VAR_13)) == ((void*)0)) {
      FUNC_8(VAR_29, "%s: can't open %s\n", VAR_24, VAR_20);
      FUNC_4(VAR_0);
    }
    if (FUNC_22(&VAR_34, &VAR_46, &VAR_47)) {
      if (FUNC_10(VAR_46, VAR_47, 1, VAR_45) < 1) {
        FUNC_8(VAR_29, "%s: can't read ICC profile from %s\n", VAR_24,
                VAR_20);
        FUNC_9(VAR_46);
        FUNC_5(VAR_45);
        FUNC_4(VAR_0);
      }
      FUNC_9(VAR_46);
      FUNC_5(VAR_45);
    } else if (VAR_34.err->msg_code != VAR_10)
      FUNC_8(VAR_29, "%s: no ICC profile data in JPEG file\n", VAR_24);
  }





  (*VAR_37->finish_output) (&VAR_34, VAR_37);
  (void)FUNC_19(&VAR_34);
  FUNC_18(&VAR_34);


  if (VAR_38 != VAR_30)
    FUNC_5(VAR_38);
  if (VAR_39 != VAR_31)
    FUNC_5(VAR_39);





  if (VAR_21 && VAR_40 != ((void*)0))
    FUNC_9(VAR_40);


  FUNC_4(VAR_35.num_warnings ? VAR_2 : VAR_1);
  return 0;
}
