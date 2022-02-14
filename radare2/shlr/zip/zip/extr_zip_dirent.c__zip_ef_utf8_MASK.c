
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zip_uint8_t ;
typedef scalar_t__ zip_uint32_t ;
typedef int zip_uint16_t ;
struct zip_string {int dummy; } ;
struct zip_extra_field {int dummy; } ;
struct zip_error {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct zip_extra_field* FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (struct zip_error*,int ,int ) ;
 int FUNC_2 (int ,int **) ;
 int FUNC_3 (struct zip_string*) ;
 int * FUNC_4 (struct zip_string*,scalar_t__*,int ,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,int const*,scalar_t__) ;

__attribute__((used)) static struct zip_extra_field *
FUNC_8(zip_uint16_t VAR_4, struct zip_string *VAR_5, struct zip_error *VAR_6)
{
    const zip_uint8_t *VAR_7;
    zip_uint8_t *VAR_8, *VAR_9;
    zip_uint32_t VAR_10;
    struct zip_extra_field *VAR_11;

    VAR_7 = FUNC_4(VAR_5, &VAR_10, VAR_2, ((void*)0));

    if (VAR_10+5 > VAR_3) {

    }

    if ((VAR_8=(zip_uint8_t *)FUNC_6(VAR_10+5)) == ((void*)0)) {
 FUNC_1(VAR_6, VAR_1, 0);
 return ((void*)0);
    }

    VAR_9 = VAR_8;
    *(VAR_9++) = 1;
    FUNC_2(FUNC_3(VAR_5), &VAR_9);
    FUNC_7(VAR_9, VAR_7, VAR_10);
    VAR_9 += VAR_10;

    VAR_11 = FUNC_0(VAR_4, (zip_uint16_t)(VAR_9-VAR_8), VAR_8, VAR_0);
    FUNC_5(VAR_8);
    return VAR_11;
}
