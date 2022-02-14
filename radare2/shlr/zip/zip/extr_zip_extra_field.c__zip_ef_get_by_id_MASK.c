
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char zip_uint8_t ;
typedef scalar_t__ zip_uint16_t ;
typedef int zip_flags_t ;
struct zip_extra_field {scalar_t__ id; int flags; scalar_t__ size; char const* data; struct zip_extra_field* next; } ;
struct zip_error {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct zip_error*,int ,int ) ;

const zip_uint8_t *
FUNC_1(const struct zip_extra_field *VAR_2, zip_uint16_t *VAR_3, zip_uint16_t VAR_4, zip_uint16_t VAR_5, zip_flags_t VAR_6, struct zip_error *VAR_7)
{
    static const zip_uint8_t VAR_8[1] = { '\0' };

    int VAR_9;

    VAR_9 = 0;
    for (; VAR_2; VAR_2=VAR_2->next) {
 if (VAR_2->id == VAR_4 && (VAR_2->flags & VAR_6 & VAR_0)) {
     if (VAR_9 < VAR_5) {
  VAR_9++;
  continue;
     }

     if (VAR_3)
  *VAR_3 = VAR_2->size;
     if (VAR_2->size > 0)
  return VAR_2->data;
     else
  return VAR_8;
 }
    }

    FUNC_0(VAR_7, VAR_1, 0);
    return ((void*)0);
}
