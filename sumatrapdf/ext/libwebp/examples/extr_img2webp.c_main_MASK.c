
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {int use_argb; int width; int height; } ;
typedef TYPE_1__ WebPPicture ;
struct TYPE_22__ {scalar_t__ size; int bytes; } ;
typedef TYPE_2__ WebPData ;
struct TYPE_23__ {int lossless; void* method; int quality; } ;
typedef TYPE_3__ WebPConfig ;
struct TYPE_24__ {int minimize_size; int allow_mixed; void* kmax; void* kmin; } ;
typedef TYPE_4__ WebPAnimEncoderOptions ;
typedef int WebPAnimEncoder ;
typedef int W_CHAR ;
struct TYPE_25__ {int argc_; char** argv_; } ;
typedef TYPE_5__ CommandLineArguments ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (char const*,int*) ;
 void* FUNC_2 (char const*,int ,int*) ;
 int FUNC_3 (int,char const**,TYPE_5__*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (char const**,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int,char const**) ;
 int FUNC_8 (char const*,int ,scalar_t__) ;
 int FUNC_9 (char const*,TYPE_1__*) ;
 int FUNC_10 (int,TYPE_2__*) ;
 int FUNC_11 (int ,char*,int,...) ;
 int FUNC_12 (int *,TYPE_1__*,int,TYPE_3__*) ;
 scalar_t__ FUNC_13 (int *,TYPE_2__*) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int,int,TYPE_4__*) ;
 int FUNC_16 (TYPE_4__*) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (TYPE_1__*) ;
 int FUNC_24 (TYPE_3__*) ;
 int FUNC_25 (int ,char*,...) ;
 int FUNC_26 (char*,int const,int const,int const,int const,int const,int const) ;
 int VAR_0 ;
 int FUNC_27 (char const*,char*) ;

