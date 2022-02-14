
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* cmdStatus; int noticeHooks; } ;
typedef TYPE_1__ PGresult ;


 int FUNC_0 (unsigned char) ;
 int FUNC_1 (int *,char*,char*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

char *
FUNC_3(PGresult *VAR_0)
{
 char *VAR_1,
      *VAR_2;

 if (!VAR_0)
  return "";

 if (FUNC_2(VAR_0->cmdStatus, "INSERT ", 7) == 0)
 {
  VAR_1 = VAR_0->cmdStatus + 7;

  while (*VAR_1 && *VAR_1 != ' ')
   VAR_1++;
  if (*VAR_1 == 0)
   goto interpret_error;
  VAR_1++;
 }
 else if (FUNC_2(VAR_0->cmdStatus, "SELECT ", 7) == 0 ||
    FUNC_2(VAR_0->cmdStatus, "DELETE ", 7) == 0 ||
    FUNC_2(VAR_0->cmdStatus, "UPDATE ", 7) == 0)
  VAR_1 = VAR_0->cmdStatus + 7;
 else if (FUNC_2(VAR_0->cmdStatus, "FETCH ", 6) == 0)
  VAR_1 = VAR_0->cmdStatus + 6;
 else if (FUNC_2(VAR_0->cmdStatus, "MOVE ", 5) == 0 ||
    FUNC_2(VAR_0->cmdStatus, "COPY ", 5) == 0)
  VAR_1 = VAR_0->cmdStatus + 5;
 else
  return "";


 for (VAR_2 = VAR_1; *VAR_2; VAR_2++)
 {
  if (!FUNC_0((unsigned char) *VAR_2))
   goto interpret_error;
 }
 if (VAR_2 == VAR_1)
  goto interpret_error;

 return VAR_1;

interpret_error:
 FUNC_1(&VAR_0->noticeHooks,
      "could not interpret result from server: %s",
      VAR_0->cmdStatus);
 return "";
}
