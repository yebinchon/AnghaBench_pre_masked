
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linenoiseState {size_t len; size_t buflen; size_t pos; char* buf; scalar_t__ plen; scalar_t__ cols; int ofd; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,size_t) ;
 int VAR_1 ;
 int FUNC_1 (struct linenoiseState*) ;
 int FUNC_2 (int ,char*,int) ;

int FUNC_3(struct linenoiseState *VAR_2, char VAR_3) {
    if (VAR_2->len < VAR_2->buflen) {
        if (VAR_2->len == VAR_2->pos) {
            VAR_2->buf[VAR_2->pos] = VAR_3;
            VAR_2->pos++;
            VAR_2->len++;
            VAR_2->buf[VAR_2->len] = '\0';
            if ((!VAR_1 && VAR_2->plen+VAR_2->len < VAR_2->cols && !VAR_0)) {


                if (FUNC_2(VAR_2->ofd,&VAR_3,1) == -1) return -1;
            } else {
                FUNC_1(VAR_2);
            }
        } else {
            FUNC_0(VAR_2->buf+VAR_2->pos+1,VAR_2->buf+VAR_2->pos,VAR_2->len-VAR_2->pos);
            VAR_2->buf[VAR_2->pos] = VAR_3;
            VAR_2->len++;
            VAR_2->pos++;
            VAR_2->buf[VAR_2->len] = '\0';
            FUNC_1(VAR_2);
        }
    }
    return 0;
}
