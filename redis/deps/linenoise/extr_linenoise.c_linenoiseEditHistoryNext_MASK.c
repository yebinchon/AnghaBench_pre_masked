
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linenoiseState {int history_index; char* buf; int buflen; int pos; int len; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct linenoiseState*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,int) ;

void FUNC_5(struct linenoiseState *VAR_3, int VAR_4) {
    if (VAR_2 > 1) {


        FUNC_0(VAR_1[VAR_2 - 1 - VAR_3->history_index]);
        VAR_1[VAR_2 - 1 - VAR_3->history_index] = FUNC_2(VAR_3->buf);

        VAR_3->history_index += (VAR_4 == VAR_0) ? 1 : -1;
        if (VAR_3->history_index < 0) {
            VAR_3->history_index = 0;
            return;
        } else if (VAR_3->history_index >= VAR_2) {
            VAR_3->history_index = VAR_2-1;
            return;
        }
        FUNC_4(VAR_3->buf,VAR_1[VAR_2 - 1 - VAR_3->history_index],VAR_3->buflen);
        VAR_3->buf[VAR_3->buflen-1] = '\0';
        VAR_3->len = VAR_3->pos = FUNC_3(VAR_3->buf);
        FUNC_1(VAR_3);
    }
}
