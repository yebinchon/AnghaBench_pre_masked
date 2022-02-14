
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_string {struct zip_string* converted; struct zip_string* raw; } ;


 int FUNC_0 (struct zip_string*) ;

void
FUNC_1(struct zip_string *VAR_0)
{
    if (VAR_0 == ((void*)0))
 return;

    FUNC_0(VAR_0->raw);
    FUNC_0(VAR_0->converted);
    FUNC_0(VAR_0);
}
