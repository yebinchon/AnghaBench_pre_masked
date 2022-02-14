
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; char* character; TYPE_1__* key; int suffix; } ;
struct TYPE_4__ {scalar_t__ is_digit; } ;
typedef TYPE_2__ FormatNode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (unsigned char) ;

__attribute__((used)) static bool
FUNC_2(FormatNode *VAR_2)
{
 if (VAR_2->type == VAR_1)
  return 0;

 if (VAR_2->type == VAR_0 && FUNC_0(VAR_2->suffix))
  return 1;




 VAR_2++;


 if (VAR_2->type == VAR_1)
  return 1;

 if (VAR_2->type == VAR_0)
 {
  if (VAR_2->key->is_digit)
   return 0;

  return 1;
 }
 else if (VAR_2->character[1] == '\0' &&
    FUNC_1((unsigned char) VAR_2->character[0]))
  return 0;

 return 1;
}
