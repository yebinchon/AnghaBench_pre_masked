
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,char) ;

void FUNC_2(char VAR_0, char *VAR_1)
{
    if (FUNC_0(VAR_0)) {
        FUNC_1("Undefined switch /%c!\n", VAR_0);
    } else {
        FUNC_1("Alphabetic character is expected after '%c' "
               "in switch specification\n", *(VAR_1 - 1));
    }

}
