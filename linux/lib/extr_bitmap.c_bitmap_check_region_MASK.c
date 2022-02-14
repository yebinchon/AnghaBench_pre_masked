
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct region {scalar_t__ start; scalar_t__ end; scalar_t__ group_len; scalar_t__ off; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct region *VAR_1)
{
 if (VAR_1->start > VAR_1->end || VAR_1->group_len == 0 || VAR_1->off > VAR_1->group_len)
  return -VAR_0;

 return 0;
}
