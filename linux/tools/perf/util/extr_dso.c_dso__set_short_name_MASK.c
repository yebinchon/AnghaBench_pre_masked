
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dso {int short_name_allocated; char const* short_name; int short_name_len; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;

void FUNC_2(struct dso *VAR_0, const char *VAR_1, bool VAR_2)
{
 if (VAR_1 == ((void*)0))
  return;

 if (VAR_0->short_name_allocated)
  FUNC_0((char *)VAR_0->short_name);

 VAR_0->short_name = VAR_1;
 VAR_0->short_name_len = FUNC_1(VAR_1);
 VAR_0->short_name_allocated = VAR_2;
}
