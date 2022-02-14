
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct jpeg_error_mgr {scalar_t__ num_warnings; int trace_level; } ;
struct jpeg_decompress_struct {TYPE_1__* mem; void* err; } ;
struct jpeg_compress_struct {TYPE_2__* mem; void* err; } ;
struct cdjpeg_progress_mgr {int dummy; } ;
typedef int jvirt_barray_ptr ;
typedef int j_common_ptr ;
struct TYPE_4__ {int max_memory_to_use; } ;
struct TYPE_3__ {int max_memory_to_use; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char***) ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,char*,scalar_t__*,...) ;
 int FUNC_7 (struct jpeg_decompress_struct*,struct jpeg_compress_struct*,int ) ;
 int FUNC_8 (struct jpeg_decompress_struct*,int ) ;
 int FUNC_9 (struct jpeg_decompress_struct*,struct jpeg_compress_struct*) ;
 int FUNC_10 (struct jpeg_compress_struct*) ;
 int FUNC_11 (struct jpeg_decompress_struct*) ;
 int FUNC_12 (struct jpeg_compress_struct*) ;
 int FUNC_13 (struct jpeg_decompress_struct*) ;
 int FUNC_14 (struct jpeg_compress_struct*) ;
 int FUNC_15 (struct jpeg_decompress_struct*) ;
 int * FUNC_16 (struct jpeg_decompress_struct*) ;
 int FUNC_17 (struct jpeg_decompress_struct*,int ) ;
 void* FUNC_18 (struct jpeg_error_mgr*) ;
 int FUNC_19 (struct jpeg_compress_struct*,int *) ;
 int FUNC_20 (struct jpeg_decompress_struct*,int *) ;
 int FUNC_21 (struct jpeg_compress_struct*,int *) ;
 int * FUNC_22 (struct jpeg_decompress_struct*,struct jpeg_compress_struct*,int *,int *) ;
 int FUNC_23 (struct jpeg_decompress_struct*,struct jpeg_compress_struct*,int *,int *) ;
 int FUNC_24 (struct jpeg_decompress_struct*,int *) ;
 char* VAR_8 ;
 int FUNC_25 (struct jpeg_compress_struct*,int,char**,int ,int ) ;
 scalar_t__* VAR_9 ;
 int * FUNC_26 () ;
 int FUNC_27 (int ,struct cdjpeg_progress_mgr*) ;
 int VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int VAR_13 ;
 int FUNC_28 () ;
 int * FUNC_29 () ;

int
FUNC_30 (int VAR_14, char **VAR_15)
{
  struct jpeg_decompress_struct VAR_16;
  struct jpeg_compress_struct VAR_17;
  struct jpeg_error_mgr VAR_18, VAR_19;



  jvirt_barray_ptr * VAR_20;
  jvirt_barray_ptr * VAR_21;
  int VAR_22;



  FILE * VAR_23;






  VAR_9 = VAR_15[0];
  if (VAR_9 == ((void*)0) || VAR_9[0] == 0)
    VAR_9 = "jpegtran";


  VAR_16.err = FUNC_18(&VAR_18);
  FUNC_11(&VAR_16);

  VAR_17.err = FUNC_18(&VAR_19);
  FUNC_10(&VAR_17);
  VAR_22 = FUNC_25(&VAR_17, VAR_14, VAR_15, 0, VAR_3);
  VAR_18.trace_level = VAR_19.trace_level;
  VAR_16.mem->max_memory_to_use = VAR_17.mem->max_memory_to_use;
  if (VAR_22 < VAR_14-1) {
    FUNC_6(VAR_10, "%s: only one input file\n", VAR_9);
    FUNC_28();
  }



  if (VAR_22 < VAR_14) {
    if ((VAR_23 = FUNC_5(VAR_15[VAR_22], VAR_4)) == ((void*)0)) {
      FUNC_6(VAR_10, "%s: can't open %s for reading\n", VAR_9, VAR_15[VAR_22]);
      FUNC_3(VAR_0);
    }
  } else {

    VAR_23 = FUNC_26();
  }






  FUNC_20(&VAR_16, VAR_23);


  FUNC_8(&VAR_16, VAR_7);


  (void) FUNC_17(&VAR_16, VAR_5);
  VAR_20 = FUNC_16(&VAR_16);


  FUNC_9(&VAR_16, &VAR_17);
  VAR_21 = VAR_20;
  if (VAR_23 != VAR_11)
    FUNC_4(VAR_23);


  if (VAR_8 != ((void*)0)) {
    if ((VAR_23 = FUNC_5(VAR_8, VAR_6)) == ((void*)0)) {
      FUNC_6(VAR_10, "%s: can't open %s for writing\n", VAR_9, VAR_8);
      FUNC_3(VAR_0);
    }
  } else {

    VAR_23 = FUNC_29();
  }


  VAR_22 = FUNC_25(&VAR_17, VAR_14, VAR_15, 0, VAR_5);


  FUNC_19(&VAR_17, VAR_23);


  FUNC_21(&VAR_17, VAR_21);


  FUNC_7(&VAR_16, &VAR_17, VAR_7);
  FUNC_14(&VAR_17);
  FUNC_12(&VAR_17);
  (void) FUNC_15(&VAR_16);
  FUNC_13(&VAR_16);


  if (VAR_23 != VAR_12)
    FUNC_4(VAR_23);






  FUNC_3(VAR_18.num_warnings + VAR_19.num_warnings ?VAR_2:VAR_1);
  return 0;
}
