
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct jpeg_error_mgr {scalar_t__ num_warnings; int last_addon_message; int first_addon_message; int addon_message_table; } ;
struct jpeg_compress_struct {scalar_t__ next_scanline; scalar_t__ image_height; int in_color_space; int err; } ;
struct cdjpeg_progress_mgr {int dummy; } ;
typedef int j_common_ptr ;
typedef TYPE_1__* cjpeg_source_ptr ;
struct TYPE_6__ {int (* finish_input ) (struct jpeg_compress_struct*,TYPE_1__*) ;int buffer; int (* get_pixel_rows ) (struct jpeg_compress_struct*,TYPE_1__*) ;int (* start_input ) (struct jpeg_compress_struct*,TYPE_1__*) ;int * input_file; } ;
typedef int JDIMENSION ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char***) ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (unsigned char*) ;
 int FUNC_8 (struct jpeg_compress_struct*) ;
 int FUNC_9 (struct jpeg_compress_struct*) ;
 int FUNC_10 (struct jpeg_compress_struct*) ;
 int FUNC_11 (struct jpeg_compress_struct*) ;
 int FUNC_12 (struct jpeg_compress_struct*,unsigned char**,unsigned long*) ;
 int FUNC_13 (struct jpeg_compress_struct*) ;
 int FUNC_14 (struct jpeg_compress_struct*,int ) ;
 int FUNC_15 (struct jpeg_error_mgr*) ;
 int FUNC_16 (struct jpeg_compress_struct*,int *) ;
 int FUNC_17 (struct jpeg_compress_struct*,int ,int ) ;
 scalar_t__ VAR_11 ;
 char* VAR_12 ;
 int FUNC_18 (struct jpeg_compress_struct*,int,char**,int ,int ) ;
 scalar_t__* VAR_13 ;
 int * FUNC_19 () ;
 TYPE_1__* FUNC_20 (struct jpeg_compress_struct*,int *) ;
 int FUNC_21 (int ,struct cdjpeg_progress_mgr*) ;
 int VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int FUNC_22 (struct jpeg_compress_struct*,TYPE_1__*) ;
 int FUNC_23 (struct jpeg_compress_struct*,TYPE_1__*) ;
 int FUNC_24 (struct jpeg_compress_struct*,TYPE_1__*) ;
 int FUNC_25 () ;
 int * FUNC_26 () ;

int
FUNC_27 (int VAR_17, char **VAR_18)
{
  struct jpeg_compress_struct VAR_19;
  struct jpeg_error_mgr VAR_20;



  int VAR_21;
  cjpeg_source_ptr VAR_22;
  FILE * VAR_23;
  FILE * VAR_24 = ((void*)0);
  unsigned char *VAR_25 = ((void*)0);
  unsigned long VAR_26 = 0;
  JDIMENSION VAR_27;






  VAR_13 = VAR_18[0];
  if (VAR_13 == ((void*)0) || VAR_13[0] == 0)
    VAR_13 = "cjpeg";


  VAR_19.err = FUNC_15(&VAR_20);
  FUNC_8(&VAR_19);

  VAR_20.addon_message_table = VAR_10;
  VAR_20.first_addon_message = VAR_5;
  VAR_20.last_addon_message = VAR_6;
  VAR_19.in_color_space = VAR_4;
  FUNC_13(&VAR_19);







  VAR_21 = FUNC_18(&VAR_19, VAR_17, VAR_18, 0, VAR_3);
  if (VAR_21 < VAR_17-1) {
    FUNC_6(VAR_14, "%s: only one input file\n", VAR_13);
    FUNC_25();
  }



  if (VAR_21 < VAR_17) {
    if ((VAR_23 = FUNC_5(VAR_18[VAR_21], VAR_7)) == ((void*)0)) {
      FUNC_6(VAR_14, "%s: can't open %s\n", VAR_13, VAR_18[VAR_21]);
      FUNC_3(VAR_0);
    }
  } else {

    VAR_23 = FUNC_19();
  }


  if (VAR_12 != ((void*)0)) {
    if ((VAR_24 = FUNC_5(VAR_12, VAR_9)) == ((void*)0)) {
      FUNC_6(VAR_14, "%s: can't open %s\n", VAR_13, VAR_12);
      FUNC_3(VAR_0);
    }
  } else if (!VAR_11) {

    VAR_24 = FUNC_26();
  }






  VAR_22 = FUNC_20(&VAR_19, VAR_23);
  VAR_22->input_file = VAR_23;


  (*VAR_22->start_input) (&VAR_19, VAR_22);


  FUNC_9(&VAR_19);


  VAR_21 = FUNC_18(&VAR_19, VAR_17, VAR_18, 0, VAR_8);







    FUNC_16(&VAR_19, VAR_24);


  FUNC_14(&VAR_19, VAR_8);


  while (VAR_19.next_scanline < VAR_19.image_height) {
    VAR_27 = (*VAR_22->get_pixel_rows) (&VAR_19, VAR_22);
    (void) FUNC_17(&VAR_19, VAR_22->buffer, VAR_27);
  }


  (*VAR_22->finish_input) (&VAR_19, VAR_22);
  FUNC_11(&VAR_19);
  FUNC_10(&VAR_19);


  if (VAR_23 != VAR_15)
    FUNC_4(VAR_23);
  if (VAR_24 != VAR_16 && VAR_24 != ((void*)0))
    FUNC_4(VAR_24);





  if (VAR_11) {
    FUNC_6(VAR_14, "Compressed size:  %lu bytes\n", VAR_26);
    if (VAR_25 != ((void*)0))
      FUNC_7(VAR_25);
  }


  FUNC_3(VAR_20.num_warnings ? VAR_2 : VAR_1);
  return 0;
}
