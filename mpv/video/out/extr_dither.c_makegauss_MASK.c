
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct ctx {unsigned int sizeb; int size; int size2; int gauss_radius; size_t gauss_middle; scalar_t__* gauss; int avlfg; } ;
typedef size_t index_t ;


 unsigned int VAR_0 ;
 double VAR_1 ;
 size_t FUNC_0 (struct ctx*,unsigned int,unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 double FUNC_3 (double) ;
 double FUNC_4 (double) ;
 double FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct ctx *VAR_2, unsigned int VAR_3)
{
    FUNC_1(VAR_3 >= 1 && VAR_3 <= VAR_0);

    FUNC_2(&VAR_2->avlfg, 123);

    VAR_2->sizeb = VAR_3;
    VAR_2->size = 1 << VAR_2->sizeb;
    VAR_2->size2 = VAR_2->size * VAR_2->size;

    VAR_2->gauss_radius = VAR_2->size / 2 - 1;
    VAR_2->gauss_middle = FUNC_0(VAR_2, VAR_2->gauss_radius, VAR_2->gauss_radius);

    unsigned int VAR_4 = VAR_2->gauss_radius * 2 + 1;
    unsigned int VAR_5 = VAR_4 * VAR_4;

    for (index_t VAR_6 = 0; VAR_6 < VAR_2->size2; VAR_6++)
        VAR_2->gauss[VAR_6] = 0;

    double VAR_7 = -FUNC_4(1.5 / VAR_1 * VAR_5) / VAR_2->gauss_radius;

    for (index_t VAR_8 = 0; VAR_8 <= VAR_2->gauss_radius; VAR_8++) {
        for (index_t VAR_9 = 0; VAR_9 <= VAR_8; VAR_9++) {
            int VAR_10 = (int)VAR_9 - VAR_2->gauss_radius;
            int VAR_11 = (int)VAR_8 - VAR_2->gauss_radius;
            int VAR_12 = VAR_10 * VAR_10 + VAR_11 * VAR_11;
            double VAR_13 = FUNC_3(-FUNC_5(VAR_12) * VAR_7);
            uint64_t VAR_14 = VAR_13 / VAR_5 * VAR_1;
            VAR_2->gauss[FUNC_0(VAR_2, VAR_9, VAR_8)] =
                VAR_2->gauss[FUNC_0(VAR_2, VAR_8, VAR_9)] =
                VAR_2->gauss[FUNC_0(VAR_2, VAR_9, VAR_4 - 1 - VAR_8)] =
                VAR_2->gauss[FUNC_0(VAR_2, VAR_8, VAR_4 - 1 - VAR_9)] =
                VAR_2->gauss[FUNC_0(VAR_2, VAR_4 - 1 - VAR_9, VAR_8)] =
                VAR_2->gauss[FUNC_0(VAR_2, VAR_4 - 1 - VAR_8, VAR_9)] =
                VAR_2->gauss[FUNC_0(VAR_2, VAR_4 - 1 - VAR_9, VAR_4 - 1 - VAR_8)] =
                VAR_2->gauss[FUNC_0(VAR_2, VAR_4 - 1 - VAR_8, VAR_4 - 1 - VAR_9)] = VAR_14;
        }
    }
    uint64_t VAR_15 = 0;
    for (index_t VAR_16 = 0; VAR_16 < VAR_2->size2; VAR_16++) {
        uint64_t VAR_17 = VAR_15;
        VAR_15 += VAR_2->gauss[VAR_16];
        FUNC_1(VAR_15 >= VAR_17);
    }
}
