
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmap {struct bitmap* data; } ;


 int FUNC_0 (struct bitmap*) ;

void
FUNC_1(void * VAR_0)
{
  struct bitmap * VAR_1;

  VAR_1 = (struct bitmap *) VAR_0;
  if (VAR_1 != 0)
  {
    FUNC_0(VAR_1->data);
  }
  FUNC_0(VAR_1);
}
