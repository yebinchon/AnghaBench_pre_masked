
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ebt_table_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(const struct ebt_table_info *VAR_2, unsigned int VAR_3)
{
 if (VAR_3 & ~(1 << VAR_1))
  return -VAR_0;
 return 0;
}
