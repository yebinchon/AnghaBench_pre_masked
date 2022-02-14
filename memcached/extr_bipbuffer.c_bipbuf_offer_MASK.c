
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int b_inuse; scalar_t__ a_end; scalar_t__ data; scalar_t__ b_end; } ;
typedef TYPE_1__ bipbuf_t ;


 int FUNC_0 (TYPE_1__*) ;
 int const FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__,unsigned char const*,int const) ;

int FUNC_3(bipbuf_t* VAR_0, const unsigned char *VAR_1, const int VAR_2)
{

    if (FUNC_1(VAR_0) < VAR_2)
        return 0;

    if (1 == VAR_0->b_inuse)
    {
        FUNC_2(VAR_0->data + VAR_0->b_end, VAR_1, VAR_2);
        VAR_0->b_end += VAR_2;
    }
    else
    {
        FUNC_2(VAR_0->data + VAR_0->a_end, VAR_1, VAR_2);
        VAR_0->a_end += VAR_2;
    }

    FUNC_0(VAR_0);
    return VAR_2;
}
