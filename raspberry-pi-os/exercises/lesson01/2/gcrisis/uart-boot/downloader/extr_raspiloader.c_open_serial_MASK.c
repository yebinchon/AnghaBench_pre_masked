
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_cflag; scalar_t__ c_lflag; scalar_t__ c_oflag; scalar_t__ c_iflag; scalar_t__* c_cc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ FUNC_0 (struct termios*,int ) ;
 scalar_t__ FUNC_1 (struct termios*,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char const*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int) ;
 int VAR_10 ;
 int FUNC_8 (int,struct termios*) ;
 int FUNC_9 (int,int ,struct termios*) ;

int FUNC_10(const char *VAR_11) {

    struct termios VAR_12;
    int VAR_13 = FUNC_5(VAR_11, VAR_6 | VAR_5);
    FUNC_7("fd=%d\r\n",VAR_13);
    if (VAR_13 == -1)
    {

        return -1;
    }

    if (!FUNC_4(VAR_13))
    {
        FUNC_3(VAR_10, "%s is not a tty\n", VAR_11);
        FUNC_2(VAR_13, VAR_4);
    }


    if(FUNC_8(VAR_13, &VAR_12) == -1)
    {
        FUNC_6("Failed to get attributes of device");
        FUNC_2(VAR_13, VAR_4);
    }

    VAR_12.c_cc[VAR_9] = 0;
    VAR_12.c_cc[VAR_8] = 0;


    VAR_12.c_iflag = 0;
    VAR_12.c_oflag = 0;
    VAR_12.c_cflag = VAR_3 | VAR_2 | VAR_1;
    VAR_12.c_lflag = 0;


    if((FUNC_0(&VAR_12, VAR_0) < 0) ||
       (FUNC_1(&VAR_12, VAR_0) < 0))
    {
        FUNC_6("Failed to set baud-rate");
        FUNC_2(VAR_13, VAR_4);
    }


    if (FUNC_9(VAR_13, VAR_7, &VAR_12) == -1) {
        FUNC_6("tcsetattr()");
        FUNC_2(VAR_13, VAR_4);
    }
    return VAR_13;
}
