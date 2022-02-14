
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * tjhandle ;
struct TYPE_3__ {int num; int denom; } ;
typedef int FILE ;


 int FUNC_0 (int,TYPE_1__) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 unsigned char FUNC_4 (unsigned char) ;
 double VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 char* VAR_6 ;
 int FUNC_5 (int *) ;
 int VAR_7 ;
 int FUNC_6 (unsigned char*) ;
 double FUNC_7 () ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (unsigned char*,int,int) ;
 int FUNC_10 (int,int) ;
 size_t VAR_8 ;
 int FUNC_11 (char*,...) ;
 int VAR_9 ;
 TYPE_1__ VAR_10 ;
 char* FUNC_12 (double,int,char*,int) ;
 int FUNC_13 (char*,int,char*,...) ;
 char* FUNC_14 (char*,char) ;
 char** VAR_11 ;
 int* VAR_12 ;
 int FUNC_15 (int,int ,int,int) ;
 int FUNC_16 (int *,unsigned char*,int ,int,unsigned char*,int,int,int,size_t,int ) ;
 int FUNC_17 (int *,unsigned char*,unsigned long,unsigned char*,int,int,int,size_t,int ) ;
 int FUNC_18 (int *,unsigned char*,unsigned long,unsigned char*,int,int ,int,int ) ;
 int FUNC_19 (int *) ;
 int* VAR_13 ;
 int * FUNC_20 () ;
 int* VAR_14 ;
 int* VAR_15 ;
 int FUNC_21 (char*,unsigned char*,int,int ,int,size_t,int ) ;
 double VAR_16 ;
 int VAR_17 ;

