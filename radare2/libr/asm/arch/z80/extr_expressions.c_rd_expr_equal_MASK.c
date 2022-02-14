
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int line; } ;


 int VAR_0 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (int ,char*,int,int,...) ;
 int FUNC_2 (char const**,int*,int,int*,int) ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_3 (const char **VAR_5, int *VAR_6, int VAR_7, int *VAR_8,
        int VAR_9)
{
  int VAR_10;
  if (VAR_4 >= 6)
    FUNC_1 (VAR_3, "%5d (0x%04x): Starting to read equality epression "
      "(string=%s).\n", VAR_2[VAR_1].line, VAR_0, *VAR_5);
  VAR_10 = FUNC_2 (VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
  *VAR_5 = FUNC_0 (*VAR_5);
  if (**VAR_5 == '=')
    {
      *VAR_8 = 0;
      ++*VAR_5;
      if (**VAR_5 == '=')
 ++ * VAR_5;
      return VAR_10 == FUNC_3 (VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
    }
  else if (**VAR_5 == '!' && (*VAR_5)[1] == '=')
    {
      *VAR_8 = 0;
      (*VAR_5) += 2;
      return VAR_10 != FUNC_3 (VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
    }
  if (VAR_4 >= 7)
    FUNC_1 (VAR_3, "%5d (0x%04x): rd_equal returned %d (%04x).\n",
      VAR_2[VAR_1].line, VAR_0, VAR_10, VAR_10);
  return VAR_10;
}
