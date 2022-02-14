
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned char const UCHAR ;
struct TYPE_4__ {unsigned char const* data; size_t num; } ;
typedef TYPE_1__ MD2_CTX ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*,unsigned char const*) ;
 int FUNC_1 (unsigned char const*,unsigned char const*,size_t) ;

int FUNC_2(MD2_CTX *VAR_1, const unsigned char *VAR_2, size_t VAR_3)
{
    register UCHAR *VAR_4;

    if (VAR_3 == 0)
        return 1;

    VAR_4 = VAR_1->data;
    if (VAR_1->num != 0) {
        if ((VAR_1->num + VAR_3) >= VAR_0) {
            FUNC_1(&(VAR_4[VAR_1->num]), VAR_2, VAR_0 - VAR_1->num);
            FUNC_0(VAR_1, VAR_1->data);
            VAR_2 += (VAR_0 - VAR_1->num);
            VAR_3 -= (VAR_0 - VAR_1->num);
            VAR_1->num = 0;

        } else {
            FUNC_1(&(VAR_4[VAR_1->num]), VAR_2, VAR_3);

            VAR_1->num += (int)VAR_3;
            return 1;
        }
    }




    while (VAR_3 >= VAR_0) {
        FUNC_0(VAR_1, VAR_2);
        VAR_2 += VAR_0;
        VAR_3 -= VAR_0;
    }
    FUNC_1(VAR_4, VAR_2, VAR_3);
    VAR_1->num = (int)VAR_3;
    return 1;
}
