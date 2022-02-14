
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int w; int h; scalar_t__ x; scalar_t__ y; } ;
struct TYPE_10__ {scalar_t__ op; int options; int * customFilter; TYPE_1__ r; } ;
typedef TYPE_2__ tjtransform ;
struct TYPE_11__ {int member_0; int member_1; int num; int denom; } ;
typedef TYPE_3__ tjscalingfactor ;
typedef int * tjhandle ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int,TYPE_3__) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 char** VAR_24 ;
 int * VAR_25 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (unsigned char*,unsigned long,int,int *) ;
 scalar_t__ FUNC_8 (int *,int ,int ) ;
 long FUNC_9 (int *) ;
 int FUNC_10 (unsigned char*,unsigned long,int,int *) ;
 int FUNC_11 (TYPE_2__*,int ,int) ;
 int VAR_26 ;
 int FUNC_12 (char*,...) ;
 TYPE_3__* VAR_27 ;
 int FUNC_13 (char*,char*,int*,int*,...) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*,char*,int) ;
 char* FUNC_17 (char*,char) ;
 char** VAR_28 ;
 scalar_t__ FUNC_18 (int) ;
 scalar_t__ FUNC_19 (int *,unsigned char*,int,int ,int,int,unsigned char**,unsigned long*,int,int,int) ;
 scalar_t__ FUNC_20 (int *,unsigned char*,unsigned long,unsigned char*,int,int ,int,int,int) ;
 scalar_t__ FUNC_21 (int *,unsigned char*,unsigned long,int*,int*,int*,int*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (unsigned char*) ;
 TYPE_3__* FUNC_24 (int*) ;
 int * FUNC_25 () ;
 int * FUNC_26 () ;
 int * FUNC_27 () ;
 unsigned char* FUNC_28 (char*,int*,int,int*,int*,int ) ;
 int* VAR_29 ;
 scalar_t__ FUNC_29 (char*,unsigned char*,int,int ,int,int,int ) ;
 scalar_t__ FUNC_30 (int *,unsigned char*,unsigned long,int,unsigned char**,unsigned long*,TYPE_2__*,int) ;
 int FUNC_31 (char*) ;

int FUNC_32(int VAR_30, char **VAR_31)
{
  tjscalingfactor VAR_32 = { 1, 1 };
  int VAR_33 = -1, VAR_34 = -1;
  tjtransform VAR_35;
  int VAR_36 = 0;
  int VAR_37, VAR_38;
  char *VAR_39, *VAR_40;
  FILE *VAR_41 = ((void*)0);
  unsigned char *VAR_42 = ((void*)0), *VAR_43 = ((void*)0);
  int VAR_44 = 0, VAR_45, VAR_46 = VAR_8;
  tjhandle VAR_47 = ((void*)0);

  if ((VAR_27 = FUNC_24(&VAR_26)) == ((void*)0))
    FUNC_2("getting scaling factors");
  FUNC_11(&VAR_35, 0, sizeof(tjtransform));

  if (VAR_30 < 3)
    FUNC_31(VAR_31[0]);


  for (VAR_45 = 3; VAR_45 < VAR_30; VAR_45++) {
    if (!FUNC_16(VAR_31[VAR_45], "-sc", 3) && VAR_45 < VAR_30 - 1) {
      int VAR_48 = 0, VAR_49 = 0, VAR_50 = 0, VAR_51;

      if (FUNC_13(VAR_31[++VAR_45], "%d/%d", &VAR_49, &VAR_50) < 2)
        FUNC_31(VAR_31[0]);
      for (VAR_51 = 0; VAR_51 < VAR_26; VAR_51++) {
        if ((double)VAR_49 / (double)VAR_50 == (double)VAR_27[VAR_51].num /
                                             (double)VAR_27[VAR_51].denom) {
          VAR_32 = VAR_27[VAR_51];
          VAR_48 = 1;
          break;
        }
      }
      if (VAR_48 != 1)
        FUNC_31(VAR_31[0]);
    } else if (!FUNC_16(VAR_31[VAR_45], "-su", 3) && VAR_45 < VAR_30 - 1) {
      VAR_45++;
      if (!FUNC_16(VAR_31[VAR_45], "g", 1))
        VAR_33 = VAR_12;
      else if (!FUNC_14(VAR_31[VAR_45], "444"))
        VAR_33 = VAR_11;
      else if (!FUNC_14(VAR_31[VAR_45], "422"))
        VAR_33 = VAR_10;
      else if (!FUNC_14(VAR_31[VAR_45], "420"))
        VAR_33 = VAR_9;
      else
        FUNC_31(VAR_31[0]);
    } else if (!FUNC_16(VAR_31[VAR_45], "-q", 2) && VAR_45 < VAR_30 - 1) {
      VAR_34 = FUNC_4(VAR_31[++VAR_45]);
      if (VAR_34 < 1 || VAR_34 > 100)
        FUNC_31(VAR_31[0]);
    } else if (!FUNC_16(VAR_31[VAR_45], "-g", 2))
      VAR_35.options |= VAR_14;
    else if (!FUNC_14(VAR_31[VAR_45], "-hflip"))
      VAR_35.op = VAR_16;
    else if (!FUNC_14(VAR_31[VAR_45], "-vflip"))
      VAR_35.op = VAR_23;
    else if (!FUNC_14(VAR_31[VAR_45], "-transpose"))
      VAR_35.op = VAR_21;
    else if (!FUNC_14(VAR_31[VAR_45], "-transverse"))
      VAR_35.op = VAR_22;
    else if (!FUNC_14(VAR_31[VAR_45], "-rot90"))
      VAR_35.op = VAR_20;
    else if (!FUNC_14(VAR_31[VAR_45], "-rot180"))
      VAR_35.op = VAR_18;
    else if (!FUNC_14(VAR_31[VAR_45], "-rot270"))
      VAR_35.op = VAR_19;
    else if (!FUNC_14(VAR_31[VAR_45], "-custom"))
      VAR_35.customFilter = VAR_25;
    else if (!FUNC_16(VAR_31[VAR_45], "-c", 2) && VAR_45 < VAR_30 - 1) {
      if (FUNC_13(VAR_31[++VAR_45], "%dx%d+%d+%d", &VAR_35.r.w, &VAR_35.r.h, &VAR_35.r.x,
                 &VAR_35.r.y) < 4 ||
          VAR_35.r.x < 0 || VAR_35.r.y < 0 || VAR_35.r.w < 1 || VAR_35.r.h < 1)
        FUNC_31(VAR_31[0]);
      VAR_35.options |= VAR_13;
    } else if (!FUNC_14(VAR_31[VAR_45], "-fastupsample")) {
      FUNC_12("Using fast upsampling code\n");
      VAR_36 |= VAR_5;
    } else if (!FUNC_14(VAR_31[VAR_45], "-fastdct")) {
      FUNC_12("Using fastest DCT/IDCT algorithm\n");
      VAR_36 |= VAR_4;
    } else if (!FUNC_14(VAR_31[VAR_45], "-accuratedct")) {
      FUNC_12("Using most accurate DCT/IDCT algorithm\n");
      VAR_36 |= VAR_3;
    } else FUNC_31(VAR_31[0]);
  }


  VAR_39 = FUNC_17(VAR_31[1], '.');
  VAR_40 = FUNC_17(VAR_31[2], '.');
  if (VAR_39 == ((void*)0) || VAR_40 == ((void*)0) || FUNC_15(VAR_39) < 2 ||
      FUNC_15(VAR_40) < 2)
    FUNC_31(VAR_31[0]);
  VAR_39 = &VAR_39[1];
  VAR_40 = &VAR_40[1];

  if (!FUNC_14(VAR_39, "jpg")) {

    long VAR_52;
    int VAR_53, VAR_54;
    int VAR_55 = (VAR_35.op != VAR_17 || VAR_35.options != 0 ||
                       VAR_35.customFilter != ((void*)0));
    unsigned long VAR_56;


    if ((VAR_41 = FUNC_6(VAR_31[1], "rb")) == ((void*)0))
      FUNC_3("opening input file");
    if (FUNC_8(VAR_41, 0, VAR_1) < 0 || ((VAR_52 = FUNC_9(VAR_41)) < 0) ||
        FUNC_8(VAR_41, 0, VAR_2) < 0)
      FUNC_3("determining input file size");
    if (VAR_52 == 0)
      FUNC_1("determining input file size", "Input file contains no data");
    VAR_56 = (unsigned long)VAR_52;
    if ((VAR_43 = (unsigned char *)FUNC_18(VAR_56)) == ((void*)0))
      FUNC_3("allocating JPEG buffer");
    if (FUNC_7(VAR_43, VAR_56, 1, VAR_41) < 1)
      FUNC_3("reading input file");
    FUNC_5(VAR_41); VAR_41 = ((void*)0);

    if (VAR_55) {

      unsigned char *VAR_57 = ((void*)0);
      unsigned long VAR_58 = 0;

      if ((VAR_47 = FUNC_27()) == ((void*)0))
        FUNC_2("initializing transformer");
      VAR_35.options |= VAR_15;
      if (FUNC_30(VAR_47, VAR_43, VAR_56, 1, &VAR_57, &VAR_58,
                      &VAR_35, VAR_36) < 0)
        FUNC_2("transforming input image");
      FUNC_23(VAR_43);
      VAR_43 = VAR_57;
      VAR_56 = VAR_58;
    } else {
      if ((VAR_47 = FUNC_26()) == ((void*)0))
        FUNC_2("initializing decompressor");
    }

    if (FUNC_21(VAR_47, VAR_43, VAR_56, &VAR_37, &VAR_38,
                            &VAR_53, &VAR_54) < 0)
      FUNC_2("reading JPEG header");

    FUNC_12("%s Image:  %d x %d pixels, %s subsampling, %s colorspace\n",
           (VAR_55 ? "Transformed" : "Input"), VAR_37, VAR_38,
           VAR_28[VAR_53], VAR_24[VAR_54]);

    if (!FUNC_14(VAR_40, "jpg") && VAR_55 &&
        VAR_32.num == 1 && VAR_32.denom == 1 && VAR_33 < 0 &&
        VAR_34 < 0) {


      if ((VAR_41 = FUNC_6(VAR_31[2], "wb")) == ((void*)0))
        FUNC_3("opening output file");
      if (FUNC_10(VAR_43, VAR_56, 1, VAR_41) < 1)
        FUNC_3("writing output file");
      FUNC_5(VAR_41); VAR_41 = ((void*)0);
      goto bailout;
    }




    VAR_37 = FUNC_0(VAR_37, VAR_32);
    VAR_38 = FUNC_0(VAR_38, VAR_32);
    if (VAR_33 < 0)
      VAR_33 = VAR_53;

    VAR_46 = VAR_6;
    if ((VAR_42 = (unsigned char *)FUNC_18(VAR_37 * VAR_38 *
                                           VAR_29[VAR_46])) == ((void*)0))
      FUNC_3("allocating uncompressed image buffer");

    if (FUNC_20(VAR_47, VAR_43, VAR_56, VAR_42, VAR_37, 0, VAR_38,
                      VAR_46, VAR_36) < 0)
      FUNC_2("decompressing JPEG image");
    FUNC_23(VAR_43); VAR_43 = ((void*)0);
    FUNC_22(VAR_47); VAR_47 = ((void*)0);
  } else {

    if ((VAR_42 = FUNC_28(VAR_31[1], &VAR_37, 1, &VAR_38, &VAR_46,
                              0)) == ((void*)0))
      FUNC_2("loading input image");
    if (VAR_33 < 0) {
      if (VAR_46 == VAR_7)
        VAR_33 = VAR_12;
      else
        VAR_33 = VAR_11;
    }
    FUNC_12("Input Image:  %d x %d pixels\n", VAR_37, VAR_38);
  }

  FUNC_12("Output Image (%s):  %d x %d pixels", VAR_40, VAR_37, VAR_38);

  if (!FUNC_14(VAR_40, "jpg")) {

    unsigned char *VAR_59 = ((void*)0);
    unsigned long VAR_60 = 0;

    if (VAR_34 < 0)
      VAR_34 = VAR_0;
    FUNC_12(", %s subsampling, quality = %d\n", VAR_28[VAR_33],
           VAR_34);

    if ((VAR_47 = FUNC_25()) == ((void*)0))
      FUNC_2("initializing compressor");
    if (FUNC_19(VAR_47, VAR_42, VAR_37, 0, VAR_38, VAR_46,
                    &VAR_59, &VAR_60, VAR_33, VAR_34, VAR_36) < 0)
      FUNC_2("compressing image");
    FUNC_22(VAR_47); VAR_47 = ((void*)0);


    if ((VAR_41 = FUNC_6(VAR_31[2], "wb")) == ((void*)0))
      FUNC_3("opening output file");
    if (FUNC_10(VAR_59, VAR_60, 1, VAR_41) < 1)
      FUNC_3("writing output file");
    FUNC_22(VAR_47); VAR_47 = ((void*)0);
    FUNC_5(VAR_41); VAR_41 = ((void*)0);
    FUNC_23(VAR_59); VAR_59 = ((void*)0);
  } else {


    FUNC_12("\n");
    if (FUNC_29(VAR_31[2], VAR_42, VAR_37, 0, VAR_38, VAR_46, 0) < 0)
      FUNC_2("saving output image");
  }

bailout:
  if (VAR_42) FUNC_23(VAR_42);
  if (VAR_47) FUNC_22(VAR_47);
  if (VAR_43) FUNC_23(VAR_43);
  if (VAR_41) FUNC_5(VAR_41);
  return VAR_44;
}
