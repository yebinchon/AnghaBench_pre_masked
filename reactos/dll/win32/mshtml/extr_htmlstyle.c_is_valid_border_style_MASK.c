
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int BSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char const*) ;
 char const* VAR_2 ;

__attribute__((used)) static BOOL FUNC_3(BSTR VAR_3)
{
    static const WCHAR VAR_4[] = {'d','o','t','t','e','d',0};
    static const WCHAR VAR_5[] = {'d','a','s','h','e','d',0};
    static const WCHAR VAR_6[] = {'s','o','l','i','d',0};
    static const WCHAR VAR_7[] = {'d','o','u','b','l','e',0};
    static const WCHAR VAR_8[] = {'g','r','o','o','v','e',0};
    static const WCHAR VAR_9[] = {'r','i','d','g','e',0};
    static const WCHAR VAR_10[] = {'i','n','s','e','t',0};
    static const WCHAR VAR_11[] = {'o','u','t','s','e','t',0};

    FUNC_0("%s\n", FUNC_1(VAR_3));

    if(!VAR_3 || FUNC_2(VAR_3, VAR_2) == 0 || FUNC_2(VAR_3, VAR_4) == 0 ||
             FUNC_2(VAR_3, VAR_5) == 0 || FUNC_2(VAR_3, VAR_6) == 0 ||
             FUNC_2(VAR_3, VAR_7) == 0 || FUNC_2(VAR_3, VAR_8) == 0 ||
             FUNC_2(VAR_3, VAR_9) == 0 || FUNC_2(VAR_3, VAR_10) == 0 ||
             FUNC_2(VAR_3, VAR_11) == 0 )
    {
        return VAR_1;
    }

    return VAR_0;
}
