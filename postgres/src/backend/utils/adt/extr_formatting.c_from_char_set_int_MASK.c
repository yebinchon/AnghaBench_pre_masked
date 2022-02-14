
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* key; } ;
struct TYPE_4__ {int name; } ;
typedef TYPE_2__ FormatNode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static void
FUNC_5(int *VAR_2, const int VAR_3, const FormatNode *VAR_4,
      bool *VAR_5)
{
 if (*VAR_2 != 0 && *VAR_2 != VAR_3)
  FUNC_0(FUNC_1(VAR_1,
        (FUNC_2(VAR_0),
         FUNC_4("conflicting values for \"%s\" field in "
          "formatting string",
          VAR_4->key->name),
         FUNC_3("This value contradicts a previous setting "
          "for the same field type."))));
 *VAR_2 = VAR_3;

on_error:
 return;
}
