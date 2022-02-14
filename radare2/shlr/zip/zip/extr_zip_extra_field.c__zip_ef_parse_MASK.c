
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zip_uint8_t ;
typedef int zip_uint16_t ;
typedef int zip_flags_t ;
struct zip_extra_field {struct zip_extra_field* next; } ;
struct zip_error {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct zip_extra_field*) ;
 struct zip_extra_field* FUNC_1 (int,int,int const*,int ) ;
 int FUNC_2 (struct zip_error*,int ,int ) ;
 int FUNC_3 (int const**) ;

struct zip_extra_field *
FUNC_4(const zip_uint8_t *VAR_2, zip_uint16_t VAR_3, zip_flags_t VAR_4, struct zip_error *VAR_5)
{
    struct zip_extra_field *VAR_6, *VAR_7, *VAR_8;
    const zip_uint8_t *VAR_9;
    zip_uint16_t VAR_10, VAR_11;

    VAR_8 = ((void*)0);
    for (VAR_9=VAR_2; VAR_9<VAR_2+VAR_3; VAR_9+=VAR_11) {
 if (VAR_9+4 > VAR_2+VAR_3) {
     FUNC_2(VAR_5, VAR_0, 0);
     FUNC_0(VAR_8);
     return ((void*)0);
 }

 VAR_10 = FUNC_3(&VAR_9);
 VAR_11 = FUNC_3(&VAR_9);

 if (VAR_9+VAR_11 > VAR_2+VAR_3) {
     FUNC_2(VAR_5, VAR_0, 0);
     FUNC_0(VAR_8);
     return ((void*)0);
 }

 if ((VAR_7=FUNC_1(VAR_10, VAR_11, VAR_9, VAR_4)) == ((void*)0)) {
     FUNC_2(VAR_5, VAR_1, 0);
     FUNC_0(VAR_8);
     return ((void*)0);
 }

 if (VAR_8) {
     VAR_6->next = VAR_7;
     VAR_6 = VAR_7;
 }
 else
     VAR_8 = VAR_6 = VAR_7;
    }

    return VAR_8;
}
