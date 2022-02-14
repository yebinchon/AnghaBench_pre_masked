
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {int cbData; int pbData; } ;
struct TYPE_5__ {TYPE_1__ Value; int pszObjId; } ;
typedef int DWORD ;
typedef TYPE_2__ CERT_EXTENSION ;


 scalar_t__ FUNC_0 (int ,int ,int ,int *,int ,int ,int ,int *,int *) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static WCHAR *FUNC_3(const CERT_EXTENSION *VAR_1, DWORD VAR_2)
{
    WCHAR *VAR_3 = ((void*)0);
    DWORD VAR_4;

    if (FUNC_0(VAR_0, 0, VAR_2, ((void*)0),
     VAR_1->pszObjId, VAR_1->Value.pbData, VAR_1->Value.cbData, ((void*)0), &VAR_4))
    {
        VAR_3 = FUNC_2(FUNC_1(), 0, VAR_4);
        FUNC_0(VAR_0, 0, VAR_2, ((void*)0),
         VAR_1->pszObjId, VAR_1->Value.pbData, VAR_1->Value.cbData, VAR_3, &VAR_4);
    }
    return VAR_3;
}
