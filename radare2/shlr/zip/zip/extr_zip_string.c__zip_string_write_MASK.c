
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_string {int length; int raw; } ;
typedef int FILE ;


 int FUNC_0 (int ,int ,int,int *) ;

void
FUNC_1(const struct zip_string *VAR_0, FILE *VAR_1)
{
    if (VAR_0 == ((void*)0))
 return;

    FUNC_0(VAR_0->raw, VAR_0->length, 1, VAR_1);
}
