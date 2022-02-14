
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ (* lexical_function ) (int const) ;
typedef int WCHAR ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_2(const WCHAR *VAR_2, unsigned int VAR_3,
        unsigned int VAR_4, unsigned int VAR_5, lexical_function VAR_6)
{
    if (!FUNC_0( VAR_6(VAR_2[VAR_5]) )) return -1;
    VAR_5++;
    if ((VAR_5 < VAR_3) && VAR_6(VAR_2[VAR_5]) == VAR_1)
            VAR_5++;
    if ((VAR_5 < VAR_3) && VAR_6(VAR_2[VAR_5])==VAR_0)
    {
        VAR_5++;
        if((VAR_5 < VAR_3) && FUNC_1( VAR_6(VAR_2[VAR_5]) ))
            VAR_5++;
        if ((VAR_5 < VAR_3) && FUNC_0( VAR_6(VAR_2[VAR_5]) ))
            return VAR_5;
    }
    else if ((VAR_5 < VAR_3) && FUNC_1( VAR_6(VAR_2[VAR_5]) ) && VAR_6(VAR_2[VAR_5+1])==VAR_0)
    {
        VAR_5+=2;
        if ((VAR_5 < VAR_3) && FUNC_0( VAR_6(VAR_2[VAR_5]) ))
            return VAR_5;
    }
    return -1;
}
