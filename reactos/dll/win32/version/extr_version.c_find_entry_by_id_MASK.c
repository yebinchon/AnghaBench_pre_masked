
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ WORD ;
struct TYPE_12__ {int NumberOfNamedEntries; int NumberOfIdEntries; } ;
struct TYPE_10__ {scalar_t__ Id; } ;
struct TYPE_8__ {int OffsetToDirectory; } ;
struct TYPE_9__ {TYPE_1__ s2; } ;
struct TYPE_11__ {TYPE_3__ u; TYPE_2__ u2; } ;
typedef TYPE_4__ IMAGE_RESOURCE_DIRECTORY_ENTRY ;
typedef TYPE_5__ IMAGE_RESOURCE_DIRECTORY ;



__attribute__((used)) static const IMAGE_RESOURCE_DIRECTORY *FUNC_0( const IMAGE_RESOURCE_DIRECTORY *VAR_0,
                                                         WORD VAR_1, const void *VAR_2 )
{
    const IMAGE_RESOURCE_DIRECTORY_ENTRY *VAR_3;
    int VAR_4, VAR_5, VAR_6;

    VAR_3 = (const IMAGE_RESOURCE_DIRECTORY_ENTRY *)(VAR_0 + 1);
    VAR_4 = VAR_0->NumberOfNamedEntries;
    VAR_5 = VAR_4 + VAR_0->NumberOfIdEntries - 1;
    while (VAR_4 <= VAR_5)
    {
        VAR_6 = (VAR_4 + VAR_5) / 2;
        if (VAR_3[VAR_6].u.Id == VAR_1)
            return (const IMAGE_RESOURCE_DIRECTORY *)((const char *)VAR_2 + VAR_3[VAR_6].u2.s2.OffsetToDirectory);
        if (VAR_3[VAR_6].u.Id > VAR_1) VAR_5 = VAR_6 - 1;
        else VAR_4 = VAR_6 + 1;
    }
    return ((void*)0);
}
