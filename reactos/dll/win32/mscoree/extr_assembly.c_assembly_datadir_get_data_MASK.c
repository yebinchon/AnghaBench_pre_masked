
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {int Size; int VirtualAddress; } ;
typedef TYPE_1__ IMAGE_DATA_DIRECTORY ;
typedef int ASSEMBLY ;


 void* FUNC_0 (int *,int ) ;

__attribute__((used)) static ULONG FUNC_1(ASSEMBLY *VAR_0,
    IMAGE_DATA_DIRECTORY *VAR_1, void **VAR_2)
{
    if (!VAR_1->VirtualAddress || !VAR_1->Size)
    {
        *VAR_2 = ((void*)0);
        return 0;
    }
    else
    {
        *VAR_2 = FUNC_0(VAR_0, VAR_1->VirtualAddress);
        return VAR_1->Size;
    }
}
