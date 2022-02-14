
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int len; scalar_t__ data; } ;
struct TYPE_8__ {int * data; scalar_t__ len; } ;
struct TYPE_10__ {TYPE_2__ typeinfo_seg; TYPE_1__ aux_seg; } ;
typedef TYPE_3__ WMSFT_TLBFile ;
typedef size_t UINT ;
struct TYPE_11__ {size_t TypeInfoCount; int ** typeinfos; } ;
typedef TYPE_4__ ITypeLibImpl ;
typedef int ITypeInfoImpl ;
typedef int DWORD ;


 int FUNC_0 (int *,size_t,TYPE_3__*,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int,int) ;

__attribute__((used)) static void FUNC_3(ITypeLibImpl *VAR_0, WMSFT_TLBFile *VAR_1, DWORD *VAR_2)
{
    UINT VAR_3;

    VAR_1->typeinfo_seg.len = 0;
    for(VAR_3 = 0; VAR_3 < VAR_0->TypeInfoCount; ++VAR_3){
        ITypeInfoImpl *VAR_4 = VAR_0->typeinfos[VAR_3];
        *VAR_2 = VAR_1->typeinfo_seg.len;
        ++VAR_2;
        VAR_1->typeinfo_seg.len += FUNC_0(VAR_4, VAR_3, ((void*)0), ((void*)0));
    }

    VAR_1->typeinfo_seg.data = FUNC_1(VAR_1->typeinfo_seg.len);
    FUNC_2(VAR_1->typeinfo_seg.data, 0x96, VAR_1->typeinfo_seg.len);

    VAR_1->aux_seg.len = 0;
    VAR_1->aux_seg.data = ((void*)0);

    VAR_1->typeinfo_seg.len = 0;
    for(VAR_3 = 0; VAR_3 < VAR_0->TypeInfoCount; ++VAR_3){
        ITypeInfoImpl *VAR_5 = VAR_0->typeinfos[VAR_3];
        VAR_1->typeinfo_seg.len += FUNC_0(VAR_5, VAR_3, VAR_1,
                ((char *)VAR_1->typeinfo_seg.data) + VAR_1->typeinfo_seg.len);
    }
}
