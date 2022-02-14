
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int * VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ) ;
 char* FUNC_5 (char*,int ) ;

__attribute__((used)) static void
FUNC_6(int VAR_9)
{
    char *VAR_10;

    FUNC_3(VAR_9);
    if (VAR_9 < 0) {
 if (VAR_6 > 0) {
     VAR_3 = VAR_5;
 } else {
     VAR_0[0] = 0;
     VAR_3 = VAR_2;
 }
 FUNC_4(VAR_0, VAR_1[VAR_3]);
    }
    if ((VAR_10 = FUNC_5(VAR_0, VAR_8)) != 0) {
 FUNC_0(VAR_7, 0, (int) (VAR_10 - VAR_0));
    } else if (VAR_6 > 0) {
        if (VAR_4) {
     FUNC_2(0);
        } else {
     FUNC_1(0);
        }
    } else {
 FUNC_0(VAR_7, 0, 0);
    }
}
