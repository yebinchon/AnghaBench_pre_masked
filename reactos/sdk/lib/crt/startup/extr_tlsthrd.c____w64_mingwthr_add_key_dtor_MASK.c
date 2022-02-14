
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void (* dtor ) (void*) ;struct TYPE_3__* next; int key; } ;
typedef TYPE_1__ __mingwthr_key_t ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int,int) ;
 TYPE_1__* VAR_2 ;

int
FUNC_3 (DWORD VAR_3, void (*VAR_4)(void *))
{
  __mingwthr_key_t *VAR_5;

  if (VAR_1 == 0)
    return 0;
  VAR_5 = (__mingwthr_key_t *) FUNC_2 (1, sizeof (__mingwthr_key_t));
  if (VAR_5 == ((void*)0))
    return -1;

  VAR_5->key = VAR_3;
  VAR_5->dtor = VAR_4;

  FUNC_0 (&VAR_0);

  VAR_5->next = VAR_2;
  VAR_2 = VAR_5;

  FUNC_1 (&VAR_0);
  return 0;
}
