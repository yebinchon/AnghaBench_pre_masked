
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int orig_nents; } ;


 int FUNC_0 (struct sg_table*) ;

__attribute__((used)) static void FUNC_1(struct sg_table *VAR_0)
{
 if (VAR_0->orig_nents > 1)
  FUNC_0(VAR_0);
}
