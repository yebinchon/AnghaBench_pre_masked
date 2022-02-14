
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {scalar_t__ ws_col; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int ,struct winsize*) ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char*,int) ;

__attribute__((used)) static int FUNC_5(int VAR_1, int VAR_2) {
    struct winsize VAR_3;

    if (FUNC_1(1, VAR_0, &VAR_3) == -1 || VAR_3.ws_col == 0) {

        int VAR_4, VAR_5;


        VAR_4 = FUNC_0(VAR_1,VAR_2);
        if (VAR_4 == -1) goto failed;


        if (FUNC_4(VAR_2,"\x1b[999C",6) != 6) goto failed;
        VAR_5 = FUNC_0(VAR_1,VAR_2);
        if (VAR_5 == -1) goto failed;


        if (VAR_5 > VAR_4) {
            char VAR_6[32];
            FUNC_2(VAR_6,32,"\x1b[%dD",VAR_5-VAR_4);
            if (FUNC_4(VAR_2,VAR_6,FUNC_3(VAR_6)) == -1) {

            }
        }
        return VAR_5;
    } else {
        return VAR_3.ws_col;
    }

failed:
    return 80;
}
