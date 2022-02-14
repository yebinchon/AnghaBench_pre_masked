
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tjhandle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (unsigned char*) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_6 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (unsigned long) ;
 unsigned long FUNC_8 (int,int,int) ;
 unsigned long FUNC_9 (int,int ,int,int) ;
 int FUNC_10 (int *,unsigned char*,int,int ,int,int ,unsigned char**,unsigned long*,int,int,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,unsigned char*,int,int ,int,int ,unsigned char*,int ,int,int ) ;
 int FUNC_13 (unsigned char*) ;
 int * FUNC_14 () ;

void FUNC_15(void)
{
  int VAR_7, VAR_8, VAR_9, VAR_10;
  unsigned char *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
  tjhandle VAR_13 = ((void*)0);
  unsigned long VAR_14 = 0;

  if ((VAR_13 = FUNC_14()) == ((void*)0)) FUNC_1();

  FUNC_5("Buffer size regression test\n");
  for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
    for (VAR_7 = 1; VAR_7 < 48; VAR_7++) {
      int VAR_15 = (VAR_7 == 1) ? 2048 : 48;

      for (VAR_8 = 1; VAR_8 < VAR_15; VAR_8++) {
        if (VAR_8 % 100 == 0) FUNC_5("%.4d x %.4d\b\b\b\b\b\b\b\b\b\b\b", VAR_7, VAR_8);
        if ((VAR_11 = (unsigned char *)FUNC_4(VAR_7 * VAR_8 * 4)) == ((void*)0))
          FUNC_0("Memory allocation failure");
        if (!VAR_4 || VAR_5) {
          if (VAR_5) VAR_14 = FUNC_9(VAR_7, VAR_6, VAR_8, VAR_10);
          else VAR_14 = FUNC_8(VAR_7, VAR_8, VAR_10);
          if ((VAR_12 = (unsigned char *)FUNC_7(VAR_14)) == ((void*)0))
            FUNC_0("Memory allocation failure");
        }

        for (VAR_9 = 0; VAR_9 < VAR_7 * VAR_8 * 4; VAR_9++) {
          if (FUNC_6() < VAR_0 / 2) VAR_11[VAR_9] = 0;
          else VAR_11[VAR_9] = 255;
        }

        if (VAR_5) {
          FUNC_2(FUNC_12(VAR_13, VAR_11, VAR_7, 0, VAR_8, VAR_2, VAR_12, VAR_6,
                           VAR_10, 0));
        } else {
          FUNC_2(FUNC_10(VAR_13, VAR_11, VAR_7, 0, VAR_8, VAR_2, &VAR_12,
                          &VAR_14, VAR_10, 100,
                          VAR_4 ? 0 : VAR_1));
        }
        FUNC_3(VAR_11); VAR_11 = ((void*)0);
        if (!VAR_4 || VAR_5) {
          FUNC_13(VAR_12); VAR_12 = ((void*)0);
        }

        if ((VAR_11 = (unsigned char *)FUNC_4(VAR_8 * VAR_7 * 4)) == ((void*)0))
          FUNC_0("Memory allocation failure");
        if (!VAR_4 || VAR_5) {
          if (VAR_5) VAR_14 = FUNC_9(VAR_8, VAR_6, VAR_7, VAR_10);
          else VAR_14 = FUNC_8(VAR_8, VAR_7, VAR_10);
          if ((VAR_12 = (unsigned char *)FUNC_7(VAR_14)) == ((void*)0))
            FUNC_0("Memory allocation failure");
        }

        for (VAR_9 = 0; VAR_9 < VAR_8 * VAR_7 * 4; VAR_9++) {
          if (FUNC_6() < VAR_0 / 2) VAR_11[VAR_9] = 0;
          else VAR_11[VAR_9] = 255;
        }

        if (VAR_5) {
          FUNC_2(FUNC_12(VAR_13, VAR_11, VAR_8, 0, VAR_7, VAR_2, VAR_12, VAR_6,
                           VAR_10, 0));
        } else {
          FUNC_2(FUNC_10(VAR_13, VAR_11, VAR_8, 0, VAR_7, VAR_2, &VAR_12,
                          &VAR_14, VAR_10, 100,
                          VAR_4 ? 0 : VAR_1));
        }
        FUNC_3(VAR_11); VAR_11 = ((void*)0);
        if (!VAR_4 || VAR_5) {
          FUNC_13(VAR_12); VAR_12 = ((void*)0);
        }
      }
    }
  }
  FUNC_5("Done.      \n");

bailout:
  if (VAR_11) FUNC_3(VAR_11);
  if (VAR_12) FUNC_13(VAR_12);
  if (VAR_13) FUNC_11(VAR_13);
}
