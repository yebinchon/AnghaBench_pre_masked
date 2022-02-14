
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int CheckSum; } ;
struct TYPE_10__ {TYPE_1__ OptionalHeader; } ;
struct TYPE_8__ {int CheckSum; } ;
struct TYPE_9__ {TYPE_2__ OptionalHeader; } ;
typedef int LPVOID ;
typedef TYPE_3__ IMAGE_NT_HEADERS64 ;
typedef TYPE_4__ IMAGE_NT_HEADERS32 ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ,int,int*,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int*,TYPE_4__*,TYPE_3__*) ;
 int VAR_5 ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_6 (int ,int,int *,int ) ;
 int FUNC_7 (char*,int ) ;
 int VAR_7 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,void*,int,int*,int *) ;

__attribute__((used)) static BOOL FUNC_10(HANDLE VAR_8)
{
    DWORD VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    IMAGE_NT_HEADERS32 VAR_14;
    IMAGE_NT_HEADERS64 VAR_15;
    LPVOID VAR_16;
    HANDLE VAR_17;
    DWORD *VAR_18;
    void *VAR_19;
    int VAR_20;
    BOOL VAR_21;

    FUNC_7("handle %p\n", VAR_8);

    VAR_20 = FUNC_4(VAR_8, &VAR_12, &VAR_14, &VAR_15);

    if (VAR_20 == VAR_3)
    {
        VAR_18 = &VAR_14;

        VAR_19 = &VAR_14;
        VAR_13 = sizeof(IMAGE_NT_HEADERS32);
    }
    else if (VAR_20 == VAR_4)
    {
        VAR_18 = &VAR_15;

        VAR_19 = &VAR_15;
        VAR_13 = sizeof(IMAGE_NT_HEADERS64);
    }
    else
        return VAR_0;

    VAR_17 = FUNC_2(VAR_8, ((void*)0), VAR_6, 0, 0, ((void*)0));

    if (!VAR_17)
        return VAR_0;

    VAR_16 = FUNC_5(VAR_17, VAR_2, 0, 0, 0);

    if (!VAR_16)
    {
        FUNC_1(VAR_17);
        return VAR_0;
    }

    VAR_9 = FUNC_3(VAR_8, ((void*)0));

    *VAR_18 = 0;
    FUNC_0(VAR_16, VAR_9, &VAR_11, VAR_18);

    FUNC_8(VAR_16);
    FUNC_1(VAR_17);

    if (*VAR_18)
    {

        VAR_10 = FUNC_6(VAR_8, VAR_12, ((void*)0), VAR_1);

        if (VAR_10 == VAR_5)
            return VAR_0;

        VAR_10 = 0;

        VAR_21 = FUNC_9(VAR_8, VAR_19, VAR_13, &VAR_10, ((void*)0));

        if (!VAR_21)
            return VAR_0;

        if (VAR_10 != VAR_13)
            return VAR_0;

        return VAR_7;
    }

    return VAR_0;
}
