
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int increment; } ;
typedef TYPE_1__ strbuf_t ;


 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(strbuf_t *VAR_0, int VAR_1)
{
    int VAR_2, VAR_3;

    if (VAR_1 <= 0)
        FUNC_0("BUG: Invalid strbuf length requested");


    VAR_2 = VAR_1 + 1;


    if (VAR_0->size > VAR_2)
        return VAR_2;

    VAR_3 = VAR_0->size;
    if (VAR_0->increment < 0) {

        while (VAR_3 < VAR_2)
            VAR_3 *= -VAR_0->increment;
    } else {

        VAR_3 = ((VAR_3 + VAR_0->increment - 1) / VAR_0->increment) * VAR_0->increment;
    }

    return VAR_3;
}
