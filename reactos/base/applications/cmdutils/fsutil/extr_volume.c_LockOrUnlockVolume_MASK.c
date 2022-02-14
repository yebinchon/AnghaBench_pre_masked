
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int HANDLE ;
typedef int DWORD ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ FUNC_0 (int ,int ,int *,int ,int *,int ,int *,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(HANDLE VAR_3, BOOLEAN VAR_4)
{
    DWORD VAR_5;
    ULONG VAR_6;

    VAR_5 = (VAR_4 ? VAR_1 : VAR_2);
    if (FUNC_0(VAR_3, VAR_5, ((void*)0), 0, ((void*)0), 0,
                        &VAR_6, ((void*)0)) == VAR_0)
    {
        FUNC_2(FUNC_1());
        return 1;
    }

    return 0;
}
