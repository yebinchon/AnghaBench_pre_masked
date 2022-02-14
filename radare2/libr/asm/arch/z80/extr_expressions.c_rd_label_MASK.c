
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct label {int value; } ;
struct TYPE_2__ {int line; int labels; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const**,struct label**,struct label**,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int,char*,int,char const*) ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_3 (const char **VAR_5, int *VAR_6, struct label **VAR_7, int VAR_8,
   int VAR_9)
{
  struct label *VAR_10 = ((void*)0);
  int VAR_11;
  if (VAR_6)
    *VAR_6 = 0;
  if (VAR_7)
    *VAR_7 = ((void*)0);
  if (VAR_4 >= 6)
    FUNC_1 (VAR_3, "%5d (0x%04x): Starting to read label (string=%s).\n",
      VAR_2[VAR_1].line, VAR_0, *VAR_5);
  for (VAR_11 = VAR_8; VAR_11 >= 0; --VAR_11)
    {
      if (FUNC_0 (VAR_2[VAR_11].labels, VAR_5, &VAR_10,
         (**VAR_5 == '.' && VAR_11 == VAR_1) ? VAR_7 : ((void*)0), 0))
 break;
    }
  if (VAR_11 < 0)
    {

      const char *VAR_12 = *VAR_5;


   if (!VAR_6 && VAR_9)
     FUNC_2 (1, "using undefined label %.*s\n", *VAR_5 - VAR_12, VAR_12);

   if (VAR_4 >= 7)
     FUNC_1 (VAR_3, "rd_label returns invalid value\n");
   return VAR_10 != ((void*)0);
    }
  if (VAR_6)
    *VAR_6 = 1;
  if (VAR_4 >= 7)
    FUNC_1 (VAR_3, "rd_label returns valid value 0x%x\n", VAR_10->value);
  return VAR_10->value;
}
