
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct metadata_container {int dummy; } ;
struct TYPE_3__ {unsigned int container_count; struct metadata_container* containers; scalar_t__ container_formats; } ;
typedef TYPE_1__ MetadataReaderInfo ;
typedef int GUID ;


 scalar_t__ FUNC_0 (scalar_t__,int const*) ;

__attribute__((used)) static struct metadata_container *FUNC_1(MetadataReaderInfo *VAR_0, const GUID *VAR_1)
{
    unsigned VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0->container_count; VAR_2++)
        if (FUNC_0(VAR_0->container_formats + VAR_2, VAR_1))
            return VAR_0->containers + VAR_2;

    return ((void*)0);
}
