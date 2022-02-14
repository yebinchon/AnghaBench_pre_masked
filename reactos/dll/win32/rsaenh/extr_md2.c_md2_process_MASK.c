
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int curlen; scalar_t__ buf; } ;
typedef TYPE_1__ md2_state ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (unsigned long,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__,unsigned char const*,size_t) ;

int FUNC_4(md2_state *VAR_2, const unsigned char *VAR_3, unsigned long VAR_4)
{
    unsigned long VAR_5;

    if (VAR_2->curlen > sizeof(VAR_2->buf)) {
       return VAR_0;
    }
    while (VAR_4 > 0) {
        VAR_5 = FUNC_0(VAR_4, (16 - VAR_2->curlen));
        FUNC_3(VAR_2->buf + VAR_2->curlen, VAR_3, (size_t)VAR_5);
        VAR_2->curlen += VAR_5;
        VAR_3 += VAR_5;
        VAR_4 -= VAR_5;


        if (VAR_2->curlen == 16) {
            FUNC_1(VAR_2);
            FUNC_2(VAR_2);
            VAR_2->curlen = 0;
        }
    }
    return VAR_1;
}
