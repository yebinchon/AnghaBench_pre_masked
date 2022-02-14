
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_2__ {int working_dir; } ;
typedef int PCWSTR ;
typedef int INFCONTEXT ;
typedef scalar_t__ HRESULT ;
typedef int HINF ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;
typedef TYPE_1__ ADVInfo ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *,int *,int *,int,int *) ;
 scalar_t__ FUNC_3 (int *,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_4(HINF VAR_3, PCWSTR VAR_4, const void *VAR_5)
{
    const ADVInfo *VAR_6 = (const ADVInfo *)VAR_5;
    INFCONTEXT VAR_7;
    HRESULT VAR_8 = VAR_2;
    DWORD VAR_9;

    BOOL VAR_10 = FUNC_0(VAR_3, VAR_4, ((void*)0), &VAR_7);

    for (; VAR_10; VAR_10 = FUNC_1(&VAR_7, &VAR_7))
    {
        WCHAR VAR_11[VAR_1];

        if (!FUNC_2(&VAR_7, ((void*)0), ((void*)0), ((void*)0), VAR_11,
                               VAR_1, &VAR_9))
            continue;

        if (FUNC_3(VAR_11, VAR_6->working_dir, ((void*)0)) != VAR_2)
            VAR_8 = VAR_0;
    }

    return VAR_8;
}
