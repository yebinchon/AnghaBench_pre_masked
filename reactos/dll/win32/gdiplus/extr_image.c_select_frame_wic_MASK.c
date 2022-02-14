
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_6__ {scalar_t__ type; int format; int busy; int decoder; } ;
typedef scalar_t__ GpStatus ;
typedef int GpMetafile ;
typedef TYPE_1__ GpImage ;
typedef int GpBitmap ;
typedef int GUID ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int *,TYPE_1__**) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *,int) ;

__attribute__((used)) static GpStatus FUNC_4(GpImage *VAR_4, UINT VAR_5)
{
    GpImage *VAR_6;
    GpStatus VAR_7;

    VAR_7 = FUNC_0(VAR_4->decoder, VAR_0, VAR_5, ((void*)0), &VAR_6);
    if(VAR_7 != VAR_3)
        return VAR_7;

    VAR_6->busy = VAR_4->busy;
    FUNC_3(&VAR_6->format, &VAR_4->format, sizeof(GUID));
    FUNC_1(VAR_4);
    if (VAR_4->type == VAR_1)
        *(GpBitmap *)VAR_4 = *(GpBitmap *)VAR_6;
    else if (VAR_4->type == VAR_2)
        *(GpMetafile *)VAR_4 = *(GpMetafile *)VAR_6;
    VAR_6->type = ~0;
    FUNC_2(VAR_6);
    return VAR_3;
}
