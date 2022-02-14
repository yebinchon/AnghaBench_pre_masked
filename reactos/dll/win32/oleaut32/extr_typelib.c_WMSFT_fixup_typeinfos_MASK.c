
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ data; } ;
struct TYPE_8__ {TYPE_1__ typeinfo_seg; } ;
typedef TYPE_2__ WMSFT_TLBFile ;
struct TYPE_10__ {scalar_t__ TypeInfoCount; } ;
struct TYPE_9__ {int memoffset; } ;
typedef TYPE_3__ MSFT_TypeInfoBase ;
typedef TYPE_4__ ITypeLibImpl ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;

__attribute__((used)) static HRESULT FUNC_0(ITypeLibImpl *VAR_1, WMSFT_TLBFile *VAR_2,
        DWORD VAR_3)
{
    DWORD VAR_4;
    MSFT_TypeInfoBase *VAR_5 = (MSFT_TypeInfoBase *)VAR_2->typeinfo_seg.data;

    for(VAR_4 = 0; VAR_4 < VAR_1->TypeInfoCount; ++VAR_4){
        VAR_5->memoffset += VAR_3;
        ++VAR_5;
    }

    return VAR_0;
}
