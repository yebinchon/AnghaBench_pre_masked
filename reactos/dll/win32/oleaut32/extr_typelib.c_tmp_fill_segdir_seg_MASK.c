
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ len; } ;
typedef TYPE_1__ WMSFT_SegContents ;
struct TYPE_6__ {int offset; int res08; int res0c; scalar_t__ length; } ;
typedef TYPE_2__ MSFT_pSeg ;
typedef int DWORD ;



__attribute__((used)) static void FUNC_0(MSFT_pSeg *VAR_0, WMSFT_SegContents *VAR_1, DWORD *VAR_2)
{
    if(VAR_1 && VAR_1->len){
        VAR_0->offset = *VAR_2;
        VAR_0->length = VAR_1->len;
        *VAR_2 += VAR_0->length;
    }else{
        VAR_0->offset = -1;
        VAR_0->length = 0;
    }


    VAR_0->res08 = -1;
    VAR_0->res0c = 0xf;
}
