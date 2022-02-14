
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_extra_field {struct zip_extra_field* data; struct zip_extra_field* next; } ;


 int FUNC_0 (struct zip_extra_field*) ;

void
FUNC_1(struct zip_extra_field *VAR_0)
{
    struct zip_extra_field *VAR_1;

    while (VAR_0) {
 VAR_1 = VAR_0->next;
 FUNC_0(VAR_0->data);
 FUNC_0(VAR_0);
 VAR_0 = VAR_1;
    }
}
