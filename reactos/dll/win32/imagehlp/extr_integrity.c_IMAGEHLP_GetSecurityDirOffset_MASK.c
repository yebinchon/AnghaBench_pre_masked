
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int VirtualAddress; int Size; } ;
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
 int FUNC_0 (int ,int *,TYPE_4__*,TYPE_3__*) ;
 size_t VAR_3 ;
 int FUNC_1 (char*,int,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static BOOL FUNC_2( HANDLE VAR_5,
                                           DWORD *VAR_6, DWORD *VAR_7 )
{
    IMAGE_NT_HEADERS32 VAR_8;
    IMAGE_NT_HEADERS64 VAR_9;
    IMAGE_DATA_DIRECTORY *VAR_10;
    int VAR_11;

    VAR_11 = FUNC_0(VAR_5, ((void*)0), &VAR_8, &VAR_9);

    if (VAR_11 == VAR_1)
        VAR_10 = &VAR_8[VAR_3];
    else if (VAR_11 == VAR_2)
        VAR_10 = &VAR_9[VAR_3];
    else
        return VAR_0;

    FUNC_1("ret = %d size = %x addr = %x\n", VAR_11, VAR_10->Size, VAR_10->VirtualAddress);

    *VAR_7 = VAR_10->Size;
    *VAR_6 = VAR_10->VirtualAddress;

    return VAR_4;
}
