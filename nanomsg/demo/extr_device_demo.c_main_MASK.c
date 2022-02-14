
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (char*,char*) ;

int FUNC_6 (int VAR_3, char **VAR_4)
{
    int VAR_5;

    if ((VAR_3 == 3) && (FUNC_5 (VAR_4[1], "-s") == 0)) {
        VAR_5 = FUNC_4 (VAR_4[2]);
    } else if ((VAR_3 == 4) && (FUNC_5 (VAR_4[1], "-d") == 0)) {
        VAR_5 = FUNC_1 (VAR_4[2], VAR_4[3]);
    } else if ((VAR_3 == 4) && (FUNC_5 (VAR_4[1], "-c") == 0)) {
        VAR_5 = FUNC_0 (VAR_4[2], VAR_4[3]);
    } else {
        FUNC_3 (VAR_2, "Usage: %s -s <serverurl>\n", VAR_4[0]);
        FUNC_3 (VAR_2, "Usage: %s -d <serverurl> <clienturl>\n", VAR_4[0]);
        FUNC_3 (VAR_2, "Usage: %s -c <clienturl> <name>\n", VAR_4[0]);
        FUNC_2 (VAR_0);
    }

    FUNC_2 (VAR_5 == 0 ? VAR_1 : VAR_0);
}
