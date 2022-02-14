
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len2; char* last_match; char* str1; char* refpoint; int refpos; scalar_t__ is_multibyte_char_in_char; } ;
typedef TYPE_1__ TextPositionState ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,TYPE_1__*) ;

__attribute__((used)) static bool
FUNC_3(TextPositionState *VAR_0)
{
 int VAR_1 = VAR_0->len2;
 char *VAR_2;
 char *VAR_3;

 if (VAR_1 <= 0)
  return 0;


 if (VAR_0->last_match)
  VAR_2 = VAR_0->last_match + VAR_1;
 else
  VAR_2 = VAR_0->str1;

retry:
 VAR_3 = FUNC_2(VAR_2, VAR_0);

 if (!VAR_3)
  return 0;







 if (VAR_0->is_multibyte_char_in_char)
 {



  FUNC_0(VAR_0->refpoint <= VAR_3);

  while (VAR_0->refpoint < VAR_3)
  {

   VAR_0->refpoint += FUNC_1(VAR_0->refpoint);
   VAR_0->refpos++;







   if (VAR_0->refpoint > VAR_3)
   {
    VAR_2 = VAR_0->refpoint;
    goto retry;
   }
  }
 }

 VAR_0->last_match = VAR_3;
 return 1;
}
