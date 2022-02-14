
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linenoiseState {char* prompt; int len; int cols; int oldpos; int maxrows; int ofd; char* buf; int pos; } ;
struct abuf {int len; int b; } ;


 int FUNC_0 (struct abuf*,char*,int) ;
 int FUNC_1 (struct abuf*) ;
 int FUNC_2 (struct abuf*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct abuf*,struct linenoiseState*,int) ;
 int FUNC_5 (char*,int,char*,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct linenoiseState *VAR_0) {
    char VAR_1[64];
    int VAR_2 = FUNC_6(VAR_0->prompt);
    int VAR_3 = (VAR_2+VAR_0->len+VAR_0->cols-1)/VAR_0->cols;
    int VAR_4 = (VAR_2+VAR_0->oldpos+VAR_0->cols)/VAR_0->cols;
    int VAR_5;
    int VAR_6;
    int VAR_7 = VAR_0->maxrows;
    int VAR_8 = VAR_0->ofd, VAR_9;
    struct abuf VAR_10;


    if (VAR_3 > (int)VAR_0->maxrows) VAR_0->maxrows = VAR_3;



    FUNC_2(&VAR_10);
    if (VAR_7-VAR_4 > 0) {
        FUNC_3("go down %d", VAR_7-VAR_4);
        FUNC_5(VAR_1,64,"\x1b[%dB", VAR_7-VAR_4);
        FUNC_0(&VAR_10,VAR_1,FUNC_6(VAR_1));
    }


    for (VAR_9 = 0; VAR_9 < VAR_7-1; VAR_9++) {
        FUNC_3("clear+up");
        FUNC_5(VAR_1,64,"\r\x1b[0K\x1b[1A");
        FUNC_0(&VAR_10,VAR_1,FUNC_6(VAR_1));
    }


    FUNC_3("clear");
    FUNC_5(VAR_1,64,"\r\x1b[0K");
    FUNC_0(&VAR_10,VAR_1,FUNC_6(VAR_1));


    FUNC_0(&VAR_10,VAR_0->prompt,FUNC_6(VAR_0->prompt));
    FUNC_0(&VAR_10,VAR_0->buf,VAR_0->len);


    FUNC_4(&VAR_10,VAR_0,VAR_2);



    if (VAR_0->pos &&
        VAR_0->pos == VAR_0->len &&
        (VAR_0->pos+VAR_2) % VAR_0->cols == 0)
    {
        FUNC_3("<newline>");
        FUNC_0(&VAR_10,"\n",1);
        FUNC_5(VAR_1,64,"\r");
        FUNC_0(&VAR_10,VAR_1,FUNC_6(VAR_1));
        VAR_3++;
        if (VAR_3 > (int)VAR_0->maxrows) VAR_0->maxrows = VAR_3;
    }


    VAR_5 = (VAR_2+VAR_0->pos+VAR_0->cols)/VAR_0->cols;
    FUNC_3("rpos2 %d", VAR_5);


    if (VAR_3-VAR_5 > 0) {
        FUNC_3("go-up %d", VAR_3-VAR_5);
        FUNC_5(VAR_1,64,"\x1b[%dA", VAR_3-VAR_5);
        FUNC_0(&VAR_10,VAR_1,FUNC_6(VAR_1));
    }


    VAR_6 = (VAR_2+(int)VAR_0->pos) % (int)VAR_0->cols;
    FUNC_3("set col %d", 1+VAR_6);
    if (VAR_6)
        FUNC_5(VAR_1,64,"\r\x1b[%dC", VAR_6);
    else
        FUNC_5(VAR_1,64,"\r");
    FUNC_0(&VAR_10,VAR_1,FUNC_6(VAR_1));

    FUNC_3("\n");
    VAR_0->oldpos = VAR_0->pos;

    if (FUNC_7(VAR_8,VAR_10.b,VAR_10.len) == -1) {}
    FUNC_1(&VAR_10);
}
