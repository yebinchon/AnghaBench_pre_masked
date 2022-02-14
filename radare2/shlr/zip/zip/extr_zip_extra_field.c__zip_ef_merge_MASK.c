
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_extra_field {scalar_t__ id; scalar_t__ size; int flags; struct zip_extra_field* next; scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (struct zip_extra_field*) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;

struct zip_extra_field *
FUNC_2(struct zip_extra_field *VAR_1, struct zip_extra_field *VAR_2)
{
    struct zip_extra_field *VAR_3, *VAR_4, *VAR_5;
    int VAR_6;

    if (VAR_1 == ((void*)0))
 return VAR_2;

    for (VAR_5=VAR_1; VAR_5->next; VAR_5=VAR_5->next)
 ;

    for (; VAR_2; VAR_2=VAR_3) {
 VAR_3 = VAR_2->next;

 VAR_6 = 0;
 for (VAR_4=VAR_1; VAR_4; VAR_4=VAR_4->next) {
     if (VAR_4->id == VAR_2->id && VAR_4->size == VAR_2->size) {
  if (VAR_4->data && VAR_2->data && !FUNC_1(VAR_4->data, VAR_2->data, VAR_4->size)) {
   VAR_4->flags |= (VAR_2->flags & VAR_0);
   VAR_6 = 1;
   break;
  }
     }
 }

 VAR_2->next = ((void*)0);
 if (VAR_6)
     FUNC_0(VAR_2);
 else
     VAR_5 = VAR_5->next = VAR_2;
    }

    return VAR_1;
}
