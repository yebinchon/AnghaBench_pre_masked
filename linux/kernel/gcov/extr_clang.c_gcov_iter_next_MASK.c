
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_iterator {scalar_t__ pos; scalar_t__ size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(struct gcov_iterator *VAR_2)
{
 if (VAR_2->pos < VAR_2->size)
  VAR_2->pos += VAR_1;

 if (VAR_2->pos >= VAR_2->size)
  return -VAR_0;

 return 0;
}
