
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char zip_uint8_t ;
typedef int zip_uint16_t ;
typedef int zip_flags_t ;
struct zip_string {char* raw; int length; int encoding; scalar_t__ converted_length; int * converted; } ;
struct zip_error {int dummy; } ;
typedef enum zip_encoding_type { ____Placeholder_zip_encoding_type } zip_encoding_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int FUNC_0 (struct zip_error*,int ,int ) ;
 scalar_t__ FUNC_1 (struct zip_string*,int) ;
 int FUNC_2 (struct zip_string*) ;
 int FUNC_3 (struct zip_string*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*,char const*,int) ;

struct zip_string *
FUNC_6(const zip_uint8_t *VAR_7, zip_uint16_t VAR_8, zip_flags_t VAR_9, struct zip_error *VAR_10)
{
    struct zip_string *VAR_11;
    enum zip_encoding_type VAR_12;

    if (VAR_8 == 0)
 return ((void*)0);

    switch (VAR_9 & VAR_6) {
    case 129:
 VAR_12 = VAR_2;
 break;
    case 128:
 VAR_12 = VAR_3;
 break;
    case 130:
 VAR_12 = VAR_0;
 break;
    default:
 FUNC_0(VAR_10, VAR_4, 0);
 return ((void*)0);
    }

    if ((VAR_11=(struct zip_string *)FUNC_4(sizeof(*VAR_11))) == ((void*)0)) {
 FUNC_0(VAR_10, VAR_5, 0);
 return ((void*)0);
    }

    if ((VAR_11->raw=(zip_uint8_t *)FUNC_4(VAR_8+1)) == ((void*)0)) {
 FUNC_3(VAR_11);
 return ((void*)0);
    }

    FUNC_5(VAR_11->raw, VAR_7, VAR_8);
    VAR_11->raw[VAR_8] = '\0';
    VAR_11->length = VAR_8;
    VAR_11->encoding = VAR_2;
    VAR_11->converted = ((void*)0);
    VAR_11->converted_length = 0;

    if (VAR_12 != VAR_2) {
 if (FUNC_1(VAR_11, VAR_12) == VAR_1) {
     FUNC_2(VAR_11);
     FUNC_0(VAR_10, VAR_4, 0);
     return ((void*)0);
 }
    }

    return VAR_11;
}
