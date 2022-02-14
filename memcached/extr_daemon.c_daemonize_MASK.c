
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;

int FUNC_8(int VAR_5, int VAR_6)
{
    int VAR_7;

    switch (FUNC_4()) {
    case -1:
        return (-1);
    case 0:
        break;
    default:
        FUNC_0(VAR_0);
    }

    if (FUNC_7() == -1)
        return (-1);

    if (VAR_5 == 0) {
        if(FUNC_1("/") != 0) {
            FUNC_6("chdir");
            return (-1);
        }
    }

    if (VAR_6 == 0 && (VAR_7 = FUNC_5("/dev/null", VAR_1, 0)) != -1) {
        if(FUNC_3(VAR_7, VAR_3) < 0) {
            FUNC_6("dup2 stdin");
            return (-1);
        }
        if(FUNC_3(VAR_7, VAR_4) < 0) {
            FUNC_6("dup2 stdout");
            return (-1);
        }
        if(FUNC_3(VAR_7, VAR_2) < 0) {
            FUNC_6("dup2 stderr");
            return (-1);
        }

        if (VAR_7 > VAR_2) {
            if(FUNC_2(VAR_7) < 0) {
                FUNC_6("close");
                return (-1);
            }
        }
    }
    return (0);
}
