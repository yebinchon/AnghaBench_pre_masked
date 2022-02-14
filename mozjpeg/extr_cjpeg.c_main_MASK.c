
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct jpeg_error_mgr {scalar_t__ num_warnings; int last_addon_message; int first_addon_message; int addon_message_table; } ;
struct jpeg_compress_struct {scalar_t__ next_scanline; scalar_t__ image_height; scalar_t__ write_Adobe_marker; scalar_t__ write_JFIF_header; int in_color_space; int err; } ;
struct cdjpeg_progress_mgr {int dummy; } ;
typedef TYPE_1__* jpeg_saved_marker_ptr ;
typedef int j_common_ptr ;
typedef TYPE_2__* cjpeg_source_ptr ;
struct TYPE_8__ {int (* finish_input ) (struct jpeg_compress_struct*,TYPE_2__*) ;int buffer; int plane_pointer; int (* get_pixel_rows ) (struct jpeg_compress_struct*,TYPE_2__*) ;TYPE_1__* marker_list; int (* start_input ) (struct jpeg_compress_struct*,TYPE_2__*) ;int * input_file; } ;
struct TYPE_7__ {scalar_t__ marker; int data_length; int * data; struct TYPE_7__* next; } ;
typedef unsigned char JOCTET ;
typedef int JDIMENSION ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (char***) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (unsigned char*,long,int,int *) ;
 int FUNC_8 (unsigned char*) ;
 scalar_t__ FUNC_9 (int *,int ,int ) ;
 long FUNC_10 (int *) ;
 char* VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_11 (struct jpeg_compress_struct*) ;
 int FUNC_12 (struct jpeg_compress_struct*) ;
 int FUNC_13 (struct jpeg_compress_struct*) ;
 int FUNC_14 (struct jpeg_compress_struct*) ;
 int FUNC_15 (struct jpeg_compress_struct*,unsigned char**,unsigned long*) ;
 int FUNC_16 (struct jpeg_compress_struct*) ;
 int FUNC_17 (struct jpeg_compress_struct*,int ) ;
 int FUNC_18 (struct jpeg_error_mgr*) ;
 int FUNC_19 (struct jpeg_compress_struct*,int *) ;
 int FUNC_20 (struct jpeg_compress_struct*,unsigned char*,unsigned int) ;
 int FUNC_21 (struct jpeg_compress_struct*,scalar_t__,int *,int) ;
 int FUNC_22 (struct jpeg_compress_struct*,int ,int ) ;
 int FUNC_23 (struct jpeg_compress_struct*,int ,int ) ;
 scalar_t__ FUNC_24 (long) ;
 scalar_t__ VAR_17 ;
 char* VAR_18 ;
 int FUNC_25 (struct jpeg_compress_struct*,int,char**,int ,int ) ;
 scalar_t__* VAR_19 ;
 int * FUNC_26 () ;
 TYPE_2__* FUNC_27 (struct jpeg_compress_struct*,int *) ;
 int FUNC_28 (int ,struct cdjpeg_progress_mgr*) ;
 int VAR_20 ;
 int * VAR_21 ;
 int * VAR_22 ;
 int FUNC_29 (struct jpeg_compress_struct*,TYPE_2__*) ;
 int FUNC_30 (struct jpeg_compress_struct*,TYPE_2__*) ;
 int FUNC_31 (struct jpeg_compress_struct*,TYPE_2__*) ;
 int FUNC_32 () ;
 int * FUNC_33 () ;

