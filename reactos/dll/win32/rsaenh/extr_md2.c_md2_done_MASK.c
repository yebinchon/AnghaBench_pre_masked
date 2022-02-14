
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int curlen; unsigned char* buf; int X; int chksum; } ;
typedef TYPE_1__ md2_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (unsigned char*,int ,int) ;

int FUNC_3(md2_state * VAR_2, unsigned char *VAR_3)
{
    unsigned long VAR_4, VAR_5;

    if (VAR_2->curlen >= sizeof(VAR_2->buf)) {
       return VAR_0;
    }


    VAR_5 = 16 - VAR_2->curlen;
    for (VAR_4 = VAR_2->curlen; VAR_4 < 16; VAR_4++) {
        VAR_2->buf[VAR_4] = (unsigned char)VAR_5;
    }


    FUNC_0(VAR_2);
    FUNC_1(VAR_2);


    FUNC_2(VAR_2->buf, VAR_2->chksum, 16);
    FUNC_0(VAR_2);


    FUNC_2(VAR_3, VAR_2->X, 16);

    return VAR_1;
}
