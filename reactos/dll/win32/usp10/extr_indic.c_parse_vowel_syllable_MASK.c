
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ (* lexical_function ) (int const) ;
typedef int WCHAR ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_3(const WCHAR *VAR_5, unsigned int VAR_6,
        unsigned int VAR_7, unsigned int VAR_8, lexical_function VAR_9)
{
    if ((VAR_8 < VAR_6) && VAR_9(VAR_5[VAR_8]) == VAR_2)
        VAR_8++;
    if ((VAR_8 < VAR_6) && FUNC_1( VAR_9(VAR_5[VAR_8]) ) && VAR_9(VAR_5[VAR_8+1])==VAR_0 && FUNC_0( VAR_9(VAR_5[VAR_8+2]) ))
        VAR_8+=3;
    else if ((VAR_8 < VAR_6) && VAR_9(VAR_5[VAR_8])==VAR_0 && FUNC_0( VAR_9(VAR_5[VAR_8+1]) ))
        VAR_8+=2;
    else if ((VAR_8 < VAR_6) && VAR_9(VAR_5[VAR_8])==VAR_4 && FUNC_0( VAR_9(VAR_5[VAR_8+1]) ))
        VAR_8+=2;

    if ((VAR_8 < VAR_6) && FUNC_2( VAR_9(VAR_5[VAR_8]) ))
    {
        while((VAR_8 < VAR_6) && FUNC_2( VAR_9(VAR_5[VAR_8]) ))
            VAR_8++;
        if ((VAR_8 < VAR_6) && VAR_9(VAR_5[VAR_8]) == VAR_2)
            VAR_8++;
        if ((VAR_8 < VAR_6) && VAR_9(VAR_5[VAR_8]) == VAR_0)
            VAR_8++;
    }

    if ((VAR_8 < VAR_6) && VAR_9(VAR_5[VAR_8]) == VAR_1)
        VAR_8++;
    if ((VAR_8 < VAR_6) && VAR_9(VAR_5[VAR_8]) == VAR_3)
        VAR_8++;
    return VAR_8;
}
