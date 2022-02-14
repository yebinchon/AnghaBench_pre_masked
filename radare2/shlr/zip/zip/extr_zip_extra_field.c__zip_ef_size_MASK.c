
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zip_uint16_t ;
typedef int zip_flags_t ;
struct zip_extra_field {int flags; scalar_t__ size; struct zip_extra_field* next; } ;


 int VAR_0 ;

zip_uint16_t
FUNC_0(const struct zip_extra_field *VAR_1, zip_flags_t VAR_2)
{
    zip_uint16_t VAR_3;

    VAR_3 = 0;
    for (; VAR_1; VAR_1=VAR_1->next) {
 if (VAR_1->flags & VAR_2 & VAR_0)
     VAR_3 += 4+VAR_1->size;
    }

    return VAR_3;
}
