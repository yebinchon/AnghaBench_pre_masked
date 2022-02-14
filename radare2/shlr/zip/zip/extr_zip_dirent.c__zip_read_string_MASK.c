
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zip_uint8_t ;
typedef int zip_uint16_t ;
struct zip_string {int dummy; } ;
struct zip_error {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int * FUNC_0 (int const**,int *,int ,int,struct zip_error*) ;
 struct zip_string* FUNC_1 (int *,int ,int ,struct zip_error*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct zip_string *
FUNC_3(const zip_uint8_t **VAR_1, FILE *VAR_2, zip_uint16_t VAR_3, int VAR_4, struct zip_error *VAR_5)
{
    zip_uint8_t *VAR_6;
    struct zip_string *VAR_7;

    if ((VAR_6=FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5)) == ((void*)0))
 return ((void*)0);

    VAR_7 = FUNC_1(VAR_6, VAR_3, VAR_0, VAR_5);
    FUNC_2(VAR_6);
    return VAR_7;
}
