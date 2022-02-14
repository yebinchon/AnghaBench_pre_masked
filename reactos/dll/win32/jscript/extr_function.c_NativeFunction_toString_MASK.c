
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int native_suffixW ;
typedef int native_prefixW ;
typedef int jsstr_t ;
typedef char WCHAR ;
struct TYPE_2__ {char const* name; } ;
typedef TYPE_1__ NativeFunction ;
typedef int HRESULT ;
typedef int FunctionInstance ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (scalar_t__,char**) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static HRESULT FUNC_4(FunctionInstance *VAR_2, jsstr_t **VAR_3)
{
    NativeFunction *VAR_4 = (NativeFunction*)VAR_2;
    DWORD VAR_5;
    jsstr_t *VAR_6;
    WCHAR *VAR_7;

    static const WCHAR VAR_8[] = {'\n','f','u','n','c','t','i','o','n',' '};
    static const WCHAR VAR_9[] =
        {'(',')',' ','{','\n',' ',' ',' ',' ','[','n','a','t','i','v','e',' ','c','o','d','e',']','\n','}','\n'};

    VAR_5 = VAR_4->name ? FUNC_2(VAR_4->name) : 0;
    VAR_6 = FUNC_1(FUNC_0(VAR_8) + FUNC_0(VAR_9) + VAR_5, &VAR_7);
    if(!VAR_6)
        return VAR_0;

    FUNC_3(VAR_7, VAR_8, sizeof(VAR_8));
    VAR_7 += FUNC_0(VAR_8);
    FUNC_3(VAR_7, VAR_4->name, VAR_5*sizeof(WCHAR));
    VAR_7 += VAR_5;
    FUNC_3(VAR_7, VAR_9, sizeof(VAR_9));

    *VAR_3 = VAR_6;
    return VAR_1;
}
