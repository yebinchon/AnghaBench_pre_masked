
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
typedef unsigned char JOCTET ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t FUNC_0 (int *,unsigned char*,size_t) ;
 size_t FUNC_1 (int *,unsigned char*,unsigned long) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (char***) ;
 scalar_t__ VAR_14 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (char*,int ) ;
 int FUNC_8 (int ,char*,scalar_t__*,...) ;
 int FUNC_9 (unsigned char*,long,int,int *) ;
 int FUNC_10 (unsigned char*) ;
 scalar_t__ FUNC_11 (int *,int ,int ) ;
 long FUNC_12 (int *) ;
 char* VAR_15 ;
 int FUNC_13 (struct jpeg_decompress_struct*,struct jpeg_compress_struct*,scalar_t__) ;
 int FUNC_14 (struct jpeg_decompress_struct*,scalar_t__) ;
 scalar_t__ FUNC_15 (struct jpeg_compress_struct*,int ) ;
 scalar_t__ FUNC_16 (struct jpeg_compress_struct*,int ) ;
 int FUNC_17 (struct jpeg_decompress_struct*,struct jpeg_compress_struct*) ;
 int FUNC_18 (struct jpeg_compress_struct*) ;
 int FUNC_19 (struct jpeg_decompress_struct*) ;
 int FUNC_20 (struct jpeg_compress_struct*) ;
 int FUNC_21 (struct jpeg_decompress_struct*) ;
 int FUNC_22 (struct jpeg_compress_struct*) ;
 int FUNC_23 (struct jpeg_decompress_struct*) ;
 int FUNC_24 (struct jpeg_compress_struct*,unsigned char**,unsigned long*) ;
 int FUNC_25 (struct jpeg_decompress_struct*,unsigned char*,unsigned long) ;
 int * FUNC_26 (struct jpeg_decompress_struct*) ;
 int FUNC_27 (struct jpeg_decompress_struct*,scalar_t__) ;
 void* FUNC_28 (struct jpeg_error_mgr*) ;
 int FUNC_29 (struct jpeg_compress_struct*,int *) ;
 int FUNC_30 (struct jpeg_decompress_struct*,int *) ;
 int FUNC_31 (struct jpeg_compress_struct*,int *) ;
 int FUNC_32 (struct jpeg_compress_struct*,unsigned char*,unsigned int) ;
 int * FUNC_33 (struct jpeg_decompress_struct*,struct jpeg_compress_struct*,int *,int *) ;
 int FUNC_34 (struct jpeg_decompress_struct*,struct jpeg_compress_struct*,int *,int *) ;
 int FUNC_35 (struct jpeg_decompress_struct*,int *) ;
 scalar_t__ FUNC_36 (long) ;
 scalar_t__ VAR_16 ;
 char* VAR_17 ;
 int FUNC_37 (struct jpeg_compress_struct*,int,char**,int ,scalar_t__) ;
 scalar_t__ VAR_18 ;
 scalar_t__* VAR_19 ;
 int * FUNC_38 () ;
 scalar_t__ FUNC_39 (unsigned char*,unsigned long) ;
 int FUNC_40 (int ,struct cdjpeg_progress_mgr*) ;
 int VAR_20 ;
 int * VAR_21 ;
 int * VAR_22 ;
 int VAR_23 ;
 int FUNC_41 () ;
 int * FUNC_42 () ;

