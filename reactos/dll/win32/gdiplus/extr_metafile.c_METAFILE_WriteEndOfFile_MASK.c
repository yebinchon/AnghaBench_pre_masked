
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ Flags; int Type; } ;
struct TYPE_6__ {scalar_t__ metafile_type; } ;
typedef int GpStatus ;
typedef TYPE_1__ GpMetafile ;
typedef TYPE_2__ EmfPlusRecordHeader ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,void**) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static GpStatus FUNC_2(GpMetafile *VAR_4)
{
    GpStatus VAR_5;

    if (VAR_4->metafile_type == VAR_2 || VAR_4->metafile_type == VAR_1)
    {
        EmfPlusRecordHeader *VAR_6;

        VAR_5 = FUNC_0(VAR_4, sizeof(EmfPlusRecordHeader), (void**)&VAR_6);
        if (VAR_5 != VAR_3)
            return VAR_5;

        VAR_6->Type = VAR_0;
        VAR_6->Flags = 0;

        FUNC_1(VAR_4);
    }

    return VAR_3;
}
