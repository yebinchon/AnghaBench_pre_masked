
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_iflag; int c_lflag; int* c_cc; int c_cflag; int c_oflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int FUNC_0 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int ) ;
 int VAR_18 ;
 struct termios VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (int,struct termios*) ;
 scalar_t__ FUNC_3 (int,int ,struct termios*) ;

__attribute__((used)) static int FUNC_4(int VAR_21) {
    struct termios VAR_22;

    if (!FUNC_1(VAR_12)) goto fatal;
    if (!VAR_16) {
        FUNC_0(VAR_18);
        VAR_16 = 1;
    }
    if (FUNC_2(VAR_21,&VAR_19) == -1) goto fatal;

    VAR_22 = VAR_19;


    VAR_22.c_iflag &= ~(VAR_0 | VAR_5 | VAR_7 | VAR_9 | VAR_10);

    VAR_22.c_oflag &= ~(VAR_11);

    VAR_22.c_cflag |= (VAR_1);


    VAR_22.c_lflag &= ~(VAR_2 | VAR_4 | VAR_6 | VAR_8);


    VAR_22.c_cc[VAR_14] = 1; VAR_22.c_cc[VAR_15] = 0;


    if (FUNC_3(VAR_21,VAR_13,&VAR_22) < 0) goto fatal;
    VAR_20 = 1;
    return 0;

fatal:
    VAR_17 = VAR_3;
    return -1;
}
