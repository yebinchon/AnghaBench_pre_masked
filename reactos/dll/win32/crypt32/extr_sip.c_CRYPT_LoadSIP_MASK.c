
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * hSIP; void* pfRemove; void* pfVerify; void* pfCreate; void* pfPut; void* pfGet; int member_0; } ;
typedef TYPE_1__ SIP_DISPATCH_INFO ;
typedef int * HMODULE ;
typedef int GUID ;
typedef int BOOL ;


 int FUNC_0 (int const*,TYPE_1__*) ;
 void* FUNC_1 (int const*,int ,int **) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static BOOL FUNC_4(const GUID *VAR_8)
{
    SIP_DISPATCH_INFO VAR_9 = { 0 };
    HMODULE VAR_10 = ((void*)0), VAR_11 = ((void*)0);

    VAR_9.pfGet = FUNC_1(VAR_8, VAR_4, &VAR_10);
    if (!VAR_9.pfGet)
        goto error;
    VAR_9.pfPut = FUNC_1(VAR_8, VAR_5, &VAR_11);
    if (!VAR_9.pfPut || VAR_11 != VAR_10)
        goto error;
    FUNC_2(VAR_11);
    VAR_11 = ((void*)0);
    VAR_9.pfCreate = FUNC_1(VAR_8, VAR_3, &VAR_11);
    if (!VAR_9.pfCreate || VAR_11 != VAR_10)
        goto error;
    FUNC_2(VAR_11);
    VAR_11 = ((void*)0);
    VAR_9.pfVerify = FUNC_1(VAR_8, VAR_7, &VAR_11);
    if (!VAR_9.pfVerify || VAR_11 != VAR_10)
        goto error;
    FUNC_2(VAR_11);
    VAR_11 = ((void*)0);
    VAR_9.pfRemove = FUNC_1(VAR_8, VAR_6, &VAR_11);
    if (!VAR_9.pfRemove || VAR_11 != VAR_10)
        goto error;
    FUNC_2(VAR_11);
    VAR_9.hSIP = VAR_10;
    FUNC_0(VAR_8, &VAR_9);
    return VAR_1;

error:
    FUNC_2(VAR_10);
    FUNC_2(VAR_11);
    FUNC_3(VAR_2);
    return VAR_0;
}
