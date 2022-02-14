
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {float width; float height; scalar_t__ use_argb; int argb_stride; scalar_t__ argb; } ;
typedef TYPE_1__ WebPPicture ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int,int const*,int,int,float,float,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char const**,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int,char const**) ;
 scalar_t__ FUNC_6 (char const*,int *,size_t) ;
 size_t FUNC_7 (char const*,TYPE_1__*,int) ;
 int FUNC_8 (int *,int,int const*,int,int,float,float,int) ;
 int FUNC_9 (TYPE_1__*,int) ;
 size_t FUNC_10 (int const*,float,float,int,int **) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_1__*,TYPE_1__*,int,float*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (int ,char*,...) ;
 int FUNC_16 (char*,unsigned int,float,float,float,float,float,float) ;
 int VAR_0 ;
 int FUNC_17 (char const*,char*) ;

int FUNC_18(int VAR_1, const char* VAR_2[]) {
  WebPPicture VAR_3, VAR_4;
  size_t VAR_5 = 0, VAR_6 = 0;
  int VAR_7 = 1;
  float VAR_8[5];
  int VAR_9 = 0;
  int VAR_10;
  int VAR_11 = 0;
  int VAR_12 = 0;
  int VAR_13 = 0;
  int VAR_14 = 0;
  const char* VAR_15 = ((void*)0);
  const char* VAR_16 = ((void*)0);
  const char* VAR_17 = ((void*)0);

  FUNC_5(VAR_1, VAR_2);

  if (!FUNC_14(&VAR_3) || !FUNC_14(&VAR_4)) {
    FUNC_15(VAR_0, "Can't init pictures\n");
    FUNC_2(1);
  }

  for (VAR_10 = 1; VAR_10 < VAR_1; ++VAR_10) {
    if (!FUNC_17(VAR_2[VAR_10], "-ssim")) {
      VAR_9 = 1;
    } else if (!FUNC_17(VAR_2[VAR_10], "-psnr")) {
      VAR_9 = 0;
    } else if (!FUNC_17(VAR_2[VAR_10], "-alpha")) {
      VAR_12 = 1;
    } else if (!FUNC_17(VAR_2[VAR_10], "-scale")) {
      VAR_13 = 1;
    } else if (!FUNC_17(VAR_2[VAR_10], "-gray")) {
      VAR_14 = 1;
    } else if (!FUNC_17(VAR_2[VAR_10], "-h")) {
      VAR_11 = 1;
      VAR_7 = 0;
    } else if (!FUNC_17(VAR_2[VAR_10], "-o")) {
      if (++VAR_10 == VAR_1) {
        FUNC_15(VAR_0, "missing file name after %s option.\n", VAR_2[VAR_10 - 1]);
        goto End;
      }
      VAR_17 = (const char*)FUNC_3(VAR_2, VAR_10);
    } else if (VAR_15 == ((void*)0)) {
      VAR_15 = (const char*)FUNC_3(VAR_2, VAR_10);
    } else {
      VAR_16 = (const char*)FUNC_3(VAR_2, VAR_10);
    }
  }
  if (VAR_11 || VAR_15 == ((void*)0) || VAR_16 == ((void*)0)) {
    if (!VAR_11) {
      FUNC_15(VAR_0, "Error: missing arguments.\n");
    }
    FUNC_4();
    goto End;
  }
  VAR_5 = FUNC_7(VAR_15, &VAR_3, 1);
  VAR_6 = FUNC_7(VAR_16, &VAR_4, 1);
  if (VAR_5 == 0 || VAR_6 == 0) goto End;

  if (!VAR_12) {
    FUNC_9(&VAR_3, 0x00000000);
    FUNC_9(&VAR_4, 0x00000000);
  }

  if (!FUNC_12(&VAR_3, &VAR_4, VAR_9, VAR_8)) {
    FUNC_15(VAR_0, "Error while computing the distortion.\n");
    goto End;
  }
  FUNC_16("%u %.2f    %.2f %.2f %.2f %.2f [ %.2f bpp ]\n",
         (unsigned int)VAR_5,
         VAR_8[4], VAR_8[0], VAR_8[1], VAR_8[2], VAR_8[3],
         8.f * VAR_5 / VAR_3 / VAR_3);

  if (VAR_17 != ((void*)0)) {
    uint8_t* VAR_18 = ((void*)0);
    size_t VAR_19 = 0;
    if (VAR_3 != VAR_4) {
      FUNC_15(VAR_0, "Pictures are not in the same argb format. "
                      "Can't save the difference map.\n");
      goto End;
    }
    if (VAR_3) {
      int VAR_20;
      FUNC_15(VAR_0, "max differences per channel: ");
      for (VAR_20 = 0; VAR_20 < 3; ++VAR_20) {
        const int VAR_21 = (VAR_9 == 1) ?
          FUNC_8((uint8_t*)VAR_3 + VAR_20, VAR_3 * 4,
                           (const uint8_t*)VAR_4 + VAR_20, VAR_4 * 4,
                           4, VAR_3, VAR_3, VAR_13) :
          FUNC_1((uint8_t*)VAR_3 + VAR_20, VAR_3 * 4,
                           (const uint8_t*)VAR_4 + VAR_20, VAR_4 * 4,
                           4, VAR_3, VAR_3, VAR_13);
        if (VAR_21 < 0) FUNC_15(VAR_0, "\nError computing diff map\n");
        FUNC_15(VAR_0, "[%d]", VAR_21);
      }
      FUNC_15(VAR_0, "\n");
      if (VAR_14) FUNC_0(&VAR_3);
    } else {
      FUNC_15(VAR_0, "Can only compute the difference map in ARGB format.\n");
      goto End;
    }

    VAR_19 = FUNC_10((const uint8_t*)VAR_3,
                                       VAR_3, VAR_3,
                                       VAR_3 * 4,
                                       &VAR_18);
    if (VAR_19 == 0) {
      FUNC_15(VAR_0, "Error during lossless encoding.\n");
      goto End;
    }
    VAR_7 = FUNC_6(VAR_17, VAR_18, VAR_19) ? 0 : 1;
    FUNC_11(VAR_18);
    if (VAR_7) goto End;






  }
  VAR_7 = 0;

 End:
  FUNC_13(&VAR_3);
  FUNC_13(&VAR_4);
  FUNC_2(VAR_7);
}
