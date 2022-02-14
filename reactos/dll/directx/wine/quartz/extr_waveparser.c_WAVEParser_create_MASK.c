
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int IBaseFilter_iface; } ;
struct TYPE_7__ {TYPE_1__ filter; } ;
struct TYPE_6__ {TYPE_3__ Parser; } ;
typedef TYPE_2__ WAVEParserImpl ;
typedef int * LPVOID ;
typedef int IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int *,int *,int ,int ,int ,int ,int ,int ,int *,int *,int ,int *) ;
 int FUNC_3 (char*,int *,int **) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

HRESULT FUNC_4(IUnknown * VAR_10, LPVOID * VAR_11)
{
    HRESULT VAR_12;
    WAVEParserImpl * VAR_13;

    FUNC_3("(%p, %p)\n", VAR_10, VAR_11);

    *VAR_11 = ((void*)0);

    if (VAR_10)
        return VAR_0;


    VAR_13 = FUNC_0(sizeof(WAVEParserImpl));

    VAR_12 = FUNC_2(&(VAR_13->Parser), &VAR_7, &VAR_1, VAR_6, VAR_5, VAR_4, VAR_3, VAR_8, VAR_9, ((void*)0), ((void*)0), VAR_2, ((void*)0));

    if (FUNC_1(VAR_12))
        return VAR_12;

    *VAR_11 = &VAR_13->Parser.filter.IBaseFilter_iface;

    return VAR_12;
}