int
FUNC_34(int VAR_23, char **VAR_24)
{
  struct jpeg_compress_struct VAR_25;
  struct jpeg_error_mgr VAR_26;



  int VAR_27;
  cjpeg_source_ptr VAR_28;
  FILE *VAR_29;
  FILE *VAR_30;
  JOCTET *VAR_31 = ((void*)0);
  long VAR_32 = 0;
  FILE *VAR_33 = ((void*)0);
  unsigned char *VAR_34 = ((void*)0);
  unsigned long VAR_35 = 0;
  JDIMENSION VAR_36;






  VAR_19 = VAR_24[0];
  if (VAR_19 == ((void*)0) || VAR_19[0] == 0)
    VAR_19 = "cjpeg";


  VAR_25.err = FUNC_18(&VAR_26);
  FUNC_11(&VAR_25);

  VAR_26.addon_message_table = VAR_13;
  VAR_26.first_addon_message = VAR_5;
  VAR_26.last_addon_message = VAR_6;







  VAR_25.in_color_space = VAR_4;
  FUNC_16(&VAR_25);







  VAR_27 = FUNC_25(&VAR_25, VAR_23, VAR_24, 0, VAR_3);
  if (VAR_27 < VAR_23 - 1) {
    FUNC_6(VAR_20, "%s: only one input file\n", VAR_19);
    FUNC_32();
  }



  if (VAR_27 < VAR_23) {
    if ((VAR_29 = FUNC_5(VAR_24[VAR_27], VAR_8)) == ((void*)0)) {
      FUNC_6(VAR_20, "%s: can't open %s\n", VAR_19, VAR_24[VAR_27]);
      FUNC_3(VAR_0);
    }
  } else {

    VAR_29 = FUNC_26();
  }


  if (VAR_18 != ((void*)0)) {
    if ((VAR_33 = FUNC_5(VAR_18, VAR_12)) == ((void*)0)) {
      FUNC_6(VAR_20, "%s: can't open %s\n", VAR_19, VAR_18);
      FUNC_3(VAR_0);
    }
  } else if (!VAR_17) {

    VAR_33 = FUNC_33();
  }

  if (VAR_15 != ((void*)0)) {
    if ((VAR_30 = FUNC_5(VAR_15, VAR_8)) == ((void*)0)) {
      FUNC_6(VAR_20, "%s: can't open %s\n", VAR_19, VAR_15);
      FUNC_3(VAR_0);
    }
    if (FUNC_9(VAR_30, 0, VAR_9) < 0 ||
        (VAR_32 = FUNC_10(VAR_30)) < 1 ||
        FUNC_9(VAR_30, 0, VAR_10) < 0) {
      FUNC_6(VAR_20, "%s: can't determine size of %s\n", VAR_19,
              VAR_15);
      FUNC_3(VAR_0);
    }
    if ((VAR_31 = (JOCTET *)FUNC_24(VAR_32)) == ((void*)0)) {
      FUNC_6(VAR_20, "%s: can't allocate memory for ICC profile\n", VAR_19);
      FUNC_4(VAR_30);
      FUNC_3(VAR_0);
    }
    if (FUNC_7(VAR_31, VAR_32, 1, VAR_30) < 1) {
      FUNC_6(VAR_20, "%s: can't read ICC profile from %s\n", VAR_19,
              VAR_15);
      FUNC_8(VAR_31);
      FUNC_4(VAR_30);
      FUNC_3(VAR_0);
    }
    FUNC_4(VAR_30);
  }






  VAR_28 = FUNC_27(&VAR_25, VAR_29);
  VAR_28->input_file = VAR_29;


  (*VAR_28->start_input) (&VAR_25, VAR_28);





  FUNC_12(&VAR_25);


  VAR_27 = FUNC_25(&VAR_25, VAR_23, VAR_24, 0, VAR_11);







    FUNC_19(&VAR_25, VAR_33);


  FUNC_17(&VAR_25, VAR_11);


  if (VAR_14) {
    jpeg_saved_marker_ptr VAR_37;






    for (VAR_37 = VAR_28->marker_list; VAR_37 != ((void*)0); VAR_37 = VAR_37->next) {
      if (VAR_25.write_JFIF_header &&
          VAR_37->marker == VAR_7 &&
          VAR_37->data_length >= 5 &&
          FUNC_0(VAR_37->data[0]) == 0x4A &&
          FUNC_0(VAR_37->data[1]) == 0x46 &&
          FUNC_0(VAR_37->data[2]) == 0x49 &&
          FUNC_0(VAR_37->data[3]) == 0x46 &&
          FUNC_0(VAR_37->data[4]) == 0)
        continue;
      if (VAR_25.write_Adobe_marker &&
          VAR_37->marker == VAR_7+14 &&
          VAR_37->data_length >= 5 &&
          FUNC_0(VAR_37->data[0]) == 0x41 &&
          FUNC_0(VAR_37->data[1]) == 0x64 &&
          FUNC_0(VAR_37->data[2]) == 0x6F &&
          FUNC_0(VAR_37->data[3]) == 0x62 &&
          FUNC_0(VAR_37->data[4]) == 0x65)
        continue;
      FUNC_21(&VAR_25, VAR_37->marker, VAR_37->data,
                        VAR_37->data_length);
    }
  }
  if (VAR_31 != ((void*)0))
    FUNC_20(&VAR_25, VAR_31, (unsigned int)VAR_32);


  while (VAR_25.next_scanline < VAR_25.image_height) {
    VAR_36 = (*VAR_28->get_pixel_rows) (&VAR_25, VAR_28);





    (void) FUNC_23(&VAR_25, VAR_28->buffer, VAR_36);
  }


  (*VAR_28->finish_input) (&VAR_25, VAR_28);
  FUNC_14(&VAR_25);
  FUNC_13(&VAR_25);


  if (VAR_29 != VAR_21)
    FUNC_4(VAR_29);
  if (VAR_33 != VAR_22 && VAR_33 != ((void*)0))
    FUNC_4(VAR_33);





  if (VAR_17) {
    FUNC_6(VAR_20, "Compressed size:  %lu bytes\n", VAR_35);
    if (VAR_34 != ((void*)0))
      FUNC_8(VAR_34);
  }

  if (VAR_31 != ((void*)0))
    FUNC_8(VAR_31);


  FUNC_3(VAR_26.num_warnings ? VAR_2 : VAR_1);
  return 0;
}
