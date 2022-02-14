
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int version2 ;
typedef int version1 ;
typedef int token2 ;
typedef int token1 ;
typedef int name2 ;
typedef int name1 ;
typedef scalar_t__ WORD ;
typedef scalar_t__ WCHAR ;
struct TYPE_4__ {int name; } ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BYTE ;
typedef TYPE_1__ ASMNAME ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__*,scalar_t__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__*,scalar_t__*) ;
 int FUNC_2 (scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(ASMNAME *VAR_7, ASMNAME *VAR_8)
{
    int VAR_9;
    WORD VAR_10, VAR_11;
    WCHAR VAR_12[VAR_5], VAR_13[VAR_5];
    WCHAR VAR_14[VAR_6 + 1], VAR_15[VAR_6 + 1];
    BYTE VAR_16[VAR_4], VAR_17[VAR_4];
    DWORD VAR_18, VAR_19;

    VAR_18 = sizeof(VAR_12);
    FUNC_0(VAR_7->name, VAR_2, VAR_12, &VAR_18);
    VAR_18 = sizeof(VAR_13);
    FUNC_0(VAR_8->name, VAR_2, VAR_13, &VAR_18);

    if ((VAR_9 = FUNC_2(VAR_12, VAR_13))) return VAR_9;

    for (VAR_19 = VAR_1; VAR_19 < VAR_0; VAR_19++)
    {
        VAR_18 = sizeof(VAR_10);
        FUNC_0(VAR_7->name, VAR_19, &VAR_10, &VAR_18);
        VAR_18 = sizeof(VAR_11);
        FUNC_0(VAR_8->name, VAR_19, &VAR_11, &VAR_18);

        if (VAR_10 < VAR_11) return -1;
        if (VAR_10 > VAR_11) return 1;
    }



    VAR_18 = sizeof(VAR_16);
    FUNC_0(VAR_7->name, VAR_3, VAR_16, &VAR_18);
    VAR_18 = sizeof(VAR_17);
    FUNC_0(VAR_8->name, VAR_3, VAR_17, &VAR_18);

    FUNC_1(VAR_16, VAR_14);
    FUNC_1(VAR_17, VAR_15);

    if ((VAR_9 = FUNC_2(VAR_14, VAR_15))) return VAR_9;

    return 0;
}
