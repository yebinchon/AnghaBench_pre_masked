
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* bc_num ;
struct TYPE_7__ {char* n_value; void* n_sign; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 char VAR_0 ;
 int FUNC_2 (int,int) ;
 void* VAR_1 ;
 void* VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__**) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int,int) ;
 scalar_t__ FUNC_7 (int) ;

int
FUNC_8 (bc_num *VAR_5, char *VAR_6, int VAR_7)
{
  int VAR_8, VAR_9;
  char *VAR_10, *VAR_11;
  char VAR_12;


  FUNC_4 (VAR_5);


  VAR_10 = VAR_6;
  VAR_8 = 0;
  VAR_9 = 0;
  VAR_12 = VAR_0;
  if ( (*VAR_10 == '+') || (*VAR_10 == '-')) VAR_10++;
  while (*VAR_10 == '0') VAR_10++;
  while (FUNC_7((int)*VAR_10)) VAR_10++, VAR_8++;
  if (*VAR_10 == '.') VAR_10++;
  while (FUNC_7((int)*VAR_10)) VAR_10++, VAR_9++;
  if ((*VAR_10 != '\0') || (VAR_8+VAR_9 == 0))
    {
      *VAR_5 = FUNC_3 (FUNC_0(VAR_4));
      return *VAR_10 == '\0';
    }


  VAR_9 = FUNC_2(VAR_9, VAR_7);
  if (VAR_8 == 0)
    {
      VAR_12 = VAR_3;
      VAR_8 = 1;
    }
  *VAR_5 = FUNC_6 (VAR_8, VAR_9);


  VAR_10 = VAR_6;
  if (*VAR_10 == '-')
    {
      (*VAR_5)->n_sign = VAR_1;
      VAR_10++;
    }
  else
    {
      (*VAR_5)->n_sign = VAR_2;
      if (*VAR_10 == '+') VAR_10++;
    }
  while (*VAR_10 == '0') VAR_10++;
  VAR_11 = (*VAR_5)->n_value;
  if (VAR_12)
    {
      *VAR_11++ = 0;
      VAR_8 = 0;
    }
  for (;VAR_8 > 0; VAR_8--)
    *VAR_11++ = FUNC_1(*VAR_10++);



  if (VAR_9 > 0)
    {
      VAR_10++;
      for (;VAR_9 > 0; VAR_9--)
 *VAR_11++ = FUNC_1(*VAR_10++);
    }

  if (FUNC_5 (*VAR_5))
    (*VAR_5)->n_sign = VAR_2;

  return 1;
}
