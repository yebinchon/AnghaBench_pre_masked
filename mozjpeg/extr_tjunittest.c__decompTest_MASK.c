
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int num; int denom; } ;
typedef TYPE_1__ tjscalingfactor ;
typedef int tjhandle ;


 int VAR_0 ;
 int FUNC_0 (int,TYPE_1__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (unsigned char*,int,int,int,int,TYPE_1__,int) ;
 scalar_t__ FUNC_5 (unsigned char*,int,int,int,TYPE_1__) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (unsigned char*) ;
 scalar_t__ FUNC_7 (unsigned long) ;
 int FUNC_8 (unsigned char*,int ,unsigned long) ;
 int VAR_2 ;
 char** VAR_3 ;
 int FUNC_9 (char*,...) ;
 char** VAR_4 ;
 unsigned long FUNC_10 (int,int ,int,int) ;
 int FUNC_11 (int ,unsigned char*,int ,int,unsigned char*,int,int ,int,int,int) ;
 int FUNC_12 (int ,unsigned char*,unsigned long,unsigned char*,int,int ,int,int,int) ;
 int FUNC_13 (int ,unsigned char*,unsigned long,int*,int*,int*) ;
 int FUNC_14 (int ,unsigned char*,unsigned long,unsigned char*,int,int ,int,int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 () ;
 int* VAR_5 ;

void FUNC_17(tjhandle VAR_6, unsigned char *VAR_7,
                 unsigned long VAR_8, int VAR_9, int VAR_10, int VAR_11, char *VAR_12,
                 int VAR_13, int VAR_14, tjscalingfactor VAR_15)
{
  unsigned char *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
  int VAR_18 = 0, VAR_19 = 0, VAR_20 = -1;
  int VAR_21 = FUNC_0(VAR_9, VAR_15);
  int VAR_22 = FUNC_0(VAR_10, VAR_15);
  unsigned long VAR_23 = 0;

  FUNC_3(FUNC_13(VAR_6, VAR_7, VAR_8, &VAR_18, &VAR_19,
                          &VAR_20));
  if (VAR_18 != VAR_9 || VAR_19 != VAR_10 || VAR_20 != VAR_13)
    FUNC_1("Incorrect JPEG header");

  VAR_23 = VAR_21 * VAR_22 * VAR_5[VAR_11];
  if ((VAR_16 = (unsigned char *)FUNC_7(VAR_23)) == ((void*)0))
    FUNC_1("Memory allocation failure");
  FUNC_8(VAR_16, 0, VAR_23);

  if (VAR_1) {
    unsigned long VAR_24 = FUNC_10(VAR_21, VAR_2, VAR_22,
                                          VAR_13);
    tjhandle VAR_25 = FUNC_16();

    if (!VAR_25) FUNC_2();

    if ((VAR_17 = (unsigned char *)FUNC_7(VAR_24)) == ((void*)0))
      FUNC_1("Memory allocation failure");
    FUNC_8(VAR_17, 0, VAR_24);

    FUNC_9("JPEG -> YUV %s ", VAR_4[VAR_13]);
    if (VAR_15.num != 1 || VAR_15.denom != 1)
      FUNC_9("%d/%d ... ", VAR_15.num, VAR_15.denom);
    else FUNC_9("... ");
    FUNC_3(FUNC_14(VAR_6, VAR_7, VAR_8, VAR_17, VAR_21, VAR_2,
                           VAR_22, VAR_14));
    if (FUNC_5(VAR_17, VAR_21, VAR_22, VAR_13, VAR_15))
      FUNC_9("Passed.\n");
    else FUNC_9("FAILED!\n");

    FUNC_9("YUV %s -> %s %s ... ", VAR_4[VAR_13], VAR_3[VAR_11],
           (VAR_14 & VAR_0) ? "Bottom-Up" : "Top-Down ");
    FUNC_3(FUNC_11(VAR_25, VAR_17, VAR_2, VAR_13, VAR_16, VAR_21, 0,
                    VAR_22, VAR_11, VAR_14));
    FUNC_15(VAR_25);
  } else {
    FUNC_9("JPEG -> %s %s ", VAR_3[VAR_11],
           (VAR_14 & VAR_0) ? "Bottom-Up" : "Top-Down ");
    if (VAR_15.num != 1 || VAR_15.denom != 1)
      FUNC_9("%d/%d ... ", VAR_15.num, VAR_15.denom);
    else FUNC_9("... ");
    FUNC_3(FUNC_12(VAR_6, VAR_7, VAR_8, VAR_16, VAR_21, 0,
                      VAR_22, VAR_11, VAR_14));
  }

  if (FUNC_4(VAR_16, VAR_21, VAR_22, VAR_11, VAR_13, VAR_15, VAR_14))
    FUNC_9("Passed.");
  else FUNC_9("FAILED!");
  FUNC_9("\n");

bailout:
  if (VAR_17) FUNC_6(VAR_17);
  if (VAR_16) FUNC_6(VAR_16);
}
