
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ (* lexical_function ) (int const) ;
typedef int WCHAR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int const*,unsigned int,unsigned int,unsigned int*,unsigned int,scalar_t__ (*) (int const)) ;
 int FUNC_1 (int const*,unsigned int,unsigned int,unsigned int,scalar_t__ (*) (int const)) ;

__attribute__((used)) static int FUNC_2(const WCHAR *VAR_4, unsigned int VAR_5,
        unsigned int VAR_6, unsigned int *VAR_7, unsigned int VAR_8, lexical_function VAR_9)
{
    if (VAR_9(VAR_4[VAR_8])==VAR_3)
    {
        *VAR_7 = VAR_8;
        return FUNC_1(VAR_4, VAR_5, VAR_6, VAR_8+1, VAR_9);
    }
    else if ((VAR_5 > VAR_8+3) && VAR_9(VAR_4[VAR_8]) == VAR_2 && VAR_9(VAR_4[VAR_8+1]) == VAR_0 && VAR_9(VAR_4[VAR_8+2]) == VAR_3)
    {
        *VAR_7 = VAR_8+2;
        return FUNC_1(VAR_4, VAR_5, VAR_6, VAR_8+3, VAR_9);
    }

    else if (VAR_6 == VAR_8 && VAR_9(VAR_4[VAR_8])==VAR_1)
    {
        *VAR_7 = VAR_8;
        return FUNC_1(VAR_4, VAR_5, VAR_6, VAR_8+1, VAR_9);
    }
    else if (VAR_6 == VAR_8 && (VAR_5 > VAR_8+3) && VAR_9(VAR_4[VAR_8]) == VAR_2 && VAR_9(VAR_4[VAR_8+1]) == VAR_0 && VAR_9(VAR_4[VAR_8+2]) == VAR_1)
    {
        *VAR_7 = VAR_8+2;
        return FUNC_1(VAR_4, VAR_5, VAR_6, VAR_8+3, VAR_9);
    }

    return FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
}
