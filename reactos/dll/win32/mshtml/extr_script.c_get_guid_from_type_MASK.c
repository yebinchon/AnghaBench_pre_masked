
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int LPCWSTR ;
typedef int GUID ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*) ;

__attribute__((used)) static BOOL FUNC_3(LPCWSTR VAR_4, GUID *VAR_5)
{
    const WCHAR VAR_6[] =
        {'t','e','x','t','/','j','a','v','a','s','c','r','i','p','t',0};
    const WCHAR VAR_7[] =
        {'t','e','x','t','/','j','s','c','r','i','p','t',0};
    const WCHAR VAR_8[] =
        {'t','e','x','t','/','v','b','s','c','r','i','p','t',0};


    if(!FUNC_2(VAR_4, VAR_6) || !FUNC_2(VAR_4, VAR_7)) {
        *VAR_5 = VAR_0;
    }else if(!FUNC_2(VAR_4, VAR_8)) {
        *VAR_5 = VAR_1;
    }else {
        FUNC_0("Unknown type %s\n", FUNC_1(VAR_4));
        return VAR_2;
    }

    return VAR_3;
}
