
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char) ;
 int FUNC_2 (char const*) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (char const*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,char const*) ;
 scalar_t__ FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_9, int VAR_10, int VAR_11)
{
    static int VAR_12;
    static int VAR_13;
    static int VAR_14;
    static char VAR_15[80] = "";
    int VAR_16 = 0, VAR_17 = -1;
    int VAR_18;
    int VAR_19;
    int VAR_20;
    int VAR_21;
    int VAR_22;
    int VAR_23 = -1;
    int VAR_24, VAR_25;

    if (VAR_10 == -2) {
 VAR_5 = VAR_2 = VAR_12 = VAR_13 = VAR_14 = 0;
 FUNC_1('\r');
 FUNC_2(VAR_9);
 FUNC_5(VAR_15, VAR_9);
 VAR_10 = 0;
        VAR_8 = VAR_7 - (int) FUNC_3(VAR_9);
    } else if (FUNC_4(VAR_9, VAR_15) != 0) {
 VAR_24 = (int) FUNC_3(VAR_15);
 VAR_25 = (int) FUNC_3(VAR_9);
 VAR_2 = VAR_2 + VAR_24 - VAR_25;
 FUNC_5(VAR_15, VAR_9);
 FUNC_1('\r');
 FUNC_2(VAR_9);
 VAR_5 = VAR_12;
        VAR_8 = VAR_7 - VAR_25;
 VAR_10 = 0;
    }
    VAR_18 = (VAR_13)? VAR_8 - 1 : VAR_2 - VAR_12;
    VAR_19 = VAR_5 - VAR_12;
    if (VAR_10 >= 0) {
        VAR_2 = (int) FUNC_6(VAR_1);
        if (VAR_10 > VAR_2)
     VAR_10 = VAR_2;
    }
    if (VAR_11 > VAR_2) {
 if (VAR_11 != VAR_0) {
     if (VAR_3 == 0) {
         FUNC_0();
     }
 }
 VAR_11 = VAR_2;
    }
    if (VAR_11 < 0) {
 FUNC_0();
 VAR_11 = 0;
    }
    if (VAR_13 || (VAR_14 && VAR_11 < VAR_12 + VAR_8 - VAR_6 / 2))
 VAR_21 = 2;
    else
 VAR_21 = 0;
    VAR_20 = VAR_11 + VAR_21 + VAR_6 - VAR_8;
    if (VAR_20 > 0) {
 VAR_20 /= VAR_6;
 VAR_20 *= VAR_6;
    } else
 VAR_20 = 0;
    if (VAR_20 != VAR_12) {
 VAR_12 = VAR_20;
 VAR_14 = (VAR_12)? 1 : 0;
 VAR_13 = (VAR_2 > VAR_12 + VAR_8 - 1)? 1 : 0;
        VAR_16 = VAR_12;
 VAR_23 = VAR_17 = (VAR_13)? VAR_12 + VAR_8 - 2 : VAR_2;
    } else if (VAR_10 >= 0) {
 if (VAR_10 < VAR_12 + VAR_14) {
     VAR_16 = VAR_12;
 } else {
     VAR_16 = VAR_10;
     VAR_19 = VAR_5 - VAR_10;
 }
 VAR_13 = (VAR_2 > VAR_12 + VAR_8 - 1)? 1 : 0;
 VAR_17 = (VAR_13)? VAR_12 + VAR_8 - 2 : VAR_2;
 VAR_23 = (VAR_4 && (VAR_17 > VAR_16 + VAR_4))?
              VAR_16 + VAR_4 : VAR_17;
    }
    VAR_18 -= (VAR_13)? VAR_8 - 1 : VAR_2 - VAR_12;
    VAR_18 = (VAR_18 < 0)? 0 : VAR_18;
    if (VAR_16 <= VAR_17) {
 for (VAR_22=0; VAR_22 < VAR_19; VAR_22++)
     FUNC_1('\b');
 if (VAR_16 == VAR_12 && VAR_14) {
     FUNC_1('$');
     VAR_16++;
        }
 for (VAR_22=VAR_16; VAR_22 < VAR_23; VAR_22++)
     FUNC_1(VAR_1[VAR_22]);
 VAR_5 = VAR_23;
 if (VAR_13 && VAR_23 == VAR_17) {
     FUNC_1('$');
     VAR_5++;
 } else {
     for (VAR_22=0; VAR_22 < VAR_18; VAR_22++)
  FUNC_1(' ');
     VAR_5 += VAR_18;
 }
    }
    VAR_22 = VAR_5 - VAR_11;
    if (VAR_22 > 0) {
 while (VAR_22--)
    FUNC_1('\b');
    } else {
 for (VAR_22=VAR_5; VAR_22 < VAR_11; VAR_22++)
     FUNC_1(VAR_1[VAR_22]);
    }
    VAR_5 = VAR_11;
}
