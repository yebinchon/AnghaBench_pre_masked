
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int num; int pad_type; int* data; scalar_t__ hh; scalar_t__ h; } ;
typedef TYPE_1__ MDC2_CTX ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int*,unsigned int) ;
 int FUNC_1 (unsigned char*,char*,unsigned int) ;
 int FUNC_2 (int*,int ,unsigned int) ;

int FUNC_3(unsigned char *VAR_1, MDC2_CTX *VAR_2)
{
    unsigned int VAR_3;
    int VAR_4;

    VAR_3 = VAR_2->num;
    VAR_4 = VAR_2->pad_type;
    if ((VAR_3 > 0) || (VAR_4 == 2)) {
        if (VAR_4 == 2)
            VAR_2->data[VAR_3++] = 0x80;
        FUNC_2(&(VAR_2->data[VAR_3]), 0, VAR_0 - VAR_3);
        FUNC_0(VAR_2, VAR_2->data, VAR_0);
    }
    FUNC_1(VAR_1, (char *)VAR_2->h, VAR_0);
    FUNC_1(&(VAR_1[VAR_0]), (char *)VAR_2->hh, VAR_0);
    return 1;
}
