
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int REGSAM ;
typedef scalar_t__ HKEY ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,char const*,int,scalar_t__*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline HKEY FUNC_2( HKEY VAR_5, REGSAM VAR_6 )
{
    HKEY VAR_7 = VAR_5;
    const BOOL VAR_8 = sizeof(void*) > sizeof(int);
    const BOOL VAR_9 = VAR_8 && (VAR_6 & VAR_1);

    if (VAR_5 == VAR_0 &&
        ((VAR_6 & VAR_2) || !(VAR_7 = VAR_4)))
        VAR_7 = FUNC_1(VAR_3 | (VAR_6 & VAR_2));
    if (VAR_9 && VAR_7 && VAR_7 == VAR_4)
    {
        static const WCHAR VAR_10[] = {'W','o','w','6','4','3','2','N','o','d','e',0};
        VAR_6 &= ~VAR_1;
        if (FUNC_0(VAR_4, VAR_10, VAR_6, &VAR_5))
            return 0;
        VAR_7 = VAR_5;
    }

    return VAR_7;
}
