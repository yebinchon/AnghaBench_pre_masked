
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char*) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (unsigned char*,int,int,int,int,int,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (unsigned char*,int,int,int,int,int) ;
 char** VAR_8 ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,int,char*,char*,int,char*,char const*) ;
 scalar_t__ FUNC_10 (char const*,char*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (unsigned char*) ;
 unsigned char* FUNC_13 (char*,int*,int,int*,int*,int) ;
 int* VAR_9 ;
 int FUNC_14 (char*,unsigned char*,int,int,int,int,int) ;
 int FUNC_15 (char*) ;

int FUNC_16(const char *VAR_10, int VAR_11, int VAR_12, int VAR_13, int VAR_14,
              int VAR_15)
{
  char VAR_16[80], *VAR_17, VAR_18[65];
  int VAR_19 = VAR_9[VAR_14], VAR_20 = FUNC_1(VAR_11 * VAR_19, VAR_12), VAR_21 = 0,
    VAR_22 = 0, VAR_23 = 0, VAR_24 = VAR_14;
  unsigned char *VAR_25 = ((void*)0);
  char *VAR_26;

  if (VAR_14 == VAR_3) {
    VAR_26 = !FUNC_10(VAR_10, "ppm") ? "112c682e82ce5de1cca089e20d60000b" :
                                       "51976530acf75f02beddf5d21149101d";
  } else {
    VAR_26 = !FUNC_10(VAR_10, "ppm") ? "c0c9f772b464d1896326883a5c79c545" :
                                       "6d659071b9bfcdee2def22cb58ddadca";
  }

  if ((VAR_25 = (unsigned char *)FUNC_11(VAR_20 * VAR_13)) == ((void*)0))
    FUNC_2("Could not allocate memory");
  FUNC_7(VAR_25, VAR_11, VAR_20, VAR_13, VAR_14, VAR_15);

  FUNC_9(VAR_16, 80, "test_bmp_%s_%d_%s.%s", VAR_8[VAR_14], VAR_12,
           (VAR_15 & VAR_0) ? "bu" : "td", VAR_10);
  FUNC_5(FUNC_14(VAR_16, VAR_25, VAR_11, VAR_20, VAR_13, VAR_14, VAR_15));
  VAR_17 = FUNC_0(VAR_16, VAR_18);
  if (FUNC_10(VAR_17, VAR_26))
    FUNC_3(VAR_16, VAR_17, VAR_26);

  FUNC_12(VAR_25); VAR_25 = ((void*)0);
  if ((VAR_25 = FUNC_13(VAR_16, &VAR_21, VAR_12, &VAR_22, &VAR_14,
                         VAR_15)) == ((void*)0))
    FUNC_4();
  if (VAR_11 != VAR_21 || VAR_13 != VAR_22) {
    FUNC_8("\n   Image dimensions of %s are bogus\n", VAR_16);
    VAR_23 = -1; goto bailout;
  }
  if (!FUNC_6(VAR_25, VAR_11, VAR_20, VAR_13, VAR_14, VAR_15, 0)) {
    FUNC_8("\n   Pixel data in %s is bogus\n", VAR_16);
    VAR_23 = -1; goto bailout;
  }
  if (VAR_14 == VAR_3) {
    FUNC_12(VAR_25); VAR_25 = ((void*)0);
    VAR_14 = VAR_6;
    if ((VAR_25 = FUNC_13(VAR_16, &VAR_21, VAR_12, &VAR_22, &VAR_14,
                           VAR_15)) == ((void*)0))
      FUNC_4();
    VAR_20 = FUNC_1(VAR_11 * VAR_9[VAR_14], VAR_12);
    if (!FUNC_6(VAR_25, VAR_11, VAR_20, VAR_13, VAR_14, VAR_15, 1)) {
      FUNC_8("\n   Converting %s to RGB failed\n", VAR_16);
      VAR_23 = -1; goto bailout;
    }

    FUNC_12(VAR_25); VAR_25 = ((void*)0);
    VAR_14 = VAR_2;
    if ((VAR_25 = FUNC_13(VAR_16, &VAR_21, VAR_12, &VAR_22, &VAR_14,
                           VAR_15)) == ((void*)0))
      FUNC_4();
    VAR_20 = FUNC_1(VAR_11 * VAR_9[VAR_14], VAR_12);
    if (!FUNC_6(VAR_25, VAR_11, VAR_20, VAR_13, VAR_14, VAR_15, 1)) {
      FUNC_8("\n   Converting %s to CMYK failed\n", VAR_16);
      VAR_23 = -1; goto bailout;
    }
  }


  FUNC_12(VAR_25); VAR_25 = ((void*)0);
  VAR_14 = VAR_24;
  VAR_24 = VAR_5;
  if ((VAR_25 = FUNC_13(VAR_16, &VAR_21, VAR_12, &VAR_22,
                         &VAR_24, VAR_15)) == ((void*)0))
    FUNC_4();
  if ((VAR_14 == VAR_3 && VAR_24 != VAR_3) ||
      (VAR_14 != VAR_3 && !FUNC_10(VAR_10, "bmp") &&
       VAR_24 != VAR_1) ||
      (VAR_14 != VAR_3 && !FUNC_10(VAR_10, "ppm") &&
       VAR_24 != VAR_4)) {
    FUNC_8("\n   tjLoadImage() returned unexpected pixel format: %s\n",
           VAR_8[VAR_24]);
    VAR_23 = -1;
  }
  FUNC_15(VAR_16);

bailout:
  if (VAR_25) FUNC_12(VAR_25);
  if (VAR_7 < 0) return VAR_7;
  return VAR_23;
}
