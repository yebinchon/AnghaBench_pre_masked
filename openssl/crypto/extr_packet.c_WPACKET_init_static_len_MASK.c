
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* staticbuf; size_t maxsize; int * buf; } ;
typedef TYPE_1__ WPACKET ;


 size_t FUNC_0 (size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,size_t) ;

int FUNC_3(WPACKET *VAR_0, unsigned char *VAR_1, size_t VAR_2,
                            size_t VAR_3)
{
    size_t VAR_4 = FUNC_0(VAR_3);


    if (!FUNC_1(VAR_1 != ((void*)0) && VAR_2 > 0))
        return 0;

    VAR_0->staticbuf = VAR_1;
    VAR_0->buf = ((void*)0);
    VAR_0->maxsize = (VAR_4 < VAR_2) ? VAR_4 : VAR_2;

    return FUNC_2(VAR_0, VAR_3);
}
