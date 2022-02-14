
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct jpeg_error_mgr {scalar_t__ num_warnings; int last_addon_message; int first_addon_message; int addon_message_table; } ;
struct jpeg_decompress_struct {scalar_t__ output_scanline; scalar_t__ output_height; int err; } ;
struct TYPE_11__ {int total_passes; int completed_passes; } ;
struct cdjpeg_progress_mgr {TYPE_1__ pub; } ;
typedef int j_common_ptr ;
typedef TYPE_2__* djpeg_dest_ptr ;
struct TYPE_12__ {int (* finish_output ) (struct jpeg_decompress_struct*,TYPE_2__*) ;int (* put_pixel_rows ) (struct jpeg_decompress_struct*,TYPE_2__*,int ) ;int buffer_height; int buffer; int (* start_output ) (struct jpeg_decompress_struct*,TYPE_2__*) ;int * output_file; } ;
typedef int JDIMENSION ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (char***) ;
 int VAR_13 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (char*,int ) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (unsigned char*) ;
 TYPE_2__* FUNC_11 (struct jpeg_decompress_struct*,int ) ;
 TYPE_2__* FUNC_12 (struct jpeg_decompress_struct*) ;
 TYPE_2__* FUNC_13 (struct jpeg_decompress_struct*) ;
 TYPE_2__* FUNC_14 (struct jpeg_decompress_struct*) ;
 TYPE_2__* FUNC_15 (struct jpeg_decompress_struct*) ;
 int FUNC_16 (struct jpeg_decompress_struct*) ;
 int FUNC_17 (struct jpeg_decompress_struct*) ;
 int FUNC_18 (struct jpeg_decompress_struct*) ;
 int FUNC_19 (struct jpeg_decompress_struct*,unsigned char*,unsigned long) ;
 int FUNC_20 (struct jpeg_decompress_struct*,int ) ;
 int FUNC_21 (struct jpeg_decompress_struct*,int ,int ) ;
 int FUNC_22 (struct jpeg_decompress_struct*,scalar_t__,int ) ;
 int FUNC_23 (struct jpeg_decompress_struct*) ;
 int FUNC_24 (struct jpeg_error_mgr*) ;
 int FUNC_25 (struct jpeg_decompress_struct*,int *) ;
 scalar_t__ VAR_14 ;
 char* VAR_15 ;
 int FUNC_26 (struct jpeg_decompress_struct*,int,char**,int ,int ) ;
 int VAR_16 ;
 scalar_t__* VAR_17 ;
 int * FUNC_27 () ;
 scalar_t__ FUNC_28 (unsigned char*,unsigned long) ;
 int VAR_18 ;
 int FUNC_29 (int ,struct cdjpeg_progress_mgr*) ;
 int VAR_19 ;
 int * VAR_20 ;
 int * VAR_21 ;
 int FUNC_30 (struct jpeg_decompress_struct*,TYPE_2__*) ;
 int FUNC_31 (struct jpeg_decompress_struct*,TYPE_2__*,int ) ;
 int FUNC_32 (struct jpeg_decompress_struct*,TYPE_2__*) ;
 int FUNC_33 () ;
 int * FUNC_34 () ;

int
FUNC_35 (int VAR_22, char **VAR_23)
{
  struct jpeg_decompress_struct VAR_24;
  struct jpeg_error_mgr VAR_25;



  int VAR_26;
  djpeg_dest_ptr VAR_27 = ((void*)0);
  FILE * VAR_28;
  FILE * VAR_29;
  unsigned char *VAR_30 = ((void*)0);
  unsigned long VAR_31 = 0;
  JDIMENSION VAR_32;






  VAR_17 = VAR_23[0];
  if (VAR_17 == ((void*)0) || VAR_17[0] == 0)
    VAR_17 = "djpeg";


  VAR_24.err = FUNC_24(&VAR_25);
  FUNC_16(&VAR_24);

  VAR_25.addon_message_table = VAR_13;
  VAR_25.first_addon_message = VAR_6;
  VAR_25.last_addon_message = VAR_7;







  FUNC_22(&VAR_24, VAR_9, VAR_16);
  FUNC_22(&VAR_24, VAR_8+12, VAR_16);
  VAR_26 = FUNC_26(&VAR_24, VAR_22, VAR_23, 0, VAR_3);
  if (VAR_26 < VAR_22-1) {
    FUNC_9(VAR_19, "%s: only one input file\n", VAR_17);
    FUNC_33();
  }



  if (VAR_26 < VAR_22) {
    if ((VAR_28 = FUNC_8(VAR_23[VAR_26], VAR_10)) == ((void*)0)) {
      FUNC_9(VAR_19, "%s: can't open %s\n", VAR_17, VAR_23[VAR_26]);
      FUNC_5(VAR_0);
    }
  } else {

    VAR_28 = FUNC_27();
  }


  if (VAR_15 != ((void*)0)) {
    if ((VAR_29 = FUNC_8(VAR_15, VAR_12)) == ((void*)0)) {
      FUNC_9(VAR_19, "%s: can't open %s\n", VAR_17, VAR_15);
      FUNC_5(VAR_0);
    }
  } else {

    VAR_29 = FUNC_34();
  }
    FUNC_25(&VAR_24, VAR_28);


  (void) FUNC_20(&VAR_24, VAR_11);


  VAR_26 = FUNC_26(&VAR_24, VAR_22, VAR_23, 0, VAR_11);




  switch (VAR_18) {
  default:
    FUNC_0(&VAR_24, VAR_5);
    break;
  }
  VAR_27->output_file = VAR_29;


  (void) FUNC_23(&VAR_24);


  (*VAR_27->start_output) (&VAR_24, VAR_27);


  while (VAR_24.output_scanline < VAR_24.output_height) {
    VAR_32 = FUNC_21(&VAR_24, VAR_27->buffer,
     VAR_27->buffer_height);
    (*VAR_27->put_pixel_rows) (&VAR_24, VAR_27, VAR_32);
  }
  (*VAR_27->finish_output) (&VAR_24, VAR_27);
  (void) FUNC_18(&VAR_24);
  FUNC_17(&VAR_24);


  if (VAR_28 != VAR_20)
    FUNC_6(VAR_28);
  if (VAR_29 != VAR_21)
    FUNC_6(VAR_29);





  if (VAR_14 && VAR_30 != ((void*)0))
    FUNC_10(VAR_30);


  FUNC_5(VAR_25.num_warnings ? VAR_2 : VAR_1);
  return 0;
}
