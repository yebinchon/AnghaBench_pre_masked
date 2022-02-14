
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_8__ {int rounds; TYPE_1__* rd_key; } ;
struct TYPE_7__ {void** u; } ;
typedef TYPE_1__ ARIA_u128 ;
typedef TYPE_2__ ARIA_KEY ;


 int VAR_0 ;
 int FUNC_0 (void*,void*,void*,void*) ;
 int FUNC_1 (void*,void*,void*,void*) ;
 int FUNC_2 (void*,void*,void*,void*) ;
 int FUNC_3 (unsigned char const*,int const,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,int ) ;

int FUNC_5(const unsigned char *VAR_1, const int VAR_2,
                         ARIA_KEY *VAR_3)
{
    ARIA_u128 *VAR_4;
    ARIA_u128 *VAR_5;
    register uint32_t VAR_6, VAR_7;
    register uint32_t VAR_8, VAR_9, VAR_10, VAR_11;
    uint32_t VAR_12, VAR_13, VAR_14, VAR_15;

    const int VAR_16 = FUNC_3(VAR_1, VAR_2, VAR_3);

    if (VAR_16 != 0) {
        return VAR_16;
    }

    VAR_4 = VAR_3->rd_key;
    VAR_5 = VAR_4 + VAR_3->rounds;

    VAR_8 = VAR_4->u[0];
    VAR_9 = VAR_4->u[1];
    VAR_10 = VAR_4->u[2];
    VAR_11 = VAR_4->u[3];

    FUNC_4(VAR_4, VAR_5, VAR_0);

    VAR_5->u[0] = VAR_8;
    VAR_5->u[1] = VAR_9;
    VAR_5->u[2] = VAR_10;
    VAR_5->u[3] = VAR_11;

    VAR_4++;
    VAR_5--;

    for (; VAR_4 < VAR_5; VAR_4++, VAR_5--) {
        FUNC_0(VAR_4->u[0], VAR_8, VAR_6, VAR_7);
        FUNC_0(VAR_4->u[1], VAR_9, VAR_6, VAR_7);
        FUNC_0(VAR_4->u[2], VAR_10, VAR_6, VAR_7);
        FUNC_0(VAR_4->u[3], VAR_11, VAR_6, VAR_7);

        FUNC_2(VAR_8, VAR_9, VAR_10, VAR_11);
        FUNC_1(VAR_8, VAR_9, VAR_10, VAR_11);
        FUNC_2(VAR_8, VAR_9, VAR_10, VAR_11);

        VAR_12 = VAR_8;
        VAR_13 = VAR_9;
        VAR_14 = VAR_10;
        VAR_15 = VAR_11;

        FUNC_0(VAR_5->u[0], VAR_8, VAR_6, VAR_7);
        FUNC_0(VAR_5->u[1], VAR_9, VAR_6, VAR_7);
        FUNC_0(VAR_5->u[2], VAR_10, VAR_6, VAR_7);
        FUNC_0(VAR_5->u[3], VAR_11, VAR_6, VAR_7);

        FUNC_2(VAR_8, VAR_9, VAR_10, VAR_11);
        FUNC_1(VAR_8, VAR_9, VAR_10, VAR_11);
        FUNC_2(VAR_8, VAR_9, VAR_10, VAR_11);

        VAR_4->u[0] = VAR_8;
        VAR_4->u[1] = VAR_9;
        VAR_4->u[2] = VAR_10;
        VAR_4->u[3] = VAR_11;

        VAR_5->u[0] = VAR_12;
        VAR_5->u[1] = VAR_13;
        VAR_5->u[2] = VAR_14;
        VAR_5->u[3] = VAR_15;
    }
    FUNC_0(VAR_4->u[0], VAR_8, VAR_6, VAR_7);
    FUNC_0(VAR_4->u[1], VAR_9, VAR_6, VAR_7);
    FUNC_0(VAR_4->u[2], VAR_10, VAR_6, VAR_7);
    FUNC_0(VAR_4->u[3], VAR_11, VAR_6, VAR_7);

    FUNC_2(VAR_8, VAR_9, VAR_10, VAR_11);
    FUNC_1(VAR_8, VAR_9, VAR_10, VAR_11);
    FUNC_2(VAR_8, VAR_9, VAR_10, VAR_11);

    VAR_5->u[0] = VAR_8;
    VAR_5->u[1] = VAR_9;
    VAR_5->u[2] = VAR_10;
    VAR_5->u[3] = VAR_11;

    return 0;
}
