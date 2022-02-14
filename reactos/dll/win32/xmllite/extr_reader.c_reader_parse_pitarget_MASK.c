
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int xmlreader ;
struct TYPE_8__ {char* member_0; int member_1; size_t len; } ;
typedef TYPE_1__ strval ;
typedef char WCHAR ;
typedef size_t UINT ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *) ;
 char* FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_6 (int *,TYPE_1__*,TYPE_1__ const*) ;

__attribute__((used)) static HRESULT FUNC_7(xmlreader *VAR_5, strval *VAR_6)
{
    static const WCHAR VAR_7[] = {'x','m','l'};
    static const strval VAR_8 = { (WCHAR*)VAR_7, 3 };
    strval VAR_9;
    WCHAR *VAR_10;
    HRESULT VAR_11;
    UINT VAR_12;

    VAR_11 = FUNC_5(VAR_5, &VAR_9);
    if (FUNC_0(VAR_11)) return FUNC_3(VAR_5) ? VAR_0 : VAR_4;


    if (FUNC_6(VAR_5, &VAR_9, &VAR_8))
        return VAR_3;


    VAR_10 = FUNC_4(VAR_5, &VAR_9);
    for (VAR_12 = 0; VAR_12 < VAR_9.len; VAR_12++)
        if (VAR_10[VAR_12] == ':')
            return VAR_12 ? VAR_1 : VAR_4;

    FUNC_1("pitarget %s:%d\n", FUNC_2(VAR_5, &VAR_9), VAR_9.len);
    *VAR_6 = VAR_9;
    return VAR_2;
}
