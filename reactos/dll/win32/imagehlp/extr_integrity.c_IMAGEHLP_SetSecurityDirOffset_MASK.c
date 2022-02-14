
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int Size; int VirtualAddress; } ;
struct TYPE_8__ {TYPE_5__* DataDirectory; } ;
struct TYPE_11__ {TYPE_1__ OptionalHeader; } ;
struct TYPE_9__ {TYPE_5__* DataDirectory; } ;
struct TYPE_10__ {TYPE_2__ OptionalHeader; } ;
typedef TYPE_3__ IMAGE_NT_HEADERS64 ;
typedef TYPE_4__ IMAGE_NT_HEADERS32 ;
typedef TYPE_5__ IMAGE_DATA_DIRECTORY ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int*,TYPE_4__*,TYPE_3__*) ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int,int *,int ) ;
 int FUNC_2 (char*,int,int) ;
 int VAR_6 ;
 int FUNC_3 (int ,void*,int,int*,int *) ;

__attribute__((used)) static BOOL FUNC_4(HANDLE VAR_7,
                                          DWORD VAR_8, DWORD VAR_9)
{
    IMAGE_NT_HEADERS32 VAR_10;
    IMAGE_NT_HEADERS64 VAR_11;
    IMAGE_DATA_DIRECTORY *VAR_12;
    int VAR_13, VAR_14 = 0;
    DWORD VAR_15;
    void *VAR_16;
    DWORD VAR_17;
    BOOL VAR_18;

    VAR_13 = FUNC_0(VAR_7, &VAR_15, &VAR_10, &VAR_11);

    if (VAR_13 == VAR_2)
    {
        VAR_12 = &VAR_10[VAR_4];

        VAR_16 = &VAR_10;
        VAR_14 = sizeof(IMAGE_NT_HEADERS32);
    }
    else if (VAR_13 == VAR_3)
    {
        VAR_12 = &VAR_11[VAR_4];

        VAR_16 = &VAR_11;
        VAR_14 = sizeof(IMAGE_NT_HEADERS64);
    }
    else
        return VAR_0;

    VAR_12->Size = VAR_9;
    VAR_12->VirtualAddress = VAR_8;

    FUNC_2("size = %x addr = %x\n", VAR_12->Size, VAR_12->VirtualAddress);


    VAR_17 = FUNC_1(VAR_7, VAR_15, ((void*)0), VAR_1);

    if (VAR_17 == VAR_5)
        return VAR_0;

    VAR_17 = 0;

    VAR_18 = FUNC_3(VAR_7, VAR_16, VAR_14, &VAR_17, ((void*)0));

    if (!VAR_18)
        return VAR_0;

    if (VAR_17 != VAR_14)
        return VAR_0;

    return VAR_6;
}
