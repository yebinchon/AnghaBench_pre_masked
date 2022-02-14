
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* fieldSep; scalar_t__ standard; scalar_t__ html3; } ;
typedef TYPE_1__ PQprintOpt ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (char,int *) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(FILE *VAR_0, const PQprintOpt *VAR_1, const int VAR_2, char **VAR_3,
     unsigned char *VAR_4, int *VAR_5, char *VAR_6,
     const int VAR_7)
{
 int VAR_8;

 if (VAR_1->html3)
  FUNC_2("<tr>", VAR_0);
 else if (VAR_1->standard)
  FUNC_2(VAR_1->fieldSep, VAR_0);
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
 {
  char *VAR_9 = VAR_3[VAR_7 * VAR_2 + VAR_8];

  if (VAR_1->html3)
   FUNC_0(VAR_0, "<td align=\"%s\">%s</td>",
     VAR_4[VAR_8] ? "left" : "right", VAR_9 ? VAR_9 : "");
  else
  {
   FUNC_0(VAR_0,
     VAR_4[VAR_8] ?
     (VAR_1->standard ? " %-*s " : "%-*s") :
     (VAR_1->standard ? " %*s " : "%*s"),
     VAR_5[VAR_8],
     VAR_9 ? VAR_9 : "");
   if (VAR_1->standard || VAR_8 + 1 < VAR_2)
    FUNC_2(VAR_1->fieldSep, VAR_0);
  }
  if (VAR_9)
   FUNC_3(VAR_9);
 }
 if (VAR_1->html3)
  FUNC_2("</tr>", VAR_0);
 else if (VAR_1->standard)
  FUNC_0(VAR_0, "\n%s", VAR_6);
 FUNC_1('\n', VAR_0);
}
