
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IStream ;
typedef scalar_t__ GpStatus ;
typedef int GpMetafile ;
typedef int GpImage ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int *,int **) ;

__attribute__((used)) static GpStatus FUNC_2(IStream *VAR_2, GpImage **VAR_3)
{
    GpMetafile *VAR_4;
    GpStatus VAR_5;

    FUNC_0("%p %p\n", VAR_2, VAR_3);

    if (!VAR_2 || !VAR_3)
        return VAR_0;

    VAR_5 = FUNC_1(VAR_2, &VAR_4);
    if (VAR_5 != VAR_1)
    {
        FUNC_0("Could not load metafile\n");
        return VAR_5;
    }

    *VAR_3 = (GpImage *)VAR_4;
    FUNC_0("<-- %p\n", *VAR_3);

    return VAR_1;
}
