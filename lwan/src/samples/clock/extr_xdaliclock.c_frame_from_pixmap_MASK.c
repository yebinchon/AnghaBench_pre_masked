
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct frame {TYPE_1__* scanlines; } ;
struct TYPE_2__ {scalar_t__* right; scalar_t__* left; } ;
typedef scalar_t__ POS ;


 int VAR_0 ;
 struct frame* FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (unsigned char const*,int,int,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static struct frame *
FUNC_3(const unsigned char *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;
    struct frame *VAR_6;
    POS *VAR_7, *VAR_8;
    POS VAR_9 = (POS)(VAR_2 / 2);

    VAR_6 = FUNC_0(VAR_2, VAR_3);
    if (!VAR_6)
        return ((void*)0);

    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
        int VAR_10, VAR_11;
        VAR_4 = 0;

        VAR_7 = VAR_6->scanlines[VAR_5].left;
        VAR_8 = VAR_6->scanlines[VAR_5].right;

        for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
            VAR_7[VAR_10] = VAR_9;
            VAR_8[VAR_10] = VAR_9;
        }

        for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
            for (; VAR_4 < VAR_2; VAR_4++) {
                if (FUNC_1(VAR_1, VAR_4, VAR_5, VAR_2))
                    break;
            }
            if (VAR_4 == VAR_2)
                break;
            VAR_7[VAR_10] = (POS)VAR_4;
            for (; VAR_4 < VAR_2; VAR_4++) {
                if (!FUNC_1(VAR_1, VAR_4, VAR_5, VAR_2))
                    break;
            }
            VAR_8[VAR_10] = (POS)VAR_4;
        }

        for (; VAR_4 < VAR_2; VAR_4++) {
            if (FUNC_1(VAR_1, VAR_4, VAR_5, VAR_2)) {
                FUNC_2(
                    "Font too curvy. Increase MAX_SEGS_PER_LINE "
                    "and recompile");
                return ((void*)0);
            }
        }





        VAR_11 = VAR_10;
        if (VAR_11 > 0) {
            for (; VAR_10 < VAR_0; VAR_10++) {
                VAR_7[VAR_10] = VAR_7[VAR_11 - 1];
                VAR_8[VAR_10] = VAR_8[VAR_11 - 1];
            }
        }
    }

    return VAR_6;
}
