
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int IBaseFilter_iface; } ;
struct TYPE_11__ {TYPE_2__ filter; } ;
struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_10__ {TYPE_5__ Parser; int seek; TYPE_1__ IAMStreamSelect_iface; } ;
typedef TYPE_3__ MPEGSplitterImpl ;
typedef int * LPVOID ;
typedef int IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (TYPE_5__*,int *,int *,int ,int ,int ,int ,int ,int ,int *,int *,int ,int *) ;
 int FUNC_4 (char*,int *,int **) ;
 int VAR_13 ;
 int FUNC_5 (TYPE_3__*,int) ;

HRESULT FUNC_6(IUnknown * VAR_14, LPVOID * VAR_15)
{
    MPEGSplitterImpl *VAR_16;
    HRESULT VAR_17 = VAR_3;

    FUNC_4("(%p, %p)\n", VAR_14, VAR_15);

    *VAR_15 = ((void*)0);

    if (VAR_14)
        return VAR_1;

    VAR_16 = FUNC_0(sizeof(MPEGSplitterImpl));
    if (!VAR_16)
        return VAR_4;

    FUNC_5(VAR_16, sizeof(MPEGSplitterImpl));
    VAR_17 = FUNC_3(&(VAR_16->Parser), &VAR_5, &VAR_2, VAR_10, VAR_11, VAR_9, VAR_6, VAR_7, VAR_8, ((void*)0), ((void*)0), VAR_12, ((void*)0));
    if (FUNC_2(VAR_17))
    {
        FUNC_1(VAR_16);
        return VAR_17;
    }
    VAR_16->IAMStreamSelect_iface.lpVtbl = &VAR_0;
    VAR_16->seek = VAR_13;


    *VAR_15 = &VAR_16->Parser.filter.IBaseFilter_iface;

    return VAR_17;
}
