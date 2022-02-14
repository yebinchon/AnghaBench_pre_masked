
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_lflag; int* c_cc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,struct termios*) ;
 int FUNC_2 (int ,int ,struct termios*) ;
 struct termios VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_3(void)
{
    if (VAR_5 || !VAR_6)
        return;

    FUNC_0(1);

    struct termios VAR_10;
    FUNC_1(VAR_9,&VAR_10);

    if (!VAR_8) {
        VAR_7 = VAR_10;
        VAR_8 = 1;
    }

    VAR_10.c_lflag &= ~(VAR_1|VAR_0);
    VAR_10.c_cc[VAR_3] = 1;
    VAR_10.c_cc[VAR_4] = 0;
    FUNC_2(VAR_9,VAR_2,&VAR_10);

    VAR_5 = 1;
}
