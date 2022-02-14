
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int key ;
typedef int in ;
struct TYPE_11__ {int member_0; } ;
struct TYPE_9__ {unsigned char* data; size_t size; } ;
struct TYPE_10__ {size_t idx; TYPE_1__ expected; } ;
typedef TYPE_2__ TESTDATA ;
typedef TYPE_3__ SIPHASH ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (TYPE_3__*,unsigned char*,size_t) ;
 int FUNC_1 (TYPE_3__*,unsigned char*,int ,int ) ;
 int FUNC_2 (TYPE_3__*,unsigned char*,size_t) ;
 int FUNC_3 (TYPE_3__*,size_t) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (size_t,int) ;
 int FUNC_6 (unsigned char*,size_t,unsigned char*,size_t) ;
 int FUNC_7 (int ) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static int FUNC_8(int VAR_4)
{
    SIPHASH VAR_5 = { 0, };
    TESTDATA VAR_6 = VAR_3[VAR_4];
    unsigned char VAR_7[VAR_0];
    unsigned char VAR_8[64];
    size_t VAR_9 = VAR_6.idx;
    unsigned char *VAR_10 = VAR_6.expected.data;
    size_t VAR_11 = VAR_6.expected.size;
    unsigned char VAR_12[VAR_1];
    size_t VAR_13;

    if (VAR_11 != VAR_2 &&
        VAR_11 != VAR_1) {
        FUNC_4("size %zu vs %d and %d", VAR_11,
                  VAR_2, VAR_1);
        return 0;
    }

    if (!FUNC_5(VAR_9, sizeof(VAR_8)))
        return 0;


    for (VAR_13 = 0; VAR_13 < sizeof(VAR_7); VAR_13++)
        VAR_7[VAR_13] = (unsigned char)VAR_13;

    for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++)
        VAR_8[VAR_13] = (unsigned char)VAR_13;

    if (!FUNC_7(FUNC_3(&VAR_5, VAR_11))
        || !FUNC_7(FUNC_1(&VAR_5, VAR_7, 0, 0)))
        return 0;
    FUNC_2(&VAR_5, VAR_8, VAR_9);
    if (!FUNC_7(FUNC_0(&VAR_5, VAR_12, VAR_11))
        || !FUNC_6(VAR_12, VAR_11, VAR_10, VAR_11))
        return 0;

    if (VAR_9 > 16) {
        if (!FUNC_7(FUNC_3(&VAR_5, VAR_11))
            || !FUNC_7(FUNC_1(&VAR_5, VAR_7, 0, 0)))
            return 0;
        FUNC_2(&VAR_5, VAR_8, 1);
        FUNC_2(&VAR_5, VAR_8+1, VAR_9-1);
        if (!FUNC_7(FUNC_0(&VAR_5, VAR_12, VAR_11)))
            return 0;

        if (!FUNC_6(VAR_12, VAR_11, VAR_10, VAR_11)) {
            FUNC_4("SipHash test #%d/1+(N-1) failed.", VAR_4);
            return 0;
        }
    }

    if (VAR_9 > 32) {
        size_t VAR_14 = VAR_9 / 2;

        if (!FUNC_7(FUNC_3(&VAR_5, VAR_11))
            || !FUNC_7(FUNC_1(&VAR_5, VAR_7, 0, 0)))
            return 0;
        FUNC_2(&VAR_5, VAR_8, VAR_14);
        FUNC_2(&VAR_5, VAR_8+VAR_14, VAR_9-VAR_14);
        if (!FUNC_7(FUNC_0(&VAR_5, VAR_12, VAR_11)))
            return 0;

        if (!FUNC_6(VAR_12, VAR_11, VAR_10, VAR_11)) {
            FUNC_4("SipHash test #%d/2 failed.", VAR_4);
            return 0;
        }

        for (VAR_14 = 16; VAR_14 < VAR_9; VAR_14 += 16) {
            if (!FUNC_7(FUNC_3(&VAR_5, VAR_11))
                || !FUNC_7(FUNC_1(&VAR_5, VAR_7, 0, 0)))
                return 0;
            FUNC_2(&VAR_5, VAR_8, VAR_14);
            FUNC_2(&VAR_5, VAR_8+VAR_14, VAR_9-VAR_14);
            if (!FUNC_7(FUNC_0(&VAR_5, VAR_12, VAR_11)))
                return 0;

            if (!FUNC_6(VAR_12, VAR_11, VAR_10, VAR_11)) {
                FUNC_4("SipHash test #%d/%zu+%zu failed.",
                          VAR_4, VAR_14, VAR_9-VAR_14);
                return 0;
            }
        }
    }

    return 1;
}
