
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WORD ;
typedef int WCHAR ;
typedef int ULONG ;
struct TYPE_5__ {int AceCount; } ;
typedef TYPE_1__* PACL ;
typedef int LPVOID ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,int **,int *) ;
 int FUNC_1 (int ,int,int **,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_1__*,int,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static BOOL FUNC_4(PACL VAR_5, WCHAR **VAR_6, ULONG *VAR_7, BOOL VAR_8, BOOL VAR_9, BOOL VAR_10)
{
    WORD VAR_11;
    int VAR_12;

    if (VAR_8)
        FUNC_1(VAR_3, -1, VAR_6, VAR_7);
    if (VAR_9)
        FUNC_1(VAR_2, -1, VAR_6, VAR_7);
    if (VAR_10)
        FUNC_1(VAR_1, -1, VAR_6, VAR_7);

    if (VAR_5 == ((void*)0))
        return VAR_4;

    if (!FUNC_3(VAR_5))
        return VAR_0;

    VAR_11 = VAR_5->AceCount;
    for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
    {
        LPVOID VAR_13;
        if (!FUNC_2(VAR_5, VAR_12, &VAR_13))
            return VAR_0;
        if (!FUNC_0(VAR_13, VAR_6, VAR_7))
            return VAR_0;
    }

    return VAR_4;
}
