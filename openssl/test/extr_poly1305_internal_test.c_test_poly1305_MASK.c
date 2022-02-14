
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int out ;
struct TYPE_8__ {unsigned char* data; size_t size; } ;
struct TYPE_7__ {unsigned char* data; } ;
struct TYPE_6__ {unsigned char* data; size_t size; } ;
struct TYPE_9__ {TYPE_3__ expected; TYPE_2__ key; TYPE_1__ input; } ;
typedef TYPE_4__ TESTDATA ;
typedef int POLY1305 ;


 int FUNC_0 (int *,unsigned char*) ;
 int FUNC_1 (int *,unsigned char const*) ;
 int FUNC_2 (int *,unsigned char const*,size_t) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (unsigned char*,size_t,unsigned char const*,size_t) ;
 int FUNC_5 (size_t,int) ;
 TYPE_4__* VAR_0 ;

__attribute__((used)) static int FUNC_6(int VAR_1)
{
    POLY1305 VAR_2;
    const TESTDATA VAR_3 = VAR_0[VAR_1];
    const unsigned char *VAR_4 = VAR_3.input.data;
    size_t VAR_5 = VAR_3.input.size;
    const unsigned char *VAR_6 = VAR_3.key.data;
    const unsigned char *VAR_7 = VAR_3.expected.data;
    size_t VAR_8 = VAR_3.expected.size;
    unsigned char VAR_9[16];

    if (!FUNC_5(VAR_8, sizeof(VAR_9)))
        return 0;

    FUNC_1(&VAR_2, VAR_6);
    FUNC_2(&VAR_2, VAR_4, VAR_5);
    FUNC_0(&VAR_2, VAR_9);

    if (!FUNC_4(VAR_9, VAR_8, VAR_7, VAR_8)) {
        FUNC_3("Poly1305 test #%d failed.", VAR_1);
        return 0;
    }

    if (VAR_5 > 16) {
        FUNC_1(&VAR_2, VAR_6);
        FUNC_2(&VAR_2, VAR_4, 1);
        FUNC_2(&VAR_2, VAR_4+1, VAR_5-1);
        FUNC_0(&VAR_2, VAR_9);

        if (!FUNC_4(VAR_9, VAR_8, VAR_7, VAR_8)) {
            FUNC_3("Poly1305 test #%d/1+(N-1) failed.", VAR_1);
            return 0;
        }
    }

    if (VAR_5 > 32) {
        size_t VAR_10 = VAR_5 / 2;

        FUNC_1(&VAR_2, VAR_6);
        FUNC_2(&VAR_2, VAR_4, VAR_10);
        FUNC_2(&VAR_2, VAR_4+VAR_10, VAR_5-VAR_10);
        FUNC_0(&VAR_2, VAR_9);

        if (!FUNC_4(VAR_9, VAR_8, VAR_7, VAR_8)) {
            FUNC_3("Poly1305 test #%d/2 failed.", VAR_1);
            return 0;
        }

        for (VAR_10 = 16; VAR_10 < VAR_5; VAR_10 += 16) {
            FUNC_1(&VAR_2, VAR_6);
            FUNC_2(&VAR_2, VAR_4, VAR_10);
            FUNC_2(&VAR_2, VAR_4+VAR_10, VAR_5-VAR_10);
            FUNC_0(&VAR_2, VAR_9);

            if (!FUNC_4(VAR_9, VAR_8, VAR_7, VAR_8)) {
                FUNC_3("Poly1305 test #%d/%zu+%zu failed.",
                          VAR_1, VAR_10, VAR_5-VAR_10);
                return 0;
            }
        }
    }

    return 1;
}
