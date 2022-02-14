
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sa ;
struct TYPE_6__ {int member_0; int member_2; int * member_1; } ;
struct TYPE_5__ {int * hStdError; int * hStdOutput; int * hStdInput; } ;
typedef TYPE_1__ STARTUPINFOA ;
typedef TYPE_2__ SECURITY_ATTRIBUTES ;
typedef scalar_t__ PHANDLE ;
typedef void* HANDLE ;
typedef int BOOL ;


 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void**,void**,TYPE_2__*,int ) ;
 int VAR_0 ;
 int FUNC_2 (void*,scalar_t__,int ) ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_3(STARTUPINFOA *VAR_2, PHANDLE VAR_3,
                               PHANDLE VAR_4, PHANDLE VAR_5)
{
    HANDLE VAR_6 = ((void*)0), VAR_7 = ((void*)0);
    HANDLE VAR_8 = ((void*)0), VAR_9 = ((void*)0);
    HANDLE VAR_10 = ((void*)0), VAR_11 = ((void*)0);
    SECURITY_ATTRIBUTES VAR_12 = { sizeof(VAR_12), ((void*)0), &VAR_1 };

    VAR_2->hStdInput = ((void*)0);
    VAR_2->hStdOutput = ((void*)0);
    VAR_2->hStdError = ((void*)0);

    if (VAR_3)
    {
        if (FUNC_1(&VAR_6, &VAR_7, &VAR_12, 0))
        {
            if (!FUNC_2(VAR_7, VAR_3, VAR_0))
                goto failed;

            FUNC_0(VAR_7);
        }
        else
            goto failed;
    }

    if (VAR_4)
    {
        if (FUNC_1(&VAR_8, &VAR_9, &VAR_12, 0))
        {
            if (!FUNC_2(VAR_8, VAR_4, VAR_0))
                goto failed;

            FUNC_0(VAR_8);
        }
        else
            goto failed;
    }

    if (VAR_4 && VAR_4 == VAR_5)
    {
        if (!FUNC_2(VAR_9, &VAR_11, VAR_1))
            goto failed;
    }
    else if (VAR_5)
    {
        if (FUNC_1(&VAR_10, &VAR_11, &VAR_12, 0))
        {
            if (!FUNC_2(VAR_10, VAR_5, VAR_0))
                goto failed;
            FUNC_0(VAR_10);
        }
        else
            goto failed;
    }

    if (VAR_3)
        VAR_2->hStdInput = VAR_6;
    if (VAR_4)
        VAR_2->hStdOutput = VAR_9;
    if (VAR_5)
        VAR_2->hStdError = VAR_11;

    return VAR_1;

failed:
    FUNC_0(VAR_6);
    FUNC_0(VAR_7);
    FUNC_0(VAR_8);
    FUNC_0(VAR_9);
    FUNC_0(VAR_10);
    FUNC_0(VAR_11);
    return VAR_0;
}
