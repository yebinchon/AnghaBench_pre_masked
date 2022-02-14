
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef TYPE_1__* gf ;
typedef unsigned int dword_t ;
struct TYPE_7__ {scalar_t__* limb; } ;


 size_t FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (size_t) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__* const) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(uint8_t VAR_3[VAR_1], const gf VAR_4, int VAR_5)
{
    unsigned int VAR_6 = 0, VAR_7 = 0;
    dword_t VAR_8 = 0;
    int VAR_9;
    gf VAR_10;

    FUNC_3(VAR_10, VAR_4);
    FUNC_5(VAR_10);
    if (!VAR_5)
        FUNC_2(FUNC_4(VAR_10) == 0);

    for (VAR_9 = 0; VAR_9 < (VAR_5 ? VAR_2 : VAR_1); VAR_9++) {
        if (VAR_7 < 8 && VAR_6 < VAR_0) {
            VAR_8 |= ((dword_t) VAR_10->limb[FUNC_0(VAR_6)]) << VAR_7;
            VAR_7 += FUNC_1(FUNC_0(VAR_6));
            VAR_6++;
        }
        VAR_3[VAR_9] = (uint8_t)VAR_8;
        VAR_7 -= 8;
        VAR_8 >>= 8;
    }
}
