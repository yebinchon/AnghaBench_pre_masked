
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * ft_face; TYPE_1__* buffer; } ;
typedef TYPE_2__ fz_font ;
struct TYPE_5__ {int len; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

int
FUNC_3(fz_font *VAR_0)
{
 if (VAR_0->ft_face == ((void*)0) || VAR_0->buffer == ((void*)0) || VAR_0->buffer->len < 4)
  return 0;
 if (FUNC_2(VAR_0))
  return 0;
 if (FUNC_1(VAR_0->ft_face))
  return 1;
 if (FUNC_0(VAR_0->ft_face))
  return 1;
 return 0;
}
