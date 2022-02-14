
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int Magic; } ;
struct TYPE_9__ {scalar_t__ e_magic; int e_lfanew; scalar_t__ Signature; TYPE_1__ OptionalHeader; } ;
typedef TYPE_2__ IMAGE_NT_HEADERS64 ;
typedef TYPE_2__ IMAGE_NT_HEADERS32 ;
typedef TYPE_2__ IMAGE_DOS_HEADER ;
typedef int HANDLE ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;


 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,TYPE_2__*,int,int*,int *) ;
 int FUNC_1 (int ,int,int *,int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(HANDLE VAR_7, DWORD *VAR_8, IMAGE_NT_HEADERS32 *VAR_9, IMAGE_NT_HEADERS64 *VAR_10)
{
    IMAGE_DOS_HEADER VAR_11;
    DWORD VAR_12;
    BOOL VAR_13;

    FUNC_2("handle %p\n", VAR_7);

    if ((!VAR_9) || (!VAR_10))
        return VAR_1;


    VAR_12 = FUNC_1(VAR_7, 0, ((void*)0), VAR_0);

    if (VAR_12 == VAR_6)
        return VAR_1;

    VAR_12 = 0;

    VAR_13 = FUNC_0(VAR_7, &VAR_11, sizeof VAR_11, &VAR_12, ((void*)0));

    if (!VAR_13)
        return VAR_1;

    if (VAR_12 != sizeof VAR_11)
        return VAR_1;


    if (VAR_11.e_magic != VAR_4)
        return VAR_1;

    if (VAR_8 != ((void*)0))
        *VAR_8 = VAR_11.e_lfanew;


    VAR_12 = FUNC_1(VAR_7, VAR_11.e_lfanew, ((void*)0), VAR_0);

    if (VAR_12 == VAR_6)
        return VAR_1;

    VAR_12 = 0;

    VAR_13 = FUNC_0(VAR_7, VAR_9, sizeof(IMAGE_NT_HEADERS32), &VAR_12, ((void*)0));

    if (!VAR_13)
        return VAR_1;

    if (VAR_12 != sizeof(IMAGE_NT_HEADERS32))
        return VAR_1;


    if (VAR_9->Signature != VAR_5)
        return VAR_1;


    switch (VAR_9->OptionalHeader.Magic)
    {
        case 129:
            return VAR_2;

        case 128:


            VAR_12 = FUNC_1(VAR_7, VAR_11.e_lfanew, ((void*)0), VAR_0);

            if (VAR_12 == VAR_6)
                return VAR_1;

            VAR_12 = 0;

            VAR_13 = FUNC_0(VAR_7, VAR_10, sizeof(IMAGE_NT_HEADERS64), &VAR_12, ((void*)0));

            if (!VAR_13)
                return VAR_1;

            if (VAR_12 != sizeof(IMAGE_NT_HEADERS64))
                return VAR_1;


            if (VAR_10->Signature != VAR_5)
                return VAR_1;

            return VAR_3;
    }

    return VAR_1;
}
