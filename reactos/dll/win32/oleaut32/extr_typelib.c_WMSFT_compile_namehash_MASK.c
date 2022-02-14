
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; int data; } ;
struct TYPE_5__ {TYPE_1__ namehash_seg; } ;
typedef TYPE_2__ WMSFT_TLBFile ;
typedef int ITypeLibImpl ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void FUNC_2(ITypeLibImpl *VAR_0, WMSFT_TLBFile *VAR_1)
{
    VAR_1->namehash_seg.len = 0x200;
    VAR_1->namehash_seg.data = FUNC_0(VAR_1->namehash_seg.len);
    FUNC_1(VAR_1->namehash_seg.data, 0xFF, VAR_1->namehash_seg.len);
}
