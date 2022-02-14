
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int,int) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,char*,char*,int,int,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

int FUNC_4(int VAR_5, char** VAR_6)
{

    if (VAR_5 > 5 || (VAR_5 >= 2 && FUNC_3(VAR_6[1], "/?", 2) == 0))
    {
        FUNC_2(VAR_4,
                "Usage: %s \"font name\" [font size] [X-offset] [Y-offset]\n"
                "Default font name is: \"%s\"\n"
                "Default font size is: %i\n"
                "Default X-offset  is: %i\n"
                "Default Y-offset  is: %i\n",
                VAR_6[0],
                VAR_0, VAR_1, VAR_2, VAR_3);

        return -1;
    }

    FUNC_0((VAR_5 <= 1) ? VAR_0 : VAR_6[1],
             (VAR_5 <= 2) ? VAR_1 : FUNC_1(VAR_6[2]),
             (VAR_5 <= 3) ? VAR_2 : FUNC_1(VAR_6[3]),
             (VAR_5 <= 4) ? VAR_3 : FUNC_1(VAR_6[4]));
    return 0;
}
