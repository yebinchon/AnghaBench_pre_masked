
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tilegx_spr {int number; } ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const struct tilegx_spr *VAR_2 = (const struct tilegx_spr *) VAR_0;
  const struct tilegx_spr *VAR_3 = (const struct tilegx_spr *) VAR_1;
  return (VAR_2->number - VAR_3->number);
}
