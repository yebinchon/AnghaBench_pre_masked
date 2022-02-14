
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dso {int long_name_len; int short_name_len; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;

int FUNC_1(const struct dso *VAR_1)
{
 if (!VAR_1)
  return FUNC_0("[unknown]");
 if (VAR_0 > 0)
  return VAR_1->long_name_len;

 return VAR_1->short_name_len;
}
