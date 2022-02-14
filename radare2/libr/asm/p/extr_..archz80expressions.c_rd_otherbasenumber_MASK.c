
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int line; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,char const*) ;
 int FUNC_1 (unsigned char const) ;
 scalar_t__ FUNC_2 (unsigned char const) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (char const**,int *,char) ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 char FUNC_5 (unsigned char) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_6 (const char **VAR_5, int *VAR_6, int VAR_7)
{
  char VAR_8;
  if (VAR_4 >= 6)
    FUNC_0 (VAR_3,
      "%5d (0x%04x): Starting to read basenumber (string=%s).\n",
      VAR_2[VAR_1].line, VAR_0, *VAR_5);
  (*VAR_5)++;
  if (!**VAR_5)
    {
      if (VAR_6)
 *VAR_6 = 0;
      else if (VAR_7)
 FUNC_3 (1, "unexpected end of line after `@'\n");
      return 0;
    }
  if (**VAR_5 == '0' || !FUNC_1 ((const unsigned char)**VAR_5))
    {
      if (VAR_6)
 *VAR_6 = 0;
      else if (VAR_7)
 FUNC_3 (1, "base must be between 1 and z\n");
      return 0;
    }
  VAR_8 = **VAR_5;
  (*VAR_5)++;
  if (FUNC_2 ((const unsigned char)**VAR_5))
    return FUNC_4 (VAR_5, ((void*)0), FUNC_5 ((unsigned char)VAR_8) - 'a' + 1);
  return FUNC_4 (VAR_5, ((void*)0), VAR_8 - '0' + 1);
}
