
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int line; } ;


 int VAR_0 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (int ,char*,int,int,...) ;
 int FUNC_2 (int,char*,char const*) ;
 int FUNC_3 (char const**,int*,int,int*,int) ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_4 (const char **VAR_5, char VAR_6, int *VAR_7, int VAR_8, int *VAR_9,
     int VAR_10)
{

  int VAR_11 = 0;
  if (VAR_4 >= 6)
    FUNC_1 (VAR_3,
      "%5d (0x%04x): Starting to read expression "
      "(string=%s, delimiter=%c).\n", VAR_2[VAR_1].line, VAR_0, *VAR_5,
      VAR_6 ? VAR_6 : ' ');
  *VAR_5 = FUNC_0 (*VAR_5);
  if (!**VAR_5 || **VAR_5 == VAR_6)
    {
      if (VAR_7)
 *VAR_7 = 0;
      else if (VAR_10)
 FUNC_2 (1, "expression expected (not %s)\n", *VAR_5);
      return 0;
    }
  VAR_11 = FUNC_3 (VAR_5, VAR_7, VAR_8, VAR_9, VAR_10);
  *VAR_5 = FUNC_0 (*VAR_5);
  if (**VAR_5 == '?')
    {
      *VAR_9 = 0;
      (*VAR_5)++;
      if (VAR_11)
 {
   VAR_11 = FUNC_4 (VAR_5, ':', VAR_7, VAR_8, VAR_9, VAR_10);
   if (**VAR_5)
     (*VAR_5)++;
   FUNC_4 (VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
 }
      else
 {
   FUNC_4 (VAR_5, ':', VAR_7, VAR_8, VAR_9, VAR_10);
   if (**VAR_5)
     (*VAR_5)++;
   VAR_11 = FUNC_4 (VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
          VAR_10);
 }
    }
  *VAR_5 = FUNC_0 (*VAR_5);
  if (**VAR_5 && **VAR_5 != VAR_6)
    {
      if (VAR_7)
 *VAR_7 = 0;
      else if (VAR_10)
 FUNC_2 (1, "junk at end of expression: %s\n", *VAR_5);
    }
  if (VAR_4 >= 7)
    {
      FUNC_1 (VAR_3, "%5d (0x%04x): rd_expr returned %d (%04x).\n",
        VAR_2[VAR_1].line, VAR_0, VAR_11, VAR_11);
      if (VAR_7 && !*VAR_7)
 FUNC_1 (VAR_3, "%5d (0x%04x): Returning invalid result.\n",
   VAR_2[VAR_1].line, VAR_0);
    }
  return VAR_11;
}
