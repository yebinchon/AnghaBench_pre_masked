
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int images ;
typedef int W_CHAR ;
typedef int AnimatedImage ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int,double) ;
 double FUNC_2 (char const*,int*) ;
 int FUNC_3 (char const*,int ,int*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (char const**,int) ;
 int FUNC_6 (int*,int*) ;
 int FUNC_7 () ;
 int FUNC_8 (int,char const**) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (char const*,int *,int,char const*) ;
 int FUNC_11 (int ,char*,int const*,...) ;
 int FUNC_12 (char*,int const*,...) ;
 int FUNC_13 (int *,int ,int) ;
 int FUNC_14 (char*,int,int,int,int,int,int) ;
 int VAR_0 ;
 int FUNC_15 (char const*,char*) ;

int FUNC_16(int VAR_1, const char* VAR_2[]) {
  int VAR_3 = -1;
  int VAR_4 = 0;
  const char* VAR_5 = ((void*)0);
  double VAR_6 = 0.;
  int VAR_7 = 0;
  int VAR_8 = 0;
  int VAR_9 = 1;
  int VAR_10 = 0;
  int VAR_11, VAR_12;
  const char* VAR_13[2] = { ((void*)0), ((void*)0) };
  AnimatedImage VAR_14[2];

  FUNC_8(VAR_1, VAR_2);

  for (VAR_12 = 1; VAR_12 < VAR_1; ++VAR_12) {
    int VAR_15 = 0;
    if (!FUNC_15(VAR_2[VAR_12], "-dump_frames")) {
      if (VAR_12 < VAR_1 - 1) {
        VAR_4 = 1;
        VAR_5 = (const char*)FUNC_5(VAR_2, ++VAR_12);
      } else {
        VAR_15 = 1;
      }
    } else if (!FUNC_15(VAR_2[VAR_12], "-min_psnr")) {
      if (VAR_12 < VAR_1 - 1) {
        VAR_6 = FUNC_2(VAR_2[++VAR_12], &VAR_15);
      } else {
        VAR_15 = 1;
      }
    } else if (!FUNC_15(VAR_2[VAR_12], "-raw_comparison")) {
      VAR_9 = 0;
    } else if (!FUNC_15(VAR_2[VAR_12], "-max_diff")) {
      if (VAR_12 < VAR_1 - 1) {
        VAR_10 = FUNC_3(VAR_2[++VAR_12], 0, &VAR_15);
      } else {
        VAR_15 = 1;
      }
    } else if (!FUNC_15(VAR_2[VAR_12], "-h") || !FUNC_15(VAR_2[VAR_12], "-help")) {
      FUNC_7();
      FUNC_4(0);
    } else if (!FUNC_15(VAR_2[VAR_12], "-version")) {
      int VAR_16, VAR_17;
      FUNC_6(&VAR_16, &VAR_17);
      FUNC_14("WebP Decoder version: %d.%d.%d\nWebP Demux version: %d.%d.%d\n",
             (VAR_16 >> 16) & 0xff, (VAR_16 >> 8) & 0xff,
             (VAR_16 >> 0) & 0xff,
             (VAR_17 >> 16) & 0xff, (VAR_17 >> 8) & 0xff,
             (VAR_17 >> 0) & 0xff);
      FUNC_4(0);
    } else {
      if (!VAR_7) {
        VAR_13[0] = (const char*)FUNC_5(VAR_2, VAR_12);
        VAR_7 = 1;
      } else if (!VAR_8) {
        VAR_13[1] = (const char*)FUNC_5(VAR_2, VAR_12);
        VAR_8 = 1;
      } else {
        VAR_15 = 1;
      }
    }
    if (VAR_15) {
      FUNC_7();
      FUNC_4(-1);
    }
  }
  if (VAR_1 < 3) {
    FUNC_7();
    FUNC_4(-1);
  }


  if (!VAR_8) {
    FUNC_7();
    FUNC_4(-1);
  }

  if (VAR_4) {
    FUNC_12("Dumping decoded frames in: %s\n", (const W_CHAR*)VAR_5);
  }

  FUNC_13(VAR_14, 0, sizeof(VAR_14));
  for (VAR_11 = 0; VAR_11 < 2; ++VAR_11) {
    FUNC_12("Decoding file: %s\n", (const W_CHAR*)VAR_13[VAR_11]);
    if (!FUNC_10(VAR_13[VAR_11], &VAR_14[VAR_11], VAR_4, VAR_5)) {
      FUNC_11(VAR_0, "Error decoding file: %s\n Aborting.\n",
               (const W_CHAR*)VAR_13[VAR_11]);
      VAR_3 = -2;
      goto End;
    } else {
      FUNC_9(&VAR_14[VAR_11], VAR_10);
    }
  }

  if (!FUNC_1(&VAR_14[0], &VAR_14[1],
                                VAR_9, VAR_6)) {
    FUNC_11(VAR_0, "\nFiles %s and %s differ.\n", (const W_CHAR*)VAR_13[0],
             (const W_CHAR*)VAR_13[1]);
    VAR_3 = -3;
  } else {
    FUNC_12("\nFiles %s and %s are identical.\n", (const W_CHAR*)VAR_13[0],
            (const W_CHAR*)VAR_13[1]);
    VAR_3 = 0;
  }
 End:
  FUNC_0(&VAR_14[0]);
  FUNC_0(&VAR_14[1]);
  FUNC_4(VAR_3);
}
