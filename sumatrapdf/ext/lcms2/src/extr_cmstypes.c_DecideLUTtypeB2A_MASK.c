
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int cmsTagTypeSignature ;
struct TYPE_2__ {scalar_t__ SaveAs8Bits; } ;
typedef TYPE_1__ cmsPipeline ;
typedef double cmsFloat64Number ;
typedef int cmsContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static
cmsTagTypeSignature FUNC_1(cmsContext VAR_3, cmsFloat64Number VAR_4, const void *VAR_5)
{
    cmsPipeline* VAR_6 = (cmsPipeline*) VAR_5;
    FUNC_0(VAR_3);

    if (VAR_4 < 4.0) {
        if (VAR_6 ->SaveAs8Bits) return VAR_1;
        return VAR_0;
    }
    else {
         return VAR_2;
    }
}
