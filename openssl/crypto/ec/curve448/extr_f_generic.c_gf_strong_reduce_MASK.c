
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ word_t ;
typedef TYPE_1__* gf ;
typedef int dword_t ;
typedef int dsword_t ;
struct TYPE_6__ {scalar_t__* limb; } ;
struct TYPE_5__ {int* limb; } ;


 size_t FUNC_0 (unsigned int) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 TYPE_4__* VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(gf VAR_2)
{
    dsword_t VAR_3;
    word_t VAR_4;
    dword_t VAR_5 = 0;
    unsigned int VAR_6;


    FUNC_4(VAR_2);




    VAR_3 = 0;
    for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
        VAR_3 = VAR_3 + VAR_2->limb[FUNC_0(VAR_6)] - VAR_0->limb[FUNC_0(VAR_6)];
        VAR_2->limb[FUNC_0(VAR_6)] = VAR_3 & FUNC_1(FUNC_0(VAR_6));
        VAR_3 >>= FUNC_2(FUNC_0(VAR_6));
    }






    FUNC_3(VAR_3 == 0 || VAR_3 == -1);

    VAR_4 = (word_t)VAR_3;


    for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
        VAR_5 =
            VAR_5 + VAR_2->limb[FUNC_0(VAR_6)] +
            (VAR_4 & VAR_0->limb[FUNC_0(VAR_6)]);
        VAR_2->limb[FUNC_0(VAR_6)] = VAR_5 & FUNC_1(FUNC_0(VAR_6));
        VAR_5 >>= FUNC_2(FUNC_0(VAR_6));
    }

    FUNC_3(VAR_5 < 2 && ((word_t)VAR_5 + VAR_4) == 0);
}
