
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ u_joliet_level; } ;
typedef TYPE_1__ iso9660_t ;
typedef char cdio_utf8_t ;


 char* FUNC_0 (size_t,int) ;
 scalar_t__ FUNC_1 (char*,size_t,char**,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;

__attribute__((used)) static inline bool
FUNC_6(iso9660_t *VAR_0, cdio_utf8_t **VAR_1,
              char* VAR_2, char* VAR_3, size_t VAR_4)
{
  int VAR_5;
  bool VAR_6;

  if (!VAR_0) {
    *VAR_1 = ((void*)0);
    return 0;
  }
  *VAR_1 = FUNC_0(VAR_4+1, sizeof(cdio_utf8_t));
  if (!*VAR_1) {
    FUNC_2("Memory allocation error");
    return 0;
  }

  (*VAR_1)[VAR_4] = 0;
  for (VAR_6=1, VAR_5=VAR_4-1; VAR_5>=0; VAR_5--) {
    if (VAR_6 && (VAR_2[VAR_5] == ' '))
      continue;
    VAR_6 = 0;
    (*VAR_1)[VAR_5] = VAR_2[VAR_5];
  }
  if (FUNC_4(*VAR_1) == 0) {
    FUNC_3(*VAR_1);
    *VAR_1 = ((void*)0);
    return 0;
  }
  return 1;
}
