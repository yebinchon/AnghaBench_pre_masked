
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addr_filter {int list; } ;


 int FUNC_0 (int *) ;
 struct addr_filter* FUNC_1 (int) ;

__attribute__((used)) static struct addr_filter *FUNC_2(void)
{
 struct addr_filter *VAR_0 = FUNC_1(sizeof(*VAR_0));

 if (VAR_0)
  FUNC_0(&VAR_0->list);

 return VAR_0;
}
