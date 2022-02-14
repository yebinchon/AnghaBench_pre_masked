
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_extra_field {struct zip_extra_field* next; int id; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct zip_extra_field*) ;

struct zip_extra_field *
FUNC_2(struct zip_extra_field *VAR_0)
{
    struct zip_extra_field *VAR_1;
    struct zip_extra_field *VAR_2, *VAR_3;

    VAR_1 = VAR_0;
    VAR_2 = ((void*)0);

    while (VAR_0) {
        if (FUNC_0(VAR_0->id)) {
            VAR_3 = VAR_0->next;
            if (VAR_1 == VAR_0)
                VAR_1 = VAR_3;
            VAR_0->next = ((void*)0);
            FUNC_1(VAR_0);
            if (VAR_2)
                VAR_2->next = VAR_3;
            VAR_0 = VAR_3;
        }
        else {
            VAR_2 = VAR_0;
            VAR_0 = VAR_0->next;
        }
    }

    return VAR_1;
}
