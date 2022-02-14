
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_0; int member_1; } ;
typedef TYPE_1__ tjscalingfactor ;
typedef int tjhandle ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (unsigned char*,int,int,int,TYPE_1__) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (unsigned char*) ;
 int FUNC_5 (unsigned char*,int,int,int,int) ;
 scalar_t__ FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned char*,int ,unsigned long) ;
 int VAR_4 ;
 char** VAR_5 ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,int,char*,char*,char const*,char const*,char*,int) ;
 char** VAR_6 ;
 char** VAR_7 ;
 unsigned long FUNC_10 (int,int ,int,int) ;
 int FUNC_11 (int ,unsigned char*,int,int ,int,int,unsigned char**,unsigned long*,int,int,int) ;
 int FUNC_12 (int ,unsigned char*,int,int ,int,int,unsigned char**,unsigned long*,int,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,unsigned char*,int,int ,int,int,unsigned char*,int ,int,int) ;
 int FUNC_15 () ;
 int* VAR_8 ;
 int FUNC_16 (unsigned char*,unsigned long,char*) ;

void FUNC_17(tjhandle VAR_9, unsigned char **VAR_10, unsigned long *VAR_11,
              int VAR_12, int VAR_13, int VAR_14, char *VAR_15, int VAR_16, int VAR_17,
              int VAR_18)
{
  char VAR_19[1024];
  unsigned char *VAR_20 = ((void*)0), *VAR_21 = ((void*)0);
  const char *VAR_22 = VAR_5[VAR_14];
  const char *VAR_23 =
    (VAR_18 & VAR_0) ? "Bottom-Up" : "Top-Down ";
  const char *VAR_24 = (VAR_18 & VAR_0) ? "BU" : "TD";

  if ((VAR_20 = (unsigned char *)FUNC_6(VAR_12 * VAR_13 * VAR_8[VAR_14])) == ((void*)0))
    FUNC_0("Memory allocation failure");
  FUNC_5(VAR_20, VAR_12, VAR_13, VAR_14, VAR_18);

  if (*VAR_10 && *VAR_11 > 0) FUNC_7(*VAR_10, 0, *VAR_11);

  if (!VAR_2) VAR_18 |= VAR_1;
  if (VAR_3) {
    unsigned long VAR_25 = FUNC_10(VAR_12, VAR_4, VAR_13, VAR_16);
    tjscalingfactor VAR_26 = { 1, 1 };
    tjhandle VAR_27 = FUNC_15();

    if (!VAR_27) FUNC_1();

    if ((VAR_21 = (unsigned char *)FUNC_6(VAR_25)) == ((void*)0))
      FUNC_0("Memory allocation failure");
    FUNC_7(VAR_21, 0, VAR_25);

    FUNC_8("%s %s -> YUV %s ... ", VAR_22, VAR_23, VAR_7[VAR_16]);
    FUNC_2(FUNC_14(VAR_27, VAR_20, VAR_12, 0, VAR_13, VAR_14, VAR_21, VAR_4, VAR_16,
                     VAR_18));
    FUNC_13(VAR_27);
    if (FUNC_3(VAR_21, VAR_12, VAR_13, VAR_16, VAR_26)) FUNC_8("Passed.\n");
    else FUNC_8("FAILED!\n");

    FUNC_8("YUV %s %s -> JPEG Q%d ... ", VAR_7[VAR_16], VAR_23,
           VAR_17);
    FUNC_2(FUNC_12(VAR_9, VAR_21, VAR_12, VAR_4, VAR_13, VAR_16, VAR_10, VAR_11,
                          VAR_17, VAR_18));
  } else {
    FUNC_8("%s %s -> %s Q%d ... ", VAR_22, VAR_23, VAR_7[VAR_16],
           VAR_17);
    FUNC_2(FUNC_11(VAR_9, VAR_20, VAR_12, 0, VAR_13, VAR_14, VAR_10, VAR_11, VAR_16,
                    VAR_17, VAR_18));
  }

  FUNC_9(VAR_19, 1024, "%s_enc_%s_%s_%s_Q%d.jpg", VAR_15, VAR_22, VAR_24,
           VAR_6[VAR_16], VAR_17);
  FUNC_16(*VAR_10, *VAR_11, VAR_19);
  FUNC_8("Done.\n  Result in %s\n", VAR_19);

bailout:
  if (VAR_21) FUNC_4(VAR_21);
  if (VAR_20) FUNC_4(VAR_20);
}
