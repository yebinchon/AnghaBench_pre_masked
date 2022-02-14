
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; int width; int height; int* bitmap; } ;
typedef TYPE_1__ Wbmp ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (int (*) (void*),void*) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (size_t,int,int ) ;
 scalar_t__ FUNC_6 (int (*) (void*),void*) ;

int
FUNC_7 (int (*VAR_2) (void *VAR_3), void *VAR_4, Wbmp ** VAR_5)
{
  int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
  Wbmp *VAR_11;

  if ((VAR_11 = (Wbmp *) FUNC_1 (sizeof (Wbmp))) == ((void*)0))
    return (-1);

  VAR_11->type = VAR_2 (VAR_4);
  if (VAR_11->type != 0)
    {
      FUNC_0 (VAR_11);
      return (-1);
    }

  if (FUNC_6 (VAR_2, VAR_4))
    {
      FUNC_0 (VAR_11);
      return (-1);
    }


  VAR_11->width = FUNC_2 (VAR_2, VAR_4);
  if (VAR_11->width == -1)
    {
      FUNC_0 (VAR_11);
      return (-1);
    }

  VAR_11->height = FUNC_2 (VAR_2, VAR_4);
  if (VAR_11->height == -1)
    {
      FUNC_0 (VAR_11);
      return (-1);
    }





  if (FUNC_3(sizeof (int), VAR_11->width) ||
    FUNC_3(sizeof (int) * VAR_11->width, VAR_11->height))
    {
      FUNC_0(VAR_11);
      return (-1);
    }

  if ((VAR_11->bitmap = (int *) FUNC_5((size_t)VAR_11->width * VAR_11->height, sizeof(int), 0)) == ((void*)0))
    {
      FUNC_0 (VAR_11);
      return (-1);
    }





  VAR_10 = 0;
  for (VAR_6 = 0; VAR_6 < VAR_11->height; VAR_6++)
    {
      for (VAR_7 = 0; VAR_7 < VAR_11->width;)
 {
   VAR_8 = VAR_2 (VAR_4);

   for (VAR_9 = 7; VAR_9 >= 0; VAR_9--)
     {
       if (VAR_7++ < VAR_11->width)
  {
    if (VAR_8 & 1 << VAR_9)
      {
        VAR_11->bitmap[VAR_10] = VAR_1;
      }
    else
      {
        VAR_11->bitmap[VAR_10] = VAR_0;
      }
    VAR_10++;
  }
     }
 }
    }

  *VAR_5 = VAR_11;

  return (0);
}
