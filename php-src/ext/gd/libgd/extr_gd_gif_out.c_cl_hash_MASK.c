
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int count_int ;
struct TYPE_3__ {int* htab; } ;
typedef TYPE_1__ GifCtx ;



__attribute__((used)) static void
FUNC_0(register count_int VAR_0, GifCtx *VAR_1)

{

        register count_int *VAR_2 = VAR_1->htab+VAR_0;

        register long VAR_3;
        register long VAR_4 = -1;

        VAR_3 = VAR_0 - 16;
        do {
                *(VAR_2-16) = VAR_4;
                *(VAR_2-15) = VAR_4;
                *(VAR_2-14) = VAR_4;
                *(VAR_2-13) = VAR_4;
                *(VAR_2-12) = VAR_4;
                *(VAR_2-11) = VAR_4;
                *(VAR_2-10) = VAR_4;
                *(VAR_2-9) = VAR_4;
                *(VAR_2-8) = VAR_4;
                *(VAR_2-7) = VAR_4;
                *(VAR_2-6) = VAR_4;
                *(VAR_2-5) = VAR_4;
                *(VAR_2-4) = VAR_4;
                *(VAR_2-3) = VAR_4;
                *(VAR_2-2) = VAR_4;
                *(VAR_2-1) = VAR_4;
                VAR_2 -= 16;
        } while ((VAR_3 -= 16) >= 0);

        for ( VAR_3 += 16; VAR_3 > 0; --VAR_3 )
                *--VAR_2 = VAR_4;
}
