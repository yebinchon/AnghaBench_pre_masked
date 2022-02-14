
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_3__ {scalar_t__ pwszFunctionName; scalar_t__ pwszDLLName; } ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef TYPE_1__ CRYPT_TRUST_REG_ENTRY ;
typedef int BYTE ;


 char const* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*,int ,int *,int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int ,char const*,int ,int ,int *,int) ;
 char* VAR_7 ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static LONG FUNC_5(WCHAR* VAR_8,
                                        const WCHAR* VAR_9,
                                        CRYPT_TRUST_REG_ENTRY VAR_10)
{
    static const WCHAR VAR_11[] = {'$','F','u','n','c','t','i','o','n', 0};
    WCHAR VAR_12[VAR_5];
    HKEY VAR_13;
    LONG VAR_14 = VAR_2;


    VAR_12[0]='\0';
    FUNC_3(VAR_12, VAR_7);
    FUNC_3(VAR_12, VAR_9);
    FUNC_3(VAR_12, VAR_8);

    if (!VAR_10.pwszDLLName || !VAR_10.pwszFunctionName)
        return VAR_1;

    VAR_14 = FUNC_1(VAR_3, VAR_12, 0, ((void*)0), 0, VAR_4, ((void*)0), &VAR_13, ((void*)0));
    if (VAR_14 != VAR_2) goto error_close_key;


    VAR_14 = FUNC_2(VAR_13, VAR_0, 0, VAR_6, (BYTE*)VAR_10.pwszDLLName,
        (FUNC_4(VAR_10.pwszDLLName) + 1)*sizeof(WCHAR));
    if (VAR_14 != VAR_2) goto error_close_key;


    VAR_14 = FUNC_2(VAR_13, VAR_11, 0, VAR_6, (BYTE*)VAR_10.pwszFunctionName,
        (FUNC_4(VAR_10.pwszFunctionName) + 1)*sizeof(WCHAR));

error_close_key:
    FUNC_0(VAR_13);

    return VAR_14;
}
