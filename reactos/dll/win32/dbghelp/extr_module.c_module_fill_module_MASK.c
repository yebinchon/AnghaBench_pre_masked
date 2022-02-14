
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 char const* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char const*,char const*) ;
 char* FUNC_1 () ;
 int FUNC_2 (char*,int ,size_t) ;
 size_t FUNC_3 (char*,size_t) ;
 int FUNC_4 (char*,char const*,size_t) ;
 size_t FUNC_5 (int,size_t) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*,int ) ;
 size_t FUNC_8 (char const*) ;
 char FUNC_9 (char) ;

__attribute__((used)) static void FUNC_10(const WCHAR* VAR_3, WCHAR* VAR_4, size_t VAR_5)
{
    const WCHAR *VAR_6 = FUNC_1();
    const WCHAR *VAR_7, *VAR_8;
    size_t VAR_9, VAR_10;

    VAR_7 = FUNC_0(VAR_3, VAR_8 = VAR_3 + FUNC_8(VAR_3));
    VAR_9 = FUNC_5(VAR_8 - VAR_7, VAR_5 - 1);
    FUNC_4(VAR_4, VAR_7, VAR_9 * sizeof(WCHAR));
    VAR_4[VAR_9] = '\0';
    if (VAR_9 > 4 && (VAR_10 = FUNC_3(VAR_4, VAR_9)))
        VAR_4[VAR_9 - VAR_10] = '\0';
    else if (VAR_9 > FUNC_8(VAR_6) && !FUNC_6(VAR_4 + VAR_9 - FUNC_8(VAR_6), VAR_6))
        FUNC_2(VAR_4, VAR_2, VAR_5);
    else
    {
        if (VAR_9 > 3 && !FUNC_6(&VAR_4[VAR_9 - 3], VAR_0) &&
            (VAR_10 = FUNC_3(VAR_4, VAR_9 - 3)))
            FUNC_7(&VAR_4[VAR_9 - VAR_10 - 3], VAR_1);
    }
    while ((*VAR_4 = FUNC_9(*VAR_4))) VAR_4++;
}
