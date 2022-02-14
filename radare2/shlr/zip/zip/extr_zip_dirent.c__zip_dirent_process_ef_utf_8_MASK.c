
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zip_uint8_t ;
typedef scalar_t__ zip_uint32_t ;
typedef int zip_uint16_t ;
struct zip_string {int dummy; } ;
struct zip_dirent {int extra_fields; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_0 (int ,int*,int,int ,int ,int *) ;
 scalar_t__ FUNC_1 (int const**) ;
 scalar_t__ FUNC_2 (struct zip_string*) ;
 int FUNC_3 (struct zip_string*) ;
 struct zip_string* FUNC_4 (int const*,int,int ,int *) ;

__attribute__((used)) static struct zip_string *
FUNC_5(const struct zip_dirent *VAR_2, zip_uint16_t VAR_3, struct zip_string *VAR_4)
{
    zip_uint16_t VAR_5;
    zip_uint32_t VAR_6;

    const zip_uint8_t *VAR_7 = FUNC_0(VAR_2->extra_fields, &VAR_5, VAR_3, 0, VAR_0, ((void*)0));

    if (VAR_7 == ((void*)0) || VAR_5 < 5 || VAR_7[0] != 1)
 return VAR_4;

    VAR_7++;
    VAR_6 = FUNC_1(&VAR_7);

    if (FUNC_2(VAR_4) == VAR_6) {
 struct zip_string *VAR_8 = FUNC_4(VAR_7, VAR_5-5, VAR_1, ((void*)0));

 if (VAR_8 != ((void*)0)) {
     FUNC_3(VAR_4);
     VAR_4 = VAR_8;
 }
    }

    return VAR_4;
}
