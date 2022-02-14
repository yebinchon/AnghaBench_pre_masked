
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int OffsetToDirectory; } ;
typedef TYPE_1__ IMAGE_RESOURCE_DIRECTORY_ENTRY ;
typedef int IMAGE_RESOURCE_DIRECTORY ;



__attribute__((used)) static const IMAGE_RESOURCE_DIRECTORY *FUNC_0( const IMAGE_RESOURCE_DIRECTORY *VAR_0,
                                                           const void *VAR_1 )
{
    const IMAGE_RESOURCE_DIRECTORY_ENTRY *VAR_2;
    VAR_2 = (const IMAGE_RESOURCE_DIRECTORY_ENTRY *)(VAR_0 + 1);
    return (const IMAGE_RESOURCE_DIRECTORY *)((const char *)VAR_1 + VAR_2->OffsetToDirectory);
}
