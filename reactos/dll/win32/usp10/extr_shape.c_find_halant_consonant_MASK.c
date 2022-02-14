
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ (* lexical_function ) (int ) ;
typedef int WCHAR ;
typedef int INT ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline INT FUNC_1(WCHAR* VAR_2, INT VAR_3, INT VAR_4, lexical_function VAR_5)
{
    int VAR_6 = 0;
    while (VAR_3 + VAR_6 < VAR_4-1 && !(VAR_5(VAR_2[VAR_3+VAR_6]) == VAR_0 &&
             ((VAR_3 + VAR_6 < VAR_4-2 && VAR_5(VAR_2[VAR_3+VAR_6]) == VAR_1 && FUNC_0(VAR_5(VAR_2[VAR_3+VAR_6+1]))) ||
              FUNC_0(VAR_5(VAR_2[VAR_3+VAR_6+1])))))
        VAR_6++;
    if (VAR_3 + VAR_6 <= VAR_4-1)
        return VAR_3+VAR_6;
    else
        return -1;
}
