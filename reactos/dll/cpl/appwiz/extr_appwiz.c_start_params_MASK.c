
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int LONG ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char const*,char const*) ;

__attribute__((used)) static LONG FUNC_4(const WCHAR *VAR_4, HWND VAR_5)
{
    static const WCHAR VAR_6[] = {'i','n','s','t','a','l','l','_','g','e','c','k','o',0};
    static const WCHAR VAR_7[] = {'i','n','s','t','a','l','l','_','m','o','n','o',0};

    if(!VAR_4)
        return VAR_2;

    if(!FUNC_3(VAR_4, VAR_6)) {
        FUNC_2(VAR_0, VAR_5);
        return VAR_3;
    }

    if(!FUNC_3(VAR_4, VAR_7)) {
        FUNC_2(VAR_1, VAR_5);
        return VAR_3;
    }

    FUNC_0("unknown param %s\n", FUNC_1(VAR_4));
    return VAR_2;
}
