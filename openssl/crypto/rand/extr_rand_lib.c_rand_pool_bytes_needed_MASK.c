
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t max_len; size_t len; scalar_t__ min_len; } ;
typedef TYPE_1__ RAND_POOL ;


 size_t FUNC_0 (size_t,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 size_t FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,size_t) ;

size_t FUNC_4(RAND_POOL *VAR_3, unsigned int VAR_4)
{
    size_t VAR_5;
    size_t VAR_6 = FUNC_2(VAR_3);

    if (VAR_4 < 1) {
        FUNC_1(VAR_0, VAR_1);
        return 0;
    }

    VAR_5 = FUNC_0(VAR_6, VAR_4);

    if (VAR_5 > VAR_3->max_len - VAR_3->len) {

        FUNC_1(VAR_0, VAR_2);
        return 0;
    }

    if (VAR_3->len < VAR_3->min_len &&
        VAR_5 < VAR_3->min_len - VAR_3->len)

        VAR_5 = VAR_3->min_len - VAR_3->len;
    if (!FUNC_3(VAR_3, VAR_5)) {

        VAR_3->max_len = VAR_3->len = 0;
        return 0;
    }

    return VAR_5;
}
