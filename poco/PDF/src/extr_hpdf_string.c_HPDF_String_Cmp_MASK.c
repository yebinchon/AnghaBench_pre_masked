
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; int value; } ;
typedef TYPE_1__* HPDF_String ;
typedef int HPDF_INT32 ;


 int FUNC_0 (int ,int ,scalar_t__) ;

HPDF_INT32
FUNC_1 (HPDF_String VAR_0,
                  HPDF_String VAR_1)
{
    if (VAR_0->len < VAR_1->len) return -1;
    if (VAR_0->len > VAR_1->len) return +1;
    return FUNC_0(VAR_0->value, VAR_1->value, VAR_0->len);
}
