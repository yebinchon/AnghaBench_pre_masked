
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int line; } ;


 int VAR_0 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (int ,char*,int,int,int,...) ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 char* FUNC_2 (char*,int ) ;
 int FUNC_3 (unsigned char const) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_4 (const char **VAR_5, const char **VAR_6, int VAR_7)
{
  int VAR_8 = 0, VAR_9;
  char *VAR_10, VAR_11[] = "0123456789abcdefghijklmnopqrstuvwxyz";
  if (VAR_4 >= 6)
    FUNC_1 (VAR_3, "%5d (0x%04x): Starting to read number of base %d"
      "(string=%s).\n", VAR_2[VAR_1].line, VAR_0, VAR_7, *VAR_5);
  VAR_11[VAR_7] = '\0';
  *VAR_5 = FUNC_0 (*VAR_5);
  while (**VAR_5 && (VAR_10 = FUNC_2 (VAR_11, FUNC_3 ((const unsigned char)**VAR_5))))
    {
      VAR_9 = VAR_10 - VAR_11;
      if (VAR_4 >= 7)
 FUNC_1 (VAR_3, "%5d (0x%04x): Digit found:%1x.\n", VAR_2[VAR_1].line,
   VAR_0, VAR_9);
      VAR_8 = VAR_8 * VAR_7 + VAR_9;
      (*VAR_5)++;
    }
  if (VAR_6)
    *VAR_6 = *VAR_5;
  *VAR_5 = FUNC_0 (*VAR_5);
  if (VAR_4 >= 7)
    FUNC_1 (VAR_3, "%5d (0x%04x): rd_number returned %d (%04x).\n",
      VAR_2[VAR_1].line, VAR_0, VAR_8, VAR_8);
  return VAR_8;
}
