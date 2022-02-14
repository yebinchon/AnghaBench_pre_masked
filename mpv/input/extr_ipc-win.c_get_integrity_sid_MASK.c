
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int Sid; } ;
struct TYPE_7__ {TYPE_1__ Label; } ;
typedef TYPE_2__ TOKEN_MANDATORY_LABEL ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char**) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__,int ,TYPE_2__*,int ,int *) ;
 int FUNC_5 (int ,int ,scalar_t__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_2__* FUNC_7 (int *,int ) ;

__attribute__((used)) static char *FUNC_8(void)
{
    char *VAR_3 = ((void*)0);
    TOKEN_MANDATORY_LABEL *VAR_4 = ((void*)0);
    HANDLE VAR_5;
    if (!FUNC_5(FUNC_2(), VAR_1, &VAR_5))
        goto done;

    DWORD VAR_6;
    if (!FUNC_4(VAR_5, VAR_2, ((void*)0), 0, &VAR_6) &&
        FUNC_3() != VAR_0)
        goto done;

    VAR_4 = FUNC_7(((void*)0), VAR_6);
    if (!FUNC_4(VAR_5, VAR_2, VAR_4, VAR_6, &VAR_6))
        goto done;
    if (!VAR_4->Label.Sid)
        goto done;

    FUNC_1(VAR_4->Label.Sid, &VAR_3);
done:
    if (VAR_5)
        FUNC_0(VAR_5);
    FUNC_6(VAR_4);
    return VAR_3;
}
