
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int len; scalar_t__ data; } ;
struct TYPE_10__ {TYPE_1__ arraydesc_seg; } ;
typedef TYPE_3__ WMSFT_TLBFile ;
typedef int USHORT ;
struct TYPE_11__ {int cDims; TYPE_2__* rgbounds; int tdescElem; } ;
struct TYPE_9__ {int cElements; int lLbound; } ;
typedef int DWORD ;
typedef TYPE_4__ ARRAYDESC ;


 int FUNC_0 (int *,TYPE_3__*,int *,int *) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static DWORD FUNC_3(ARRAYDESC *VAR_0, WMSFT_TLBFile *VAR_1)
{
    DWORD VAR_2 = VAR_1->arraydesc_seg.len;
    DWORD *VAR_3;
    USHORT VAR_4;





    VAR_1->arraydesc_seg.len += (2 + VAR_0->cDims * 2) * sizeof(DWORD);
    if(!VAR_1->arraydesc_seg.data)
        VAR_1->arraydesc_seg.data = FUNC_1(VAR_1->arraydesc_seg.len);
    else
        VAR_1->arraydesc_seg.data = FUNC_2(VAR_1->arraydesc_seg.data, VAR_1->arraydesc_seg.len);
    VAR_3 = (DWORD*)((char *)VAR_1->arraydesc_seg.data + VAR_2);

    VAR_3[0] = FUNC_0(&VAR_0->tdescElem, VAR_1, ((void*)0), ((void*)0));
    VAR_3[1] = VAR_0->cDims | ((VAR_0->cDims * 2 * sizeof(DWORD)) << 16);
    for(VAR_4 = 0; VAR_4 < VAR_0->cDims; ++VAR_4){
        VAR_3[2 + VAR_4 * 2] = VAR_0->rgbounds[VAR_4].cElements;
        VAR_3[2 + VAR_4 * 2 + 1] = VAR_0->rgbounds[VAR_4].lLbound;
    }

    return VAR_2;
}
