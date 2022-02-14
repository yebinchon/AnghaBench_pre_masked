
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int OffsetToDirectory; } ;
struct TYPE_5__ {TYPE_1__ s2; } ;
struct TYPE_6__ {TYPE_2__ u2; } ;
typedef TYPE_3__ IMAGE_RESOURCE_DIRECTORY_ENTRY ;
typedef int IMAGE_RESOURCE_DIRECTORY ;



__attribute__((used)) static const IMAGE_RESOURCE_DIRECTORY *FUNC_0( const IMAGE_RESOURCE_DIRECTORY *VAR_0,
                                                           const void *VAR_1 )
{
    const IMAGE_RESOURCE_DIRECTORY_ENTRY *VAR_2;

    VAR_2 = (const IMAGE_RESOURCE_DIRECTORY_ENTRY *)(VAR_0 + 1);
    return (const IMAGE_RESOURCE_DIRECTORY *)((const char *)VAR_1 + VAR_2->u2.s2.OffsetToDirectory);
}
