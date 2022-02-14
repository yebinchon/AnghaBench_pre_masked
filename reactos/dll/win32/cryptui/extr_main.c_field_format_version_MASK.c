
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_5__ {TYPE_1__* pCertInfo; } ;
struct TYPE_4__ {char* dwVersion; } ;
typedef TYPE_2__* PCCERT_CONTEXT ;


 int FUNC_0 () ;
 char* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*,char const*,char*) ;

__attribute__((used)) static WCHAR *FUNC_3(PCCERT_CONTEXT VAR_0)
{
    static const WCHAR VAR_1[] = { 'V','%','d',0 };
    WCHAR *VAR_2 = FUNC_1(FUNC_0(), 0, 12 * sizeof(WCHAR));

    if (VAR_2)
        FUNC_2(VAR_2, VAR_1, VAR_0->pCertInfo->dwVersion);
    return VAR_2;
}