int FUNC_22(unsigned char *VAR_18, unsigned char **VAR_19,
           unsigned long *VAR_20, unsigned char *VAR_21, int VAR_22, int VAR_23,
           int VAR_24, int VAR_25, char *VAR_26, int VAR_27, int VAR_28)
{
  char VAR_29[1024], VAR_30[20] = "\0", VAR_31[6] = "\0", *VAR_32;
  FILE *VAR_33 = ((void*)0);
  tjhandle VAR_34 = ((void*)0);
  int VAR_35, VAR_36, VAR_37 = 0, VAR_38 = 0, VAR_39 = 0;
  double VAR_40, VAR_41;
  int VAR_42 = VAR_14[VAR_8];
  int VAR_43 = FUNC_0(VAR_22, VAR_10);
  int VAR_44 = FUNC_0(VAR_23, VAR_10);
  int VAR_45 = VAR_43 * VAR_42;
  int VAR_46 = (VAR_22 + VAR_27 - 1) / VAR_27, VAR_47 = (VAR_23 + VAR_28 - 1) / VAR_28;
  unsigned char *VAR_48, *VAR_49, *VAR_50 = ((void*)0);

  if (VAR_25 > 0) {
    FUNC_13(VAR_31, 6, "_Q%d", VAR_25);
    VAR_31[5] = 0;
  }

  if ((VAR_34 = FUNC_20()) == ((void*)0))
    FUNC_1("executing tjInitDecompress()");

  if (VAR_21 == ((void*)0)) {
    if ((VAR_21 = (unsigned char *)FUNC_8(VAR_45 * VAR_44)) == ((void*)0))
      FUNC_3("allocating destination buffer");
    VAR_38 = 1;
  }


  FUNC_9(VAR_21, 127, VAR_45 * VAR_44);

  if (VAR_5) {
    int VAR_51 = VAR_3 ? VAR_27 : VAR_43;
    int VAR_52 = VAR_3 ? VAR_28 : VAR_44;
    int VAR_53 = FUNC_15(VAR_51, VAR_17, VAR_52, VAR_24);

    if ((VAR_50 = (unsigned char *)FUNC_8(VAR_53)) == ((void*)0))
      FUNC_3("allocating YUV buffer");
    FUNC_9(VAR_50, 127, VAR_53);
  }


  VAR_37 = -1;
  VAR_40 = VAR_41 = 0.;
  while (1) {
    int VAR_54 = 0;
    double VAR_55 = FUNC_7();

    for (VAR_35 = 0, VAR_48 = VAR_21; VAR_35 < VAR_47;
         VAR_35++, VAR_48 += VAR_45 * VAR_28) {
      for (VAR_36 = 0, VAR_49 = VAR_48; VAR_36 < VAR_46;
           VAR_36++, VAR_54++, VAR_49 += VAR_42 * VAR_27) {
        int VAR_56 = VAR_3 ? FUNC_10(VAR_27, VAR_22 - VAR_36 * VAR_27) : VAR_43;
        int VAR_57 = VAR_3 ? FUNC_10(VAR_28, VAR_23 - VAR_35 * VAR_28) : VAR_44;

        if (VAR_5) {
          double VAR_58;

          if (FUNC_18(VAR_34, VAR_19[VAR_54], VAR_20[VAR_54], VAR_50,
                                 VAR_56, VAR_17, VAR_57, VAR_7) == -1)
            FUNC_1("executing tjDecompressToYUV2()");
          VAR_58 = FUNC_7();
          if (FUNC_16(VAR_34, VAR_50, VAR_17, VAR_24, VAR_49, VAR_56,
                          VAR_45, VAR_57, VAR_8, VAR_7) == -1)
            FUNC_1("executing tjDecodeYUV()");
          if (VAR_37 >= 0) VAR_41 += FUNC_7() - VAR_58;
        } else if (FUNC_17(VAR_34, VAR_19[VAR_54], VAR_20[VAR_54],
                                 VAR_49, VAR_56, VAR_45, VAR_57, VAR_8,
                                 VAR_7) == -1)
          FUNC_1("executing tjDecompress2()");
      }
    }
    VAR_40 += FUNC_7() - VAR_55;
    if (VAR_37 >= 0) {
      VAR_37++;
      if (VAR_40 >= VAR_1) break;
    } else if (VAR_40 >= VAR_16) {
      VAR_37 = 0;
      VAR_40 = VAR_41 = 0.;
    }
  }
  if (VAR_5) VAR_40 -= VAR_41;

  if (FUNC_19(VAR_34) == -1) FUNC_1("executing tjDestroy()");
  VAR_34 = ((void*)0);

  if (VAR_9) {
    FUNC_11("%-6s%s",
           FUNC_12((double)(VAR_22 * VAR_23) / 1000000. * (double)VAR_37 / VAR_40, 4,
                  VAR_29, 1024),
           VAR_9 == 2 ? "\n" : "  ");
    if (VAR_5)
      FUNC_11("%s\n",
             FUNC_12((double)(VAR_22 * VAR_23) / 1000000. * (double)VAR_37 / VAR_41,
                    4, VAR_29, 1024));
    else if (VAR_9 != 2) FUNC_11("\n");
  } else {
    FUNC_11("%s --> Frame rate:         %f fps\n",
           VAR_5 ? "Decomp to YUV" : "Decompress   ", (double)VAR_37 / VAR_40);
    FUNC_11("                  Throughput:         %f Megapixels/sec\n",
           (double)(VAR_22 * VAR_23) / 1000000. * (double)VAR_37 / VAR_40);
    if (VAR_5) {
      FUNC_11("YUV Decode    --> Frame rate:         %f fps\n",
             (double)VAR_37 / VAR_41);
      FUNC_11("                  Throughput:         %f Megapixels/sec\n",
             (double)(VAR_22 * VAR_23) / 1000000. * (double)VAR_37 / VAR_41);
    }
  }

  if (!VAR_4) goto bailout;

  if (VAR_10.num != 1 || VAR_10.denom != 1)
    FUNC_13(VAR_30, 20, "%d_%d", VAR_10.num, VAR_10.denom);
  else if (VAR_27 != VAR_22 || VAR_28 != VAR_23)
    FUNC_13(VAR_30, 20, "%dx%d", VAR_27, VAR_28);
  else FUNC_13(VAR_30, 20, "full");
  if (VAR_2)
    FUNC_13(VAR_29, 1024, "%s_%s.%s", VAR_26, VAR_30, VAR_6);
  else
    FUNC_13(VAR_29, 1024, "%s_%s%s_%s.%s", VAR_26, VAR_11[VAR_24],
             VAR_31, VAR_30, VAR_6);

  if (FUNC_21(VAR_29, VAR_21, VAR_43, 0, VAR_44, VAR_8, VAR_7) == -1)
    FUNC_2("saving bitmap");
  VAR_32 = FUNC_14(VAR_29, '.');
  FUNC_13(VAR_32, 1024 - (VAR_32 - VAR_29), "-err.%s", VAR_6);
  if (VAR_18 && VAR_10.num == 1 && VAR_10.denom == 1) {
    if (!VAR_9) FUNC_11("Compression error written to %s.\n", VAR_29);
    if (VAR_24 == VAR_0) {
      int VAR_59, VAR_60;

      for (VAR_35 = 0, VAR_59 = 0; VAR_35 < VAR_23; VAR_35++, VAR_59 += VAR_45) {
        for (VAR_36 = 0, VAR_60 = VAR_59; VAR_36 < VAR_22; VAR_36++, VAR_60 += VAR_42) {
          int VAR_61 = VAR_60 + VAR_15[VAR_8];
          int VAR_62 = VAR_60 + VAR_13[VAR_8];
          int VAR_63 = VAR_60 + VAR_12[VAR_8];
          int VAR_64 = (int)((double)VAR_18[VAR_61] * 0.299 +
                        (double)VAR_18[VAR_62] * 0.587 +
                        (double)VAR_18[VAR_63] * 0.114 + 0.5);

          if (VAR_64 > 255) VAR_64 = 255;
          if (VAR_64 < 0) VAR_64 = 0;
          VAR_21[VAR_61] = FUNC_4(VAR_21[VAR_61] - VAR_64);
          VAR_21[VAR_62] = FUNC_4(VAR_21[VAR_62] - VAR_64);
          VAR_21[VAR_63] = FUNC_4(VAR_21[VAR_63] - VAR_64);
        }
      }
    } else {
      for (VAR_35 = 0; VAR_35 < VAR_23; VAR_35++)
        for (VAR_36 = 0; VAR_36 < VAR_22 * VAR_42; VAR_36++)
          VAR_21[VAR_45 * VAR_35 + VAR_36] =
            FUNC_4(VAR_21[VAR_45 * VAR_35 + VAR_36] - VAR_18[VAR_45 * VAR_35 + VAR_36]);
    }
    if (FUNC_21(VAR_29, VAR_21, VAR_22, 0, VAR_23, VAR_8, VAR_7) == -1)
      FUNC_2("saving bitmap");
  }

bailout:
  if (VAR_33) FUNC_5(VAR_33);
  if (VAR_34) FUNC_19(VAR_34);
  if (VAR_21 && VAR_38) FUNC_6(VAR_21);
  if (VAR_50) FUNC_6(VAR_50);
  return VAR_39;
}
