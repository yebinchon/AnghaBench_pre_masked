
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ (* lexical_function ) (int const) ;
typedef int WCHAR ;


 int FUNC_0 (int const*,unsigned int,unsigned int,unsigned int,scalar_t__ (*) (int const)) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_4(const WCHAR *VAR_5, unsigned int VAR_6,
        unsigned int VAR_7, unsigned int *VAR_8, unsigned int VAR_9, lexical_function VAR_10)
{
    int VAR_11;
    int VAR_12 = 0;
    do
    {
        VAR_11 = FUNC_0(VAR_5,VAR_6,VAR_7,VAR_9,VAR_10);
        if (VAR_11 != -1)
        {
            VAR_9 = VAR_11;
            VAR_12++;
        }
    } while (VAR_11 != -1);
    if (VAR_12 || FUNC_1( VAR_10(VAR_5[VAR_9]) ))
    {
        *VAR_8 = VAR_9;
        VAR_9++;
    }
    else
        return -1;
    if ((VAR_9 < VAR_6) && VAR_10(VAR_5[VAR_9]) == VAR_3)
            VAR_9++;
    if ((VAR_9 < VAR_6) && VAR_10(VAR_5[VAR_9]) == VAR_0)
            VAR_9++;

    if ((VAR_9 < VAR_6) && VAR_10(VAR_5[VAR_9]) == VAR_1)
    {
        VAR_9++;
        if((VAR_9 < VAR_6) && FUNC_2( VAR_10(VAR_5[VAR_9]) ))
            VAR_9++;
    }
    else if (VAR_9 < VAR_6)
    {
        while((VAR_9 < VAR_6) && FUNC_3( VAR_10(VAR_5[VAR_9]) ))
            VAR_9++;
        if ((VAR_9 < VAR_6) && VAR_10(VAR_5[VAR_9]) == VAR_3)
            VAR_9++;
        if ((VAR_9 < VAR_6) && VAR_10(VAR_5[VAR_9]) == VAR_1)
            VAR_9++;
    }
    if ((VAR_9 < VAR_6) && VAR_10(VAR_5[VAR_9]) == VAR_2)
            VAR_9++;
    if ((VAR_9 < VAR_6) && VAR_10(VAR_5[VAR_9]) == VAR_4)
            VAR_9++;
    return VAR_9;
}
