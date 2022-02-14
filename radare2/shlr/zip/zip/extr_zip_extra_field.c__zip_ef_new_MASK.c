
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zip_uint8_t ;
typedef int zip_uint16_t ;
typedef int zip_flags_t ;
struct zip_extra_field {int id; int size; int * data; int flags; int * next; } ;


 int FUNC_0 (struct zip_extra_field*) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *,int const*,int) ;

struct zip_extra_field *
FUNC_3(zip_uint16_t VAR_0, zip_uint16_t VAR_1, const zip_uint8_t *VAR_2, zip_flags_t VAR_3)
{
    struct zip_extra_field *VAR_4;

    if ((VAR_4=(struct zip_extra_field *)FUNC_1(sizeof(*VAR_4))) == ((void*)0))
 return ((void*)0);

    VAR_4->next = ((void*)0);
    VAR_4->flags = VAR_3;
 VAR_4->data = ((void*)0);
    VAR_4->id = VAR_0;
    VAR_4->size = VAR_1;
    if (VAR_1 > 0) {
 zip_uint8_t *VAR_5 = FUNC_1 (VAR_1);
 if (VAR_5) {
  VAR_4->data = VAR_5;
  FUNC_2 (VAR_5, VAR_2, VAR_1);
 } else {
     FUNC_0(VAR_4);
     return ((void*)0);
 }
    }

    return VAR_4;
}
