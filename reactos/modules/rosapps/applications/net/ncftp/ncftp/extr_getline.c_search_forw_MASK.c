
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 scalar_t__* VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_2 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__*,char*) ;
 char* FUNC_5 (char*,int ) ;

__attribute__((used)) static void
FUNC_6(int VAR_9)
{
    int VAR_10 = 0;
    char *VAR_11, *VAR_12;

    VAR_4 = 1;
    if (VAR_1 == 0) {
 VAR_5 = VAR_3 = VAR_2;
 FUNC_3(0);
 VAR_1 = 1;
        VAR_0[0] = 0;
 FUNC_1(VAR_7, 0, 0);
    } else if (VAR_6 > 0) {
 while (!VAR_10) {
     VAR_11 = FUNC_2();
     if (*VAR_11 == 0) {
        VAR_0[0] = 0;
        FUNC_1(VAR_7, 0, 0);
        VAR_10 = 1;
     } else if ((VAR_12 = FUNC_5(VAR_11, VAR_8)) != 0) {
        FUNC_4(VAR_0, VAR_11);
        FUNC_1(VAR_7, 0, (int) (VAR_12 - VAR_11));
        if (VAR_9)
     VAR_5 = VAR_3;
        VAR_10 = 1;
     }
 }
    } else {
        FUNC_0();
    }
}
