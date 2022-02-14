
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ gdi_clip; int clip; } ;
typedef scalar_t__ HRGN ;
typedef scalar_t__ GpStatus ;
typedef int GpRegion ;
typedef int GpMatrix ;
typedef TYPE_1__ GpGraphics ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int **) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,scalar_t__*) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ,int ,int *) ;

__attribute__((used)) static GpStatus FUNC_8(GpGraphics *VAR_5, HRGN *VAR_6)
{
    GpRegion *VAR_7;
    GpMatrix VAR_8;
    GpStatus VAR_9;
    BOOL VAR_10;

    VAR_9 = FUNC_7(VAR_5, VAR_4, VAR_0, &VAR_8);

    if (VAR_9 == VAR_1)
        VAR_9 = FUNC_5(&VAR_8, &VAR_10);

    if (VAR_9 == VAR_1)
        VAR_9 = FUNC_2(VAR_5->clip, &VAR_7);

    if (VAR_9 == VAR_1)
    {
        if (!VAR_10)
            VAR_9 = FUNC_6(VAR_7, &VAR_8);

        if (VAR_9 == VAR_1)
            VAR_9 = FUNC_4(VAR_7, ((void*)0), VAR_6);

        FUNC_3(VAR_7);
    }

    if (VAR_9 == VAR_1 && VAR_5->gdi_clip)
    {
        if (*VAR_6)
            FUNC_0(*VAR_6, *VAR_6, VAR_5->gdi_clip, VAR_2);
        else
        {
            *VAR_6 = FUNC_1(0,0,0,0);
            FUNC_0(*VAR_6, VAR_5->gdi_clip, VAR_5->gdi_clip, VAR_3);
        }
    }

    return VAR_9;
}
