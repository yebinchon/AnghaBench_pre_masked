
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* grub_dl_t ;
struct TYPE_5__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (char const*) ;
 TYPE_1__* FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,char const*) ;
 char* FUNC_6 (char*,char*,char const*) ;

grub_dl_t
FUNC_7 (const char *VAR_2)
{




  char *VAR_3;
  grub_dl_t VAR_4;
  char *VAR_5 = FUNC_2 ("prefix");

  VAR_4 = FUNC_0 (VAR_2);
  if (VAR_4)
    return VAR_4;

  if (! VAR_5) {
    FUNC_3 (VAR_1, "\"prefix\" is not set");
    return 0;
  }

  VAR_3 = FUNC_6 ("%s/%s.mod", VAR_5, VAR_2);
  if (! VAR_3)
    return 0;

  VAR_4 = FUNC_1 (VAR_3);
  FUNC_4 (VAR_3);

  if (! VAR_4)
    return 0;

  if (FUNC_5 (VAR_4->name, VAR_2) != 0)
    FUNC_3 (VAR_0, "mismatched names");

  return VAR_4;

}
