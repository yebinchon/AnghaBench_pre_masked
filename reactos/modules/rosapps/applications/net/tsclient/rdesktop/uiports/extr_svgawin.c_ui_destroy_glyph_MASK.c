
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* data; } ;
typedef TYPE_1__ bitmap ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(void* VAR_0)
{
  bitmap* VAR_1;

  VAR_1 = (bitmap*)VAR_0;
  if (VAR_1 != ((void*)0))
  {
    if (VAR_1->data != ((void*)0))
      FUNC_0(VAR_1->data);
    FUNC_0(VAR_1);
  }
}
