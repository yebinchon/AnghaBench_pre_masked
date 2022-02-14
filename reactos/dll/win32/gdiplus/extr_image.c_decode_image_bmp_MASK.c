
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ format; } ;
typedef int IStream ;
typedef scalar_t__ GpStatus ;
typedef int GpImage ;
typedef TYPE_1__ GpBitmap ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,int *,int **) ;

__attribute__((used)) static GpStatus FUNC_1(IStream* VAR_4, GpImage **VAR_5)
{
    GpStatus VAR_6;
    GpBitmap* VAR_7;

    VAR_6 = FUNC_0(VAR_4, &VAR_0, ((void*)0), VAR_5);

    VAR_7 = (GpBitmap*)*VAR_5;

    if (VAR_6 == VAR_1 && VAR_7->format == VAR_2)
    {

        VAR_7->format = VAR_3;
    }

    return VAR_6;
}
