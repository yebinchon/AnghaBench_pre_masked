
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* mp_int ;
struct TYPE_4__ {int * digits; int single; } ;


 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

void
FUNC_2(mp_int VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 if (FUNC_0(VAR_0) != ((void*)0))
 {
  if (FUNC_0(VAR_0) != &(VAR_0->single))
   FUNC_1(FUNC_0(VAR_0));

  VAR_0->digits = ((void*)0);
 }
}
