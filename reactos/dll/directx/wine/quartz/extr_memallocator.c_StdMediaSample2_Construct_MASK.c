
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int cbData; int * pbBuffer; scalar_t__ lActual; scalar_t__ cbBuffer; } ;
struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_7__ {scalar_t__ tMediaEnd; int tMediaStart; TYPE_3__ props; int * pParent; scalar_t__ ref; TYPE_1__ IMediaSample2_iface; } ;
typedef TYPE_2__ StdMediaSample2 ;
typedef scalar_t__ LONG ;
typedef int IMemAllocator ;
typedef int HRESULT ;
typedef int BYTE ;
typedef int AM_SAMPLE2_PROPERTIES ;


 TYPE_2__* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static HRESULT FUNC_3(BYTE * VAR_4, LONG VAR_5, IMemAllocator * VAR_6, StdMediaSample2 ** VAR_7)
{
    FUNC_2(VAR_4 && VAR_6 && (VAR_5 > 0));

    if (!(*VAR_7 = FUNC_0(sizeof(StdMediaSample2))))
        return VAR_0;

    (*VAR_7)->IMediaSample2_iface.lpVtbl = &VAR_3;
    (*VAR_7)->ref = 0;
    FUNC_1(&(*VAR_7)->props, sizeof((*VAR_7)->props));




    (*VAR_7)->pParent = VAR_6;
    (*VAR_7)->props.cbData = sizeof(AM_SAMPLE2_PROPERTIES);
    (*VAR_7)->props.cbBuffer = (*VAR_7)->props.lActual = VAR_5;
    (*VAR_7)->props.pbBuffer = VAR_4;
    (*VAR_7)->tMediaStart = VAR_1;
    (*VAR_7)->tMediaEnd = 0;

    return VAR_2;
}