int FUNC_28(int VAR_1, const char* VAR_2[]) {
  const char* VAR_3 = ((void*)0);
  WebPAnimEncoder* VAR_4 = ((void*)0);
  int VAR_5 = 0;
  int VAR_6 = 0;
  int VAR_7 = 100;
  int VAR_8 = 0;
  int VAR_9 = 0;
  int VAR_10 = 0, VAR_11 = 0;
  WebPAnimEncoderOptions VAR_12;
  WebPConfig VAR_13;
  WebPPicture VAR_14;
  WebPData VAR_15;
  int VAR_16;
  int VAR_17 = 0;
  CommandLineArguments VAR_18;
  int VAR_19;

  FUNC_7(VAR_1, VAR_2);

  VAR_19 = FUNC_3(VAR_1 - 1, VAR_2 + 1, &VAR_18);
  if (!VAR_19) FUNC_4(1);

  VAR_1 = VAR_18.argc_;
  VAR_2 = VAR_18.argv_;

  FUNC_19(&VAR_15);
  if (!FUNC_16(&VAR_12) ||
      !FUNC_17(&VAR_13) ||
      !FUNC_23(&VAR_14)) {
    FUNC_25(VAR_0, "Library version mismatch!\n");
    VAR_19 = 0;
    goto End;
  }


  for (VAR_16 = 0; VAR_19 && VAR_16 < VAR_1; ++VAR_16) {
    if (VAR_2[VAR_16][0] == '-') {
      int VAR_20 = 0;
      if (!FUNC_27(VAR_2[VAR_16], "-o") && VAR_16 + 1 < VAR_1) {
        VAR_2[VAR_16] = ((void*)0);
        VAR_3 = (const char*)FUNC_5(VAR_2, ++VAR_16);
      } else if (!FUNC_27(VAR_2[VAR_16], "-kmin") && VAR_16 + 1 < VAR_1) {
        VAR_2[VAR_16] = ((void*)0);
        VAR_12.kmin = FUNC_2(VAR_2[++VAR_16], 0, &VAR_20);
      } else if (!FUNC_27(VAR_2[VAR_16], "-kmax") && VAR_16 + 1 < VAR_1) {
        VAR_2[VAR_16] = ((void*)0);
        VAR_12.kmax = FUNC_2(VAR_2[++VAR_16], 0, &VAR_20);
      } else if (!FUNC_27(VAR_2[VAR_16], "-loop") && VAR_16 + 1 < VAR_1) {
        VAR_2[VAR_16] = ((void*)0);
        VAR_9 = FUNC_2(VAR_2[++VAR_16], 0, &VAR_20);
        if (VAR_9 < 0) {
          FUNC_25(VAR_0, "Invalid non-positive loop-count (%d)\n", VAR_9);
          VAR_20 = 1;
        }
      } else if (!FUNC_27(VAR_2[VAR_16], "-min_size")) {
        VAR_12.minimize_size = 1;
      } else if (!FUNC_27(VAR_2[VAR_16], "-mixed")) {
        VAR_12.allow_mixed = 1;
        VAR_13.lossless = 0;
      } else if (!FUNC_27(VAR_2[VAR_16], "-v")) {
        VAR_5 = 1;
      } else if (!FUNC_27(VAR_2[VAR_16], "-h") || !FUNC_27(VAR_2[VAR_16], "-help")) {
        FUNC_6();
        goto End;
      } else if (!FUNC_27(VAR_2[VAR_16], "-version")) {
        const int VAR_21 = FUNC_20();
        const int VAR_22 = FUNC_21();
        FUNC_26("WebP Encoder version: %d.%d.%d\nWebP Mux version: %d.%d.%d\n",
               (VAR_21 >> 16) & 0xff, (VAR_21 >> 8) & 0xff,
               VAR_21 & 0xff, (VAR_22 >> 16) & 0xff,
               (VAR_22 >> 8) & 0xff, VAR_22 & 0xff);
        goto End;
      } else {
        continue;
      }
      VAR_19 = !VAR_20;
      if (!VAR_19) goto End;
      VAR_2[VAR_16] = ((void*)0);
    } else {
      VAR_17 |= 1;
    }
  }
  if (!VAR_17) {
    FUNC_25(VAR_0, "No input file(s) for generating animation!\n");
    goto End;
  }


  VAR_6 = 0;
  VAR_13.lossless = 1;
  for (VAR_16 = 0; VAR_19 && VAR_16 < VAR_1; ++VAR_16) {
    if (VAR_2[VAR_16] == ((void*)0)) continue;
    if (VAR_2[VAR_16][0] == '-') {
      int VAR_23 = 0;
      if (!FUNC_27(VAR_2[VAR_16], "-lossy")) {
        if (!VAR_12.allow_mixed) VAR_13.lossless = 0;
      } else if (!FUNC_27(VAR_2[VAR_16], "-lossless")) {
        if (!VAR_12.allow_mixed) VAR_13.lossless = 1;
      } else if (!FUNC_27(VAR_2[VAR_16], "-q") && VAR_16 + 1 < VAR_1) {
        VAR_13.quality = FUNC_1(VAR_2[++VAR_16], &VAR_23);
      } else if (!FUNC_27(VAR_2[VAR_16], "-m") && VAR_16 + 1 < VAR_1) {
        VAR_13.method = FUNC_2(VAR_2[++VAR_16], 0, &VAR_23);
      } else if (!FUNC_27(VAR_2[VAR_16], "-d") && VAR_16 + 1 < VAR_1) {
        VAR_7 = FUNC_2(VAR_2[++VAR_16], 0, &VAR_23);
        if (VAR_7 <= 0) {
          FUNC_25(VAR_0, "Invalid negative duration (%d)\n", VAR_7);
          VAR_23 = 1;
        }
      } else {
        VAR_23 = 1;
        FUNC_25(VAR_0, "Unknown option [%s]\n", VAR_2[VAR_16]);
      }
      VAR_19 = !VAR_23;
      if (!VAR_19) goto End;
      continue;
    }

    if (VAR_19) {
      VAR_19 = FUNC_24(&VAR_13);
      if (!VAR_19) {
        FUNC_25(VAR_0, "Invalid configuration.\n");
        goto End;
      }
    }


    VAR_14.use_argb = 1;
    VAR_19 = FUNC_9((const char*)FUNC_5(VAR_2, VAR_16), &VAR_14);
    if (!VAR_19) goto End;

    if (VAR_4 == ((void*)0)) {
      VAR_10 = VAR_14.width;
      VAR_11 = VAR_14.height;
      VAR_4 = FUNC_15(VAR_10, VAR_11, &VAR_12);
      VAR_19 = (VAR_4 != ((void*)0));
      if (!VAR_19) {
        FUNC_25(VAR_0, "Could not create WebPAnimEncoder object.\n");
      }
    }

    if (VAR_19) {
      VAR_19 = (VAR_10 == VAR_14.width && VAR_11 == VAR_14.height);
      if (!VAR_19) {
        FUNC_25(VAR_0, "Frame #%d dimension mismatched! "
                        "Got %d x %d. Was expecting %d x %d.\n",
                VAR_6, VAR_14.width, VAR_14.height, VAR_10, VAR_11);
      }
    }

    if (VAR_19) {
      VAR_19 = FUNC_12(VAR_4, &VAR_14, VAR_8, &VAR_13);
      if (!VAR_19) {
        FUNC_25(VAR_0, "Error while adding frame #%d\n", VAR_6);
      }
    }
    FUNC_22(&VAR_14);
    if (!VAR_19) goto End;

    if (VAR_5) {
      FUNC_11(VAR_0, "Added frame #%3d at time %4d (file: %s)\n",
               VAR_6, VAR_8, FUNC_5(VAR_2, VAR_16));
    }
    VAR_8 += VAR_7;
    ++VAR_6;
  }


  VAR_19 = VAR_19 && FUNC_12(VAR_4, ((void*)0), VAR_8, ((void*)0));
  VAR_19 = VAR_19 && FUNC_13(VAR_4, &VAR_15);
  if (!VAR_19) {
    FUNC_25(VAR_0, "Error during final animation assembly.\n");
  }

 End:

  FUNC_14(VAR_4);

  if (VAR_19 && VAR_9 > 0) {
    VAR_19 = FUNC_10(VAR_9, &VAR_15);
  }

  if (VAR_19) {
    if (VAR_3 != ((void*)0)) {
      VAR_19 = FUNC_8(VAR_3, VAR_15.bytes, VAR_15.size);
      if (VAR_19) FUNC_11(VAR_0, "output file: %s     ", (const W_CHAR*)VAR_3);
    } else {
      FUNC_25(VAR_0, "[no output file specified]   ");
    }
  }

  if (VAR_19) {
    FUNC_25(VAR_0, "[%d frames, %u bytes].\n",
            VAR_6, (unsigned int)VAR_15.size);
  }
  FUNC_18(&VAR_15);
  FUNC_0(&VAR_18);
  FUNC_4(VAR_19 ? 0 : 1);
}
