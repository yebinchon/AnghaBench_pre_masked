
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linenoiseState {scalar_t__ len; scalar_t__ cols; int buf; } ;
struct abuf {int dummy; } ;


 int FUNC_0 (struct abuf*,char*,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int*,int*) ;
 int FUNC_3 (char*,int,char*,int,int) ;
 int FUNC_4 (char*) ;

void FUNC_5(struct abuf *VAR_0, struct linenoiseState *VAR_1, int VAR_2) {
    char VAR_3[64];
    if (&FUNC_2 && VAR_2+VAR_1->len < VAR_1->cols) {
        int VAR_4 = -1, VAR_5 = 0;
        char *VAR_6 = FUNC_2(VAR_1->buf,&VAR_4,&VAR_5);
        if (VAR_6) {
            int VAR_7 = FUNC_4(VAR_6);
            int VAR_8 = VAR_1->cols-(VAR_2+VAR_1->len);
            if (VAR_7 > VAR_8) VAR_7 = VAR_8;
            if (VAR_5 == 1 && VAR_4 == -1) VAR_4 = 37;
            if (VAR_4 != -1 || VAR_5 != 0)
                FUNC_3(VAR_3,64,"\033[%d;%d;49m",VAR_5,VAR_4);
            FUNC_0(VAR_0,VAR_3,FUNC_4(VAR_3));
            FUNC_0(VAR_0,VAR_6,VAR_7);
            if (VAR_4 != -1 || VAR_5 != 0)
                FUNC_0(VAR_0,"\033[0m",4);

            if (&FUNC_1) FUNC_1(VAR_6);
        }
    }
}
