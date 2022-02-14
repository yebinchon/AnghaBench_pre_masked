
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int * palette; } ;
typedef int IWICBitmapDecoder ;
typedef int IStream ;
typedef int HRESULT ;
typedef scalar_t__ GpStatus ;
typedef TYPE_1__ GpImage ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int *,int,int ,int ,TYPE_1__**) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,int *,int **) ;

__attribute__((used)) static GpStatus FUNC_7(IStream* VAR_3, GpImage **VAR_4)
{
    IWICBitmapDecoder *VAR_5;
    UINT VAR_6;
    GpStatus VAR_7;
    HRESULT VAR_8;

    VAR_7 = FUNC_6(VAR_3, &VAR_0, &VAR_5);
    if(VAR_7 != VAR_1)
        return VAR_7;

    VAR_8 = FUNC_1(VAR_5, &VAR_6);
    if(FUNC_0(VAR_8))
        return FUNC_5(VAR_8);

    VAR_7 = FUNC_3(VAR_5, VAR_6 > 1, 0, VAR_2, VAR_4);
    FUNC_2(VAR_5);
    if(VAR_7 != VAR_1)
        return VAR_7;

    if(VAR_6 > 1) {
        FUNC_4((*VAR_4)->palette);
        (*VAR_4)->palette = ((void*)0);
    }
    return VAR_1;
}
