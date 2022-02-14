
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jpeg_error_mgr {int dummy; } ;
struct jpeg_decompress_struct {int output_width; int output_height; int output_scanline; int do_fancy_upsampling; int raw_data_out; int err; } ;
typedef unsigned char* JSAMPROW ;
typedef unsigned char JSAMPLE ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (unsigned char*,int,int,int *) ;
 int FUNC_5 (struct jpeg_decompress_struct*) ;
 int FUNC_6 (struct jpeg_decompress_struct*) ;
 int FUNC_7 (struct jpeg_decompress_struct*) ;
 int FUNC_8 (struct jpeg_decompress_struct*,int ) ;
 int FUNC_9 (struct jpeg_decompress_struct*,unsigned char***,int) ;
 int FUNC_10 (struct jpeg_decompress_struct*) ;
 int FUNC_11 (struct jpeg_error_mgr*) ;
 int FUNC_12 (struct jpeg_decompress_struct*,int *) ;
 unsigned char* FUNC_13 (int) ;
 int VAR_2 ;

int FUNC_14(int VAR_3, char *VAR_4[]) {
  const char *VAR_5;
  const char *VAR_6;
  struct jpeg_decompress_struct VAR_7;
  struct jpeg_error_mgr VAR_8;
  FILE *VAR_9;
  int VAR_10;
  int VAR_11;
  int VAR_12;
  int VAR_13;
  int VAR_14;
  int VAR_15;
  JSAMPLE *VAR_16;
  JSAMPROW VAR_17[16];
  JSAMPROW VAR_18[8];
  JSAMPROW VAR_19[8];
  JSAMPROW *VAR_20[3];
  unsigned char *VAR_21;
  int VAR_22;
  int VAR_23;
  FILE *VAR_24;

  if (VAR_3 != 3) {
    FUNC_2(VAR_2, "Required arguments:\n");
    FUNC_2(VAR_2, "1. Path to JPG input file\n");
    FUNC_2(VAR_2, "2. Path to YUV output file\n");
    return 1;
  }


  VAR_5 = VAR_4[1];
  VAR_6 = VAR_4[2];

  VAR_7.err = FUNC_11(&VAR_8);
  FUNC_5(&VAR_7);

  VAR_9 = FUNC_1(VAR_5, "rb");
  if (!VAR_9) {
    FUNC_2(VAR_2, "Invalid path to JPEG file!\n");
    return 1;
  }

  FUNC_12(&VAR_7, VAR_9);

  FUNC_8(&VAR_7, VAR_1);

  VAR_7.raw_data_out = VAR_1;
  VAR_7.do_fancy_upsampling = VAR_0;

  FUNC_10(&VAR_7);

  VAR_10 = VAR_7.output_width;
  VAR_11 = VAR_7.output_height;

  VAR_12 = (VAR_10 + 1) >> 1;
  VAR_13 = (VAR_11 + 1) >> 1;

  VAR_15 = VAR_10*VAR_11 + 2*VAR_12*VAR_13;
  VAR_21 = FUNC_13(VAR_15);
  if (!VAR_21) {
    FUNC_0(VAR_9);
    FUNC_2(VAR_2, "Memory allocation failure!\n");
    return 1;
  }

  VAR_14 = (VAR_7.output_width + (16 - 1)) & ~(16 - 1);

  VAR_16 = FUNC_13(VAR_14*16 + 2*(VAR_14/2)*8);
  if (!VAR_16) {
    FUNC_0(VAR_9);
    FUNC_3(VAR_21);
    FUNC_2(VAR_2, "Memory allocation failure!\n");
    return 1;
  }

  VAR_20[0] = VAR_17;
  VAR_20[1] = VAR_18;
  VAR_20[2] = VAR_19;

  for (VAR_23 = 0; VAR_23 < 16; VAR_23++) {
    VAR_17[VAR_23] = &VAR_16[VAR_14*VAR_23];
  }
  for (VAR_23 = 0; VAR_23 < 8; VAR_23++) {
    VAR_18[VAR_23] = &VAR_16[VAR_14*16 + (VAR_14/2)*VAR_23];
    VAR_19[VAR_23] = &VAR_16[VAR_14*16 + (VAR_14/2)*(8 + VAR_23)];
  }

  while (VAR_7.output_scanline < VAR_7.output_height) {
    int VAR_25;
    int VAR_26;

    VAR_25 = VAR_7.output_scanline;
    VAR_26 = (VAR_25 + 1) >> 1;

    FUNC_9(&VAR_7, VAR_20, 16);

    for (VAR_23 = 0; VAR_23 < 16 && VAR_25 + VAR_23 < VAR_11; VAR_23++) {
      for (VAR_22 = 0; VAR_22 < VAR_10; VAR_22++) {
        VAR_21[VAR_10*(VAR_25 + VAR_23) + VAR_22] = VAR_17[VAR_23][VAR_22];
      }
    }
    for (VAR_23 = 0; VAR_23 < 8 && VAR_26 + VAR_23 < VAR_13; VAR_23++) {
      for (VAR_22 = 0; VAR_22 < VAR_12; VAR_22++) {
        VAR_21[VAR_10*VAR_11 +
         VAR_12*(VAR_26 + VAR_23) + VAR_22] = VAR_18[VAR_23][VAR_22];
        VAR_21[VAR_10*VAR_11 + VAR_12*VAR_13 +
         VAR_12*(VAR_26 + VAR_23) + VAR_22] = VAR_19[VAR_23][VAR_22];
      }
    }
  }

  FUNC_7(&VAR_7);
  FUNC_6(&VAR_7);

  FUNC_0(VAR_9);
  FUNC_3(VAR_16);

  VAR_24 = FUNC_1(VAR_6, "wb");
  if (!VAR_24) {
    FUNC_2(VAR_2, "Invalid path to YUV file!");
    FUNC_3(VAR_21);
    return 1;
  }
  if (FUNC_4(VAR_21, VAR_15, 1, VAR_24) != 1) {
    FUNC_2(VAR_2, "Error writing yuv file\n");
  }

  FUNC_0(VAR_24);
  FUNC_3(VAR_21);

  return 0;
}
