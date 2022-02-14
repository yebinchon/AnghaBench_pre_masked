
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_extra_field {struct zip_extra_field* next; int flags; int data; int size; int id; } ;
struct zip_error {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct zip_extra_field*) ;
 struct zip_extra_field* FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct zip_error*,int ,int ) ;

struct zip_extra_field *
FUNC_3(const struct zip_extra_field *VAR_1, struct zip_error *VAR_2)
{
    struct zip_extra_field *VAR_3, *VAR_4, *VAR_5;

    VAR_3 = VAR_4 = ((void*)0);

    while (VAR_1) {
        if ((VAR_5=FUNC_1(VAR_1->id, VAR_1->size, VAR_1->data, VAR_1->flags)) == ((void*)0)) {
            FUNC_2(VAR_2, VAR_0, 0);
            FUNC_0(VAR_3);
            return ((void*)0);
        }

        if (VAR_3 == ((void*)0))
            VAR_3 = VAR_5;
        if (VAR_4)
            VAR_4->next = VAR_5;
        VAR_4 = VAR_5;

 VAR_1 = VAR_1->next;
    }

    return VAR_3;
}
