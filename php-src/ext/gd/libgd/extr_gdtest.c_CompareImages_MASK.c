
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_6__ {int colorsTotal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (char*,char*,...) ;

void
FUNC_2 (char *VAR_5, gdImagePtr VAR_6, gdImagePtr VAR_7)
{
  int VAR_8;

  VAR_8 = FUNC_0 (VAR_6, VAR_7);

  if (VAR_8 & VAR_1)
    {
      FUNC_1 ("%%%s: ERROR images differ: BAD\n", VAR_5);
    }
  else if (VAR_8 != 0)
    {
      FUNC_1 ("%%%s: WARNING images differ: WARNING - Probably OK\n", VAR_5);
    }
  else
    {
      FUNC_1 ("%%%s: OK\n", VAR_5);
      return;
    }

  if (VAR_8 & (VAR_3 + VAR_4))
    {
      FUNC_1 ("-%s: INFO image sizes differ\n", VAR_5);
    }

  if (VAR_8 & VAR_2)
    {
      FUNC_1 ("-%s: INFO number of pallette entries differ %d Vs. %d\n", VAR_5,
       VAR_6->colorsTotal, VAR_7->colorsTotal);
    }

  if (VAR_8 & VAR_0)
    {
      FUNC_1 ("-%s: INFO actual colours of pixels differ\n", VAR_5);
    }
}
