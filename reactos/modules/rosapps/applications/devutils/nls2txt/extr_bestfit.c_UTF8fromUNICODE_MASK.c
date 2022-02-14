
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int ULONG ;
typedef int* PSIZE_T ;
typedef int CHAR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int const*,int,int *,int,int *,int *) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static CHAR*
FUNC_2(const WCHAR *VAR_1, PSIZE_T VAR_2)
{
    ULONG VAR_3;
    CHAR *VAR_4;

    if (!VAR_1 || !VAR_2) return ((void*)0);

    VAR_3 = FUNC_0(VAR_0, 0, VAR_1, -1, ((void*)0), 0, ((void*)0), ((void*)0));

    *VAR_2 = VAR_3 * sizeof(CHAR);

    VAR_4 = (CHAR *) FUNC_1(*VAR_2);
    if (VAR_4)
    {
        FUNC_0(VAR_0, 0, VAR_1, -1, VAR_4, VAR_3, ((void*)0), ((void*)0));
    }

    return VAR_4;
}
