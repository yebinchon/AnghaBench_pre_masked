
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int NumberOfNamedEntries; int NumberOfIdEntries; } ;
struct TYPE_5__ {int OffsetToDirectory; int DataIsDirectory; } ;
typedef TYPE_1__ IMAGE_RESOURCE_DIRECTORY_ENTRY ;
typedef TYPE_2__ IMAGE_RESOURCE_DIRECTORY ;



__attribute__((used)) static IMAGE_RESOURCE_DIRECTORY *FUNC_0( IMAGE_RESOURCE_DIRECTORY *VAR_0,
                                           void *VAR_1, int VAR_2 )
{
    const IMAGE_RESOURCE_DIRECTORY_ENTRY *VAR_3 = (const IMAGE_RESOURCE_DIRECTORY_ENTRY *)(VAR_0 + 1);
    int VAR_4;

    for (VAR_4 = VAR_0->NumberOfNamedEntries; VAR_4 < VAR_0->NumberOfNamedEntries + VAR_0->NumberOfIdEntries; VAR_4++)
    {
        if (!VAR_3[VAR_4].DataIsDirectory == !VAR_2)
            return (IMAGE_RESOURCE_DIRECTORY *)((char *)VAR_1 + VAR_3[VAR_4].OffsetToDirectory);
    }
    return ((void*)0);
}
