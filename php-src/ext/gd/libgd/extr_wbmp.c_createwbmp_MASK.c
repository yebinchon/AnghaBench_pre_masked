
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* bitmap; int width; int height; } ;
typedef TYPE_1__ Wbmp ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int,int,int ) ;

Wbmp *
FUNC_4 (int VAR_0, int VAR_1, int VAR_2)
{
  int VAR_3;

  Wbmp *VAR_4;
  if ((VAR_4 = (Wbmp *) FUNC_1 (sizeof (Wbmp))) == ((void*)0))
    return (((void*)0));

  if (FUNC_2(sizeof (int), VAR_0)) {
    FUNC_0(VAR_4);
    return ((void*)0);
  }
  if (FUNC_2(sizeof (int) * VAR_0, VAR_1)) {
    FUNC_0(VAR_4);
    return ((void*)0);
  }

  if ((VAR_4->bitmap = (int *) FUNC_3(sizeof(int), VAR_0 * VAR_1, 0)) == ((void*)0))
    {
      FUNC_0 (VAR_4);
      return (((void*)0));
    }

  VAR_4->width = VAR_0;
  VAR_4->height = VAR_1;

  for (VAR_3 = 0; VAR_3 < VAR_0 * VAR_1; VAR_4->bitmap[VAR_3++] = VAR_2);

  return (VAR_4);
}
