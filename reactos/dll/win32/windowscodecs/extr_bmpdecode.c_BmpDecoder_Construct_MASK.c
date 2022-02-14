
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int IWICBitmapDecoder_iface; } ;
typedef int REFIID ;
typedef int HRESULT ;
typedef TYPE_1__ BmpDecoder ;


 int FUNC_0 (int,int,TYPE_1__**) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,void**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,void**) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static HRESULT FUNC_6(int VAR_0, int VAR_1, REFIID VAR_2, void** VAR_3)
{
    BmpDecoder *VAR_4;
    HRESULT VAR_5;

    FUNC_4("(%s,%p)\n", FUNC_5(VAR_2), VAR_3);

    *VAR_3 = ((void*)0);

    VAR_5 = FUNC_0(VAR_0, VAR_1, &VAR_4);
    if (FUNC_1(VAR_5)) return VAR_5;

    VAR_5 = FUNC_2(&VAR_4->IWICBitmapDecoder_iface, VAR_2, VAR_3);
    FUNC_3(&VAR_4->IWICBitmapDecoder_iface);

    return VAR_5;
}
