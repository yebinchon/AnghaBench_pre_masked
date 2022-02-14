
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int UINT ;
struct TYPE_4__ {unsigned int container_count; void* containers; int * container_formats; int classkey; } ;
typedef TYPE_1__ MetadataReaderInfo ;
typedef int HRESULT ;
typedef int GUID ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,unsigned int,int *,unsigned int*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_2 (unsigned int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int *,void*) ;

__attribute__((used)) static BOOL FUNC_5(MetadataReaderInfo *VAR_3)
{
    UINT VAR_4;
    GUID *VAR_5;
    HRESULT VAR_6;

    VAR_6 = FUNC_0(VAR_3->classkey, VAR_2, 0, ((void*)0), &VAR_4);
    if (FUNC_1(VAR_6)) return VAR_1;

    VAR_5 = FUNC_2(VAR_4, sizeof(*VAR_5));
    if (!VAR_5) return VAR_0;

    VAR_6 = FUNC_0(VAR_3->classkey, VAR_2, VAR_4, VAR_5,
                                   &VAR_4);
    if (FUNC_1(VAR_6))
    {
        FUNC_3(VAR_5);
        return VAR_0;
    }

    VAR_3->container_formats = VAR_5;
    VAR_3->container_count = VAR_4;

    if (VAR_4)
    {
        unsigned VAR_7;

        VAR_3->containers = FUNC_2(VAR_4, sizeof(*VAR_3->containers));
        if (!VAR_3->containers) return VAR_0;

        for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
            FUNC_4(VAR_3, VAR_3->container_formats + VAR_7, VAR_3->containers + VAR_7);
    }

    return VAR_1;
}
