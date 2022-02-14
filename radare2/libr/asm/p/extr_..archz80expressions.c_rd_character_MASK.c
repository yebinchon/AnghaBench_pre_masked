
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int line; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,...) ;
 int FUNC_1 (int,char*) ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_2 (const char **VAR_5, int *VAR_6, int VAR_7)
{
  int VAR_8;
  if (VAR_4 >= 6)
    FUNC_0 (VAR_3,
      "%5d (0x%04x): Starting to read character (string=%s).\n",
      VAR_2[VAR_1].line, VAR_0, *VAR_5);
  VAR_8 = **VAR_5;
  if (!VAR_8)
    {
      if (VAR_6)
 *VAR_6 = 0;
      else if (VAR_7)
 FUNC_1 (1, "unexpected end of line in string constant\n");
      return 0;
    }
  if (VAR_8 == '\\')
    {
      (*VAR_5)++;
      if (**VAR_5 >= '0' && **VAR_5 <= '7')
 {
   int VAR_9, VAR_10;
   VAR_8 = 0;
   if ((*VAR_5)[1] >= '0' && (*VAR_5)[1] <= '7')
     {
       if (**VAR_5 <= '3' && (*VAR_5)[2] >= '0' && (*VAR_5)[2] <= '7')
  VAR_10 = 3;
       else
  VAR_10 = 2;
     }
   else
     VAR_10 = 1;
   for (VAR_9 = 0; VAR_9 < VAR_10; ++VAR_9)
     {
       int VAR_11 = (*VAR_5)[VAR_10 - 1 - VAR_9] - '0';
       VAR_8 += (1 << (VAR_9 * 3)) * VAR_11;
     }
   *VAR_5 += VAR_10;
 }
      else
 {
   switch (**VAR_5)
     {
     case 'n':
       VAR_8 = 10;
       break;
     case 'r':
       VAR_8 = 13;
       break;
     case 't':
       VAR_8 = 9;
       break;
     case 'a':
       VAR_8 = 7;
       break;
     case '\'':
       if (VAR_6)
  *VAR_6 = 0;
       else if (VAR_7)
  FUNC_1 (1, "empty literal character\n");
       return 0;
     case 0:
       if (VAR_6)
  *VAR_6 = 0;
       else if (VAR_7)
  FUNC_1 (1, "unexpected end of line after "
     "backslash in string constant\n");
       return 0;
     default:
       VAR_8 = **VAR_5;
     }
   (*VAR_5)++;
 }
    }
  else
    (*VAR_5)++;
  if (VAR_4 >= 7)
    FUNC_0 (VAR_3, "%5d (0x%04x): rd_character returned %d (%c).\n",
      VAR_2[VAR_1].line, VAR_0, VAR_8, VAR_8);
  return VAR_8;
}
