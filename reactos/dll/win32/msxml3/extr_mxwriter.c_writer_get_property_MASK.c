
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t mxwriter_prop ;
struct TYPE_3__ {int * props; } ;
typedef TYPE_1__ mxwriter ;
typedef int VARIANT_BOOL ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static HRESULT FUNC_0(const mxwriter *VAR_2, mxwriter_prop VAR_3, VARIANT_BOOL *VAR_4)
{
    if (!VAR_4) return VAR_0;
    *VAR_4 = VAR_2->props[VAR_3];
    return VAR_1;
}
