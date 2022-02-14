
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;


 int const VAR_0 ;
 int FUNC_0 (int) ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(const WORD * VAR_5, WORD *VAR_6, int VAR_7, int VAR_8)
{
    int VAR_9;


    for (VAR_9 = VAR_7; VAR_9 <= VAR_8; VAR_9++)
    {
        if (VAR_5[VAR_9] == VAR_1)
            continue;

        FUNC_0(VAR_5[VAR_9] > 0);
        FUNC_0(VAR_5[VAR_9] < 5);

        if (FUNC_1(VAR_6[VAR_9]) && (VAR_5[VAR_9] == VAR_3 || VAR_5[VAR_9] == VAR_2 || VAR_5 [VAR_9] == VAR_0))
            VAR_6[VAR_9]++;
        else if (!FUNC_1(VAR_6[VAR_9]) && VAR_5[VAR_9] == VAR_4)
            VAR_6[VAR_9]++;
        else if (!FUNC_1(VAR_6[VAR_9]) && (VAR_5[VAR_9] == VAR_2 || VAR_5 [VAR_9] == VAR_0))
            VAR_6[VAR_9]+=2;
    }
}
