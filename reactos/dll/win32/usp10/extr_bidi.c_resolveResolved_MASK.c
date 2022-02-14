
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WORD ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;
 scalar_t__ const VAR_4 ;
 scalar_t__ const VAR_5 ;
 scalar_t__ const VAR_6 ;
 scalar_t__ const VAR_7 ;
 scalar_t__ const VAR_8 ;
 scalar_t__ const VAR_9 ;
 scalar_t__ const VAR_10 ;
 scalar_t__ const VAR_11 ;
 scalar_t__ const VAR_12 ;

__attribute__((used)) static void FUNC_0(unsigned VAR_13, const WORD * VAR_14, WORD *VAR_15, int VAR_16, int VAR_17)
{
    int VAR_18;


    for (VAR_18 = VAR_16; VAR_18 <= VAR_17; VAR_18++)
    {
        if (VAR_14[VAR_18] == VAR_0 || VAR_14[VAR_18] == VAR_11)
        {
            int VAR_19 = VAR_18 -1;
            while (VAR_18 > VAR_16 && VAR_19 >= VAR_16 &&
                   (VAR_14[VAR_19] == VAR_12 || VAR_14[VAR_19] == VAR_2 || VAR_14[VAR_19] == VAR_4 || VAR_14[VAR_19] == VAR_9 ||
                    VAR_14[VAR_19] == VAR_7 || VAR_14[VAR_19] == VAR_3 || VAR_14[VAR_19] == VAR_8 || VAR_14[VAR_19] == VAR_5 ||
                    VAR_14[VAR_19] == VAR_10 || VAR_14[VAR_19] == VAR_6 || VAR_14[VAR_19] == VAR_1))
                VAR_15[VAR_19--] = VAR_13;
            VAR_15[VAR_18] = VAR_13;
        }
        else if (VAR_14[VAR_18] == VAR_3 || VAR_14[VAR_18] == VAR_8 || VAR_14[VAR_18] == VAR_5 || VAR_14[VAR_18] == VAR_10 ||
                 VAR_14[VAR_18] == VAR_6 || VAR_14[VAR_18] == VAR_1)
        {
            VAR_15[VAR_18] = VAR_18 ? VAR_15[VAR_18 - 1] : VAR_13;
        }
        if (VAR_18 == VAR_17 &&
            (VAR_14[VAR_18] == VAR_12 || VAR_14[VAR_18] == VAR_2 || VAR_14[VAR_18] == VAR_4 || VAR_14[VAR_18] == VAR_9 ||
             VAR_14[VAR_18] == VAR_7 || VAR_14[VAR_18] == VAR_3 || VAR_14[VAR_18] == VAR_8 || VAR_14[VAR_18] == VAR_5 ||
             VAR_14[VAR_18] == VAR_10 || VAR_14[VAR_18] == VAR_6 || VAR_14[VAR_18] == VAR_1 ))
        {
            int VAR_20 = VAR_18;
            while (VAR_20 >= VAR_16 && (VAR_14[VAR_20] == VAR_12 || VAR_14[VAR_20] == VAR_2 || VAR_14[VAR_20] == VAR_4 || VAR_14[VAR_20] == VAR_9 ||
                                VAR_14[VAR_20] == VAR_7 || VAR_14[VAR_20] == VAR_3 || VAR_14[VAR_20] == VAR_8 || VAR_14[VAR_20] == VAR_5 ||
                                VAR_14[VAR_20] == VAR_10 || VAR_14[VAR_20] == VAR_6 || VAR_14[VAR_20] == VAR_1))
                VAR_15[VAR_20--] = VAR_13;
        }
    }
}
