
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int IBaseFilter_iface; } ;
struct TYPE_7__ {TYPE_1__ filter; } ;
struct TYPE_6__ {TYPE_3__ Parser; int * oldindex; int * streams; } ;
typedef int * LPVOID ;
typedef int IUnknown ;
typedef int HRESULT ;
typedef TYPE_2__ AVISplitterImpl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int *,int *,int ,int ,int ,int ,int ,int ,int ,int *,int ,int *) ;
 int FUNC_3 (char*,int *,int **) ;

HRESULT FUNC_4(IUnknown * VAR_11, LPVOID * VAR_12)
{
    HRESULT VAR_13;
    AVISplitterImpl * VAR_14;

    FUNC_3("(%p, %p)\n", VAR_11, VAR_12);

    *VAR_12 = ((void*)0);

    if (VAR_11)
        return VAR_9;


    VAR_14 = FUNC_0(sizeof(AVISplitterImpl));

    VAR_14->streams = ((void*)0);
    VAR_14->oldindex = ((void*)0);

    VAR_13 = FUNC_2(&(VAR_14->Parser), &VAR_0, &VAR_10, VAR_5, VAR_4, VAR_3, VAR_2, VAR_1, VAR_7, VAR_6, ((void*)0), VAR_8, ((void*)0));

    if (FUNC_1(VAR_13))
        return VAR_13;

    *VAR_12 = &VAR_14->Parser.filter.IBaseFilter_iface;

    return VAR_13;
}
