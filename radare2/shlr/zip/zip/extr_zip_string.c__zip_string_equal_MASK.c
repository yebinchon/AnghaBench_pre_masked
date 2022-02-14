
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_string {scalar_t__ length; int raw; } ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

int
FUNC_1(const struct zip_string *VAR_0, const struct zip_string *VAR_1)
{
    if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 return VAR_0 == VAR_1;

    if (VAR_0->length != VAR_1->length)
 return 0;



    return (FUNC_0(VAR_0->raw, VAR_1->raw, VAR_0->length) == 0);
}