int
FUNC_43 (int VAR_24, char **VAR_25)
{
  struct jpeg_decompress_struct VAR_26;
  struct jpeg_compress_struct VAR_27;
  struct jpeg_error_mgr VAR_28, VAR_29;



  jvirt_barray_ptr *VAR_30;
  jvirt_barray_ptr *VAR_31;
  int VAR_32;



  FILE *VAR_33;
  unsigned char *VAR_34 = ((void*)0);
  unsigned long VAR_35 = 0;
  unsigned char *VAR_36 = ((void*)0);
  unsigned long VAR_37 = 0;
  FILE *VAR_38;
  JOCTET *VAR_39 = ((void*)0);
  long VAR_40 = 0;






  VAR_19 = VAR_25[0];
  if (VAR_19 == ((void*)0) || VAR_19[0] == 0)
    VAR_19 = "jpegtran";


  VAR_26.err = FUNC_28(&VAR_28);
  FUNC_19(&VAR_26);

  VAR_27.err = FUNC_28(&VAR_29);
  FUNC_18(&VAR_27);
  VAR_32 = FUNC_37(&VAR_27, VAR_24, VAR_25, 0, VAR_3);
  VAR_28.trace_level = VAR_29.trace_level;
  VAR_26.mem->max_memory_to_use = VAR_27.mem->max_memory_to_use;
  if (VAR_32 < VAR_24-1) {
    FUNC_8(VAR_20, "%s: only one input file\n", VAR_19);
    FUNC_41();
  }



  if (VAR_32 < VAR_24) {
    if ((VAR_33 = FUNC_7(VAR_25[VAR_32], VAR_9)) == ((void*)0)) {
      FUNC_8(VAR_20, "%s: can't open %s for reading\n", VAR_19,
              VAR_25[VAR_32]);
      FUNC_4(VAR_0);
    }
  } else {

    VAR_33 = FUNC_38();
  }

  if (VAR_15 != ((void*)0)) {
    if ((VAR_38 = FUNC_7(VAR_15, VAR_9)) == ((void*)0)) {
      FUNC_8(VAR_20, "%s: can't open %s\n", VAR_19, VAR_15);
      FUNC_4(VAR_0);
    }
    if (FUNC_11(VAR_38, 0, VAR_10) < 0 ||
        (VAR_40 = FUNC_12(VAR_38)) < 1 ||
        FUNC_11(VAR_38, 0, VAR_11) < 0) {
      FUNC_8(VAR_20, "%s: can't determine size of %s\n", VAR_19,
              VAR_15);
      FUNC_4(VAR_0);
    }
    if ((VAR_39 = (JOCTET *)FUNC_36(VAR_40)) == ((void*)0)) {
      FUNC_8(VAR_20, "%s: can't allocate memory for ICC profile\n", VAR_19);
      FUNC_5(VAR_38);
      FUNC_4(VAR_0);
    }
    if (FUNC_9(VAR_39, VAR_40, 1, VAR_38) < 1) {
      FUNC_8(VAR_20, "%s: can't read ICC profile from %s\n", VAR_19,
              VAR_15);
      FUNC_10(VAR_39);
      FUNC_5(VAR_38);
      FUNC_4(VAR_0);
    }
    FUNC_5(VAR_38);
    if (VAR_14 == VAR_5)
      VAR_14 = VAR_6;
  }






  if (FUNC_16(&VAR_27, VAR_8) &&
      FUNC_15(&VAR_27, VAR_8)
        == VAR_7)
    VAR_16 = VAR_12;
  FUNC_30(&VAR_26, VAR_33);


  FUNC_14(&VAR_26, VAR_14);


  (void) FUNC_27(&VAR_26, VAR_12);
  VAR_30 = FUNC_26(&VAR_26);


  FUNC_17(&VAR_26, &VAR_27);
  VAR_31 = VAR_30;
  if (VAR_33 != VAR_21)
    FUNC_5(VAR_33);


  if (VAR_17 != ((void*)0)) {
    if ((VAR_33 = FUNC_7(VAR_17, VAR_13)) == ((void*)0)) {
      FUNC_8(VAR_20, "%s: can't open %s for writing\n", VAR_19,
              VAR_17);
      FUNC_4(VAR_0);
    }
  } else {

    VAR_33 = FUNC_42();
  }


  VAR_32 = FUNC_37(&VAR_27, VAR_24, VAR_25, 0, VAR_12);
  FUNC_29(&VAR_27, VAR_33);


  FUNC_31(&VAR_27, VAR_31);


  FUNC_13(&VAR_26, &VAR_27, VAR_14);

  if (VAR_39 != ((void*)0))
    FUNC_32(&VAR_27, VAR_39, (unsigned int)VAR_40);
  FUNC_22(&VAR_27);
  FUNC_20(&VAR_27);
  (void) FUNC_23(&VAR_26);
  FUNC_21(&VAR_26);


  if (VAR_33 != VAR_22)
    FUNC_5(VAR_33);





  FUNC_10(VAR_34);
  FUNC_10(VAR_36);

  if (VAR_39 != ((void*)0))
    FUNC_10(VAR_39);


  FUNC_4(VAR_28.num_warnings + VAR_29.num_warnings ?
       VAR_2 : VAR_1);
  return 0;
}
