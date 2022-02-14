
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zip_uint16_t ;
typedef int zip_flags_t ;
struct zip_extra_field {int flags; scalar_t__ id; struct zip_extra_field* next; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct zip_extra_field*) ;

struct zip_extra_field *
FUNC_1(struct zip_extra_field *VAR_2, zip_uint16_t VAR_3, zip_uint16_t VAR_4, zip_flags_t VAR_5)
{
    struct zip_extra_field *VAR_6, *VAR_7;
    int VAR_8;

    VAR_8 = 0;
    VAR_6 = VAR_2;
    VAR_7 = ((void*)0);
    for (; VAR_2; VAR_2=(VAR_7 ? VAR_7->next : VAR_6)) {
 if ((VAR_2->flags & VAR_5 & VAR_0) && VAR_2->id == VAR_3) {
     if (VAR_4 == VAR_1 || VAR_8 == VAR_4) {
  VAR_2->flags &= ~(VAR_5 & VAR_0);
  if ((VAR_2->flags & VAR_0) == 0) {
      if (VAR_7)
   VAR_7->next = VAR_2->next;
      else
   VAR_6 = VAR_2->next;
      VAR_2->next = ((void*)0);
      FUNC_0(VAR_2);

      if (VAR_4 == VAR_1)
   continue;
  }
     }

     VAR_8++;
     if (VAR_8 > VAR_4)
  break;
 }
 VAR_7 = VAR_2;
    }

    return VAR_6;
}
