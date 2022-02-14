
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jpeg_error_mgr {int dummy; } ;
struct jpeg_compress_struct {int image_width; int image_height; int input_components; int next_scanline; void* optimize_coding; TYPE_1__* comp_info; void* raw_data_in; int in_color_space; int err; } ;
struct TYPE_2__ {int h_samp_factor; int v_samp_factor; int dc_tbl_no; int ac_tbl_no; int quant_tbl_no; } ;
typedef unsigned char* JSAMPROW ;
typedef unsigned char JSAMPLE ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (unsigned char*,int,int,unsigned char*,int,int,int,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (unsigned char*,size_t,int,int *) ;
 int FUNC_5 (unsigned char*) ;
 int FUNC_6 (int *,int ,int ) ;
 size_t FUNC_7 (int *) ;
 int FUNC_8 (struct jpeg_compress_struct*) ;
 int FUNC_9 (struct jpeg_compress_struct*) ;
 int FUNC_10 (struct jpeg_compress_struct*) ;
 int FUNC_11 (struct jpeg_compress_struct*) ;
 int FUNC_12 (struct jpeg_compress_struct*,long,void*) ;
 int FUNC_13 (struct jpeg_compress_struct*,void*) ;
 int FUNC_14 (struct jpeg_error_mgr*) ;
 int FUNC_15 (struct jpeg_compress_struct*,int *) ;
 int FUNC_16 (struct jpeg_compress_struct*,unsigned char***,int) ;
 unsigned char* FUNC_17 (int) ;
 int FUNC_18 (char*,char*,int*,int*) ;
 int VAR_5 ;
 long FUNC_19 (char*,int *,int) ;

int FUNC_20(int VAR_6, char *VAR_7[]) {
  long VAR_8;
  int VAR_9;
  int VAR_10;
  int VAR_11;
  int VAR_12;
  int VAR_13;
  int VAR_14;
  int VAR_15;
  const char *VAR_16;
  const char *VAR_17;
  FILE *VAR_18;
  size_t VAR_19;
  unsigned char *VAR_20;
  JSAMPLE *VAR_21;
  struct jpeg_compress_struct VAR_22;
  struct jpeg_error_mgr VAR_23;
  FILE *VAR_24;
  JSAMPROW VAR_25[16];
  JSAMPROW VAR_26[8];
  JSAMPROW VAR_27[8];
  JSAMPROW *VAR_28[3];
  int VAR_29;

  if (VAR_6 != 5) {
    FUNC_3(VAR_5, "Required arguments:\n");
    FUNC_3(VAR_5, "1. JPEG quality value, 0-100\n");
    FUNC_3(VAR_5, "2. Image size (e.g. '512x512')\n");
    FUNC_3(VAR_5, "3. Path to YUV input file\n");
    FUNC_3(VAR_5, "4. Path to JPG output file\n");
    return 1;
  }

  VAR_4 = 0;

  VAR_8 = FUNC_19(VAR_7[1], ((void*)0), 10);
  if (VAR_4 != 0 || VAR_8 < 0 || VAR_8 > 100) {
    FUNC_3(VAR_5, "Invalid JPEG quality value!\n");
    return 1;
  }

  VAR_9 = FUNC_18(VAR_7[2], "%dx%d", &VAR_10, &VAR_11);
  if (VAR_9 != 2) {
    FUNC_3(VAR_5, "Invalid image size input!\n");
    return 1;
  }
  if (VAR_10 <= 0 || VAR_11 <= 0) {
    FUNC_3(VAR_5, "Invalid image size input!\n");
    return 1;
  }

  VAR_12 = (VAR_10 + 1) >> 1;
  VAR_13 = (VAR_11 + 1) >> 1;


  VAR_16 = VAR_7[3];
  VAR_17 = VAR_7[4];

  VAR_18 = FUNC_2(VAR_16, "r");
  if (!VAR_18) {
    FUNC_3(VAR_5, "Invalid path to YUV file!\n");
    return 1;
  }

  FUNC_6(VAR_18, 0, VAR_1);
  VAR_19 = FUNC_7(VAR_18);
  FUNC_6(VAR_18, 0, VAR_2);


  if (VAR_19 !=
   (size_t)VAR_10*VAR_11 + 2*VAR_12*VAR_13) {
    FUNC_1(VAR_18);
    FUNC_3(VAR_5, "Unexpected input format!\n");
    return 1;
  }

  VAR_20 = FUNC_17(VAR_19);
  if (!VAR_20) {
    FUNC_1(VAR_18);
    FUNC_3(VAR_5, "Memory allocation failure!\n");
    return 1;
  }

  if (FUNC_4(VAR_20, VAR_19, 1, VAR_18) != 1) {
    FUNC_3(VAR_5, "Error reading yuv file\n");
  };

  FUNC_1(VAR_18);

  VAR_14 = (VAR_10 + (16 - 1)) & ~(16 - 1);
  VAR_15 = (VAR_11 + (16 - 1)) & ~(16 - 1);

  VAR_21 =
   FUNC_17(VAR_14*VAR_15 + 2*(VAR_14/2)*(VAR_15/2));
  if (!VAR_21) {
    FUNC_5(VAR_20);
    FUNC_3(VAR_5, "Memory allocation failure!\n");
    return 1;
  }

  FUNC_0(VAR_21, VAR_14, VAR_15,
   VAR_20, VAR_10, VAR_11, VAR_12, VAR_13);

  FUNC_5(VAR_20);

  VAR_22.err = FUNC_14(&VAR_23);
  FUNC_8(&VAR_22);

  VAR_24 = FUNC_2(VAR_17, "wb");
  if (!VAR_24) {
    FUNC_5(VAR_21);
    FUNC_3(VAR_5, "Invalid path to JPEG file!\n");
    return 1;
  }

  FUNC_15(&VAR_22, VAR_24);

  VAR_22.image_width = VAR_10;
  VAR_22.image_height = VAR_11;
  VAR_22.input_components = 3;

  VAR_22.in_color_space = VAR_0;
  FUNC_11(&VAR_22);

  VAR_22.raw_data_in = VAR_3;

  VAR_22.comp_info[0].h_samp_factor = 2;
  VAR_22.comp_info[0].v_samp_factor = 2;
  VAR_22.comp_info[0].dc_tbl_no = 0;
  VAR_22.comp_info[0].ac_tbl_no = 0;
  VAR_22.comp_info[0].quant_tbl_no = 0;

  VAR_22.comp_info[1].h_samp_factor = 1;
  VAR_22.comp_info[1].v_samp_factor = 1;
  VAR_22.comp_info[1].dc_tbl_no = 1;
  VAR_22.comp_info[1].ac_tbl_no = 1;
  VAR_22.comp_info[1].quant_tbl_no = 1;

  VAR_22.comp_info[2].h_samp_factor = 1;
  VAR_22.comp_info[2].v_samp_factor = 1;
  VAR_22.comp_info[2].dc_tbl_no = 1;
  VAR_22.comp_info[2].ac_tbl_no = 1;
  VAR_22.comp_info[2].quant_tbl_no = 1;

  FUNC_12(&VAR_22, VAR_8, VAR_3);
  VAR_22.optimize_coding = VAR_3;

  FUNC_13(&VAR_22, VAR_3);

  VAR_28[0] = VAR_25;
  VAR_28[1] = VAR_26;
  VAR_28[2] = VAR_27;

  while (VAR_22.next_scanline < VAR_22.image_height) {
    int VAR_30;
    VAR_30 = VAR_22.next_scanline;

    for (VAR_29 = 0; VAR_29 < 16; VAR_29++) {
      VAR_25[VAR_29] = &VAR_21[VAR_14*(VAR_30 + VAR_29)];
    }
    for (VAR_29 = 0; VAR_29 < 8; VAR_29++) {
      VAR_26[VAR_29] = &VAR_21[VAR_14*VAR_15 +
       (VAR_14/2)*((VAR_30/2) + VAR_29)];
      VAR_27[VAR_29] = &VAR_21[VAR_14*VAR_15 +
       (VAR_14/2)*(VAR_15/2) + (VAR_14/2)*((VAR_30/2) + VAR_29)];
    }
    FUNC_16(&VAR_22, VAR_28, 16);
  }

  FUNC_10(&VAR_22);
  FUNC_9(&VAR_22);

  FUNC_5(VAR_21);
  FUNC_1(VAR_24);

  return 0;
}
