
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zip_flags_t ;
struct zip_extra_field {int flags; scalar_t__ id; scalar_t__ size; int data; struct zip_extra_field* next; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int ,scalar_t__,int,int *) ;

void
FUNC_2(const struct zip_extra_field *VAR_1, zip_flags_t VAR_2, FILE *VAR_3)
{
    for (; VAR_1; VAR_1=VAR_1->next) {
 if (VAR_1->flags & VAR_2 & VAR_0) {
     FUNC_0(VAR_1->id, VAR_3);
     FUNC_0(VAR_1->size, VAR_3);
     if (VAR_1->size > 0)
  FUNC_1(VAR_1->data, VAR_1->size, 1, VAR_3);
 }
    }
}
