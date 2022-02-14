
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int expand_in; int expand_out; TYPE_1__* meth; } ;
struct TYPE_5__ {int (* expand ) (TYPE_2__*,unsigned char*,int,unsigned char*,int) ;} ;
typedef TYPE_2__ COMP_CTX ;


 int FUNC_0 (TYPE_2__*,unsigned char*,int,unsigned char*,int) ;

int FUNC_1(COMP_CTX *VAR_0, unsigned char *VAR_1, int VAR_2,
                      unsigned char *VAR_3, int VAR_4)
{
    int VAR_5;

    if (VAR_0->meth->expand == ((void*)0)) {
        return -1;
    }
    VAR_5 = VAR_0->meth->expand(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
    if (VAR_5 > 0) {
        VAR_0->expand_in += VAR_4;
        VAR_0->expand_out += VAR_5;
    }
    return VAR_5;
}
