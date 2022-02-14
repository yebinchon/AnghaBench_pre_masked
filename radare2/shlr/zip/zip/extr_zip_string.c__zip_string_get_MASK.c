
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char zip_uint8_t ;
typedef scalar_t__ zip_uint32_t ;
typedef int zip_flags_t ;
struct zip_string {scalar_t__ encoding; char const* converted; char const* raw; scalar_t__ length; scalar_t__ converted_length; } ;
struct zip_error {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char const* FUNC_0 (char const*,scalar_t__,scalar_t__*,struct zip_error*) ;
 int FUNC_1 (struct zip_string*,scalar_t__) ;

const zip_uint8_t *
FUNC_2(struct zip_string *VAR_6, zip_uint32_t *VAR_7, zip_flags_t VAR_8, struct zip_error *VAR_9)
{
    static const zip_uint8_t VAR_10[1] = "";

    if (VAR_6 == ((void*)0)) {
 if (VAR_7)
     *VAR_7 = 0;
 return VAR_10;
    }

    if ((VAR_8 & VAR_4) == 0) {

 if (VAR_6->encoding == VAR_2)
     FUNC_1(VAR_6, VAR_2);

 if (((VAR_8 & VAR_5)
      && VAR_6->encoding != VAR_0 && VAR_6->encoding != VAR_3)
     || (VAR_6->encoding == VAR_1)) {
     if (VAR_6->converted == ((void*)0)) {
  if ((VAR_6->converted=FUNC_0(VAR_6->raw, VAR_6->length,
         &VAR_6->converted_length, VAR_9)) == ((void*)0))
      return ((void*)0);
     }
     if (VAR_7)
  *VAR_7 = VAR_6->converted_length;
     return VAR_6->converted;
 }
    }

    if (VAR_7)
 *VAR_7 = VAR_6->length;
    return VAR_6->raw;
}
