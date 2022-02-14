
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct linenoiseState {char* buf; int len; int pos; int buflen; int ifd; } ;
struct TYPE_4__ {scalar_t__ len; char** cvec; int * member_1; int member_0; } ;
typedef TYPE_1__ linenoiseCompletions ;


 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct linenoiseState*) ;
 int FUNC_5 (char*,int ,char*,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct linenoiseState *VAR_0) {
    linenoiseCompletions VAR_1 = { 0, ((void*)0) };
    int VAR_2, VAR_3;
    char VAR_4 = 0;

    FUNC_0(VAR_0->buf,&VAR_1);
    if (VAR_1.len == 0) {
        FUNC_2();
    } else {
        size_t VAR_5 = 0, VAR_6 = 0;

        while(!VAR_5) {

            if (VAR_6 < VAR_1.len) {
                struct linenoiseState VAR_7 = *VAR_0;

                VAR_0->len = VAR_0->pos = FUNC_6(VAR_1.cvec[VAR_6]);
                VAR_0->buf = VAR_1.cvec[VAR_6];
                FUNC_4(VAR_0);
                VAR_0->len = VAR_7.len;
                VAR_0->pos = VAR_7.pos;
                VAR_0->buf = VAR_7.buf;
            } else {
                FUNC_4(VAR_0);
            }

            VAR_2 = FUNC_3(VAR_0->ifd,&VAR_4,1);
            if (VAR_2 <= 0) {
                FUNC_1(&VAR_1);
                return -1;
            }

            switch(VAR_4) {
                case 9:
                    VAR_6 = (VAR_6+1) % (VAR_1.len+1);
                    if (VAR_6 == VAR_1.len) FUNC_2();
                    break;
                case 27:

                    if (VAR_6 < VAR_1.len) FUNC_4(VAR_0);
                    VAR_5 = 1;
                    break;
                default:

                    if (VAR_6 < VAR_1.len) {
                        VAR_3 = FUNC_5(VAR_0->buf,VAR_0->buflen,"%s",VAR_1.cvec[VAR_6]);
                        VAR_0->len = VAR_0->pos = VAR_3;
                    }
                    VAR_5 = 1;
                    break;
            }
        }
    }

    FUNC_1(&VAR_1);
    return VAR_4;
}
