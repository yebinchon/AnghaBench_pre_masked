
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; int allocated; scalar_t__ attr; } ;
typedef TYPE_1__ mxattributes ;
typedef int mxattribute ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static HRESULT FUNC_1(mxattributes *VAR_2)
{
    if (VAR_2->length < VAR_2->allocated) return VAR_1;

    VAR_2->allocated *= 2;
    VAR_2->attr = FUNC_0(VAR_2->attr, VAR_2->allocated*sizeof(mxattribute));

    return VAR_2->attr ? VAR_1 : VAR_0;
}
