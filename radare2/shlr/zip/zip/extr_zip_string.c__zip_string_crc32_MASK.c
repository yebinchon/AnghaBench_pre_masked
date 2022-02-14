
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long zip_uint32_t ;
struct zip_string {int length; int raw; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (long,int ,int ) ;

zip_uint32_t
FUNC_1(const struct zip_string *VAR_1)
{
    zip_uint32_t VAR_2;

    VAR_2 = (zip_uint32_t)FUNC_0(0L, VAR_0, 0);

    if (VAR_1 != ((void*)0))
 VAR_2 = (zip_uint32_t)FUNC_0(VAR_2, VAR_1->raw, VAR_1->length);

    return VAR_2;
}
