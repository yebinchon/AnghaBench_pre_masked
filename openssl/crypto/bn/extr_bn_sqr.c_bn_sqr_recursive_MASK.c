
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_ULONG ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int*,int*,int*,int) ;
 int FUNC_1 (int const*,int const*,int) ;
 int FUNC_2 (int*,int const*) ;
 int FUNC_3 (int*,int const*) ;
 int FUNC_4 (int*,int const*,int,int*) ;
 scalar_t__ FUNC_5 (int*,int const*,int const*,int) ;
 int FUNC_6 (int*,int ,int) ;

void FUNC_7(BN_ULONG *VAR_2, const BN_ULONG *VAR_3, int VAR_4, BN_ULONG *VAR_5)
{
    int VAR_6 = VAR_4 / 2;
    int VAR_7, VAR_8;
    BN_ULONG VAR_9, VAR_10, *VAR_11;

    if (VAR_4 == 4) {

        FUNC_4(VAR_2, VAR_3, 4, VAR_5);



        return;
    } else if (VAR_4 == 8) {

        FUNC_4(VAR_2, VAR_3, 8, VAR_5);



        return;
    }
    if (VAR_4 < VAR_1) {
        FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5);
        return;
    }

    VAR_8 = FUNC_1(VAR_3, &(VAR_3[VAR_6]), VAR_6);
    VAR_7 = 0;
    if (VAR_8 > 0)
        FUNC_5(VAR_5, VAR_3, &(VAR_3[VAR_6]), VAR_6);
    else if (VAR_8 < 0)
        FUNC_5(VAR_5, &(VAR_3[VAR_6]), VAR_3, VAR_6);
    else
        VAR_7 = 1;


    VAR_11 = &(VAR_5[VAR_4 * 2]);

    if (!VAR_7)
        FUNC_7(&(VAR_5[VAR_4]), VAR_5, VAR_6, VAR_11);
    else
        FUNC_6(&VAR_5[VAR_4], 0, sizeof(*VAR_5) * VAR_4);
    FUNC_7(VAR_2, VAR_3, VAR_6, VAR_11);
    FUNC_7(&(VAR_2[VAR_4]), &(VAR_3[VAR_6]), VAR_6, VAR_11);







    VAR_8 = (int)(FUNC_0(VAR_5, VAR_2, &(VAR_2[VAR_4]), VAR_4));


    VAR_8 -= (int)(FUNC_5(&(VAR_5[VAR_4]), VAR_5, &(VAR_5[VAR_4]), VAR_4));







    VAR_8 += (int)(FUNC_0(&(VAR_2[VAR_6]), &(VAR_2[VAR_6]), &(VAR_5[VAR_4]), VAR_4));
    if (VAR_8) {
        VAR_11 = &(VAR_2[VAR_6 + VAR_4]);
        VAR_10 = *VAR_11;
        VAR_9 = (VAR_10 + VAR_8) & VAR_0;
        *VAR_11 = VAR_9;





        if (VAR_9 < (BN_ULONG)VAR_8) {
            do {
                VAR_11++;
                VAR_10 = *VAR_11;
                VAR_9 = (VAR_10 + 1) & VAR_0;
                *VAR_11 = VAR_9;
            } while (VAR_9 == 0);
        }
    }
}
