
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ bfd_boolean ;
struct TYPE_2__ {char* name; unsigned int number; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,char*,...) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static char *
FUNC_2 (unsigned int VAR_2,
  char *VAR_3,
  bfd_boolean VAR_4)
{
  char *VAR_5 = VAR_3;
  int VAR_6;

  if (VAR_4) {
   *VAR_5++ = VAR_0;
  }

  for (VAR_6 = 0; VAR_1[VAR_6].name != ((void*)0); VAR_6++) {
   if (VAR_1[VAR_6].number == VAR_2) {
    FUNC_0 (VAR_5, "%s", VAR_1[VAR_6].name);
    return VAR_3 + FUNC_1 (VAR_3);
   }
  }



  FUNC_0 (VAR_5, "format_sup_reg-BUG");
  return VAR_3 + FUNC_1 (VAR_3);
}
