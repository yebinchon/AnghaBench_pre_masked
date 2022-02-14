
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (char*,char*) ;

int FUNC_5 (int VAR_3, char **VAR_4)
{
    int VAR_5;
    if ((VAR_3 == 3) && (FUNC_4 (VAR_4[2], "-s") == 0)) {
        VAR_5 = FUNC_3 (VAR_4[1]);
    } else if (VAR_3 == 2) {
        VAR_5 = FUNC_0 (VAR_4[1]);
    } else {
        FUNC_2 (VAR_2, "Usage: %s <url> [-s]\n", VAR_4[0]);
        FUNC_1 (VAR_0);
    }
    FUNC_1 (VAR_5 == 0 ? VAR_1 : VAR_0);
}
