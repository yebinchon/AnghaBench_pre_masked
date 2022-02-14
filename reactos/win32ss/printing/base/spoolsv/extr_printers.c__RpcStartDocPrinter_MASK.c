
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WINSPOOL_PRINTER_HANDLE ;
struct TYPE_4__ {scalar_t__ pDocInfo1; } ;
struct TYPE_5__ {TYPE_1__ DocInfo; int Level; } ;
typedef TYPE_2__ WINSPOOL_DOC_INFO_CONTAINER ;
typedef int PBYTE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;

DWORD
FUNC_5(WINSPOOL_PRINTER_HANDLE VAR_1, WINSPOOL_DOC_INFO_CONTAINER* VAR_2, DWORD* VAR_3)
{
    DWORD VAR_4;

    VAR_4 = FUNC_2(((void*)0));
    if (VAR_4 != VAR_0)
    {
        FUNC_0("RpcImpersonateClient failed with error %lu!\n", VAR_4);
        return VAR_4;
    }

    *VAR_3 = FUNC_4(VAR_1, VAR_2->Level, (PBYTE)VAR_2->DocInfo.pDocInfo1);
    VAR_4 = FUNC_1();

    FUNC_3();
    return VAR_4;
}
