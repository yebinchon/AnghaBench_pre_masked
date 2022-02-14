
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int LPCWSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char const*) ;

__attribute__((used)) static int FUNC_1(LPCWSTR VAR_4)
{
    static const WCHAR VAR_5[] = {'S','t','a','r','t','T','o','E','n','d',0};
    static const WCHAR VAR_6[] = {'S','t','a','r','t','T','o','S','t','a','r','t',0};
    static const WCHAR VAR_7[] = {'E','n','d','T','o','S','t','a','r','t',0};
    static const WCHAR VAR_8[] = {'E','n','d','T','o','E','n','d',0};

    if(!FUNC_0(VAR_4, VAR_5)) return VAR_2;
    if(!FUNC_0(VAR_4, VAR_6)) return VAR_3;
    if(!FUNC_0(VAR_4, VAR_7)) return VAR_1;
    if(!FUNC_0(VAR_4, VAR_8)) return VAR_0;

    return -1;
}
