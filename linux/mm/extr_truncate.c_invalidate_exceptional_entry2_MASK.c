
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct address_space {int dummy; } ;
typedef int pgoff_t ;


 int FUNC_0 (struct address_space*,int ,void*) ;
 int FUNC_1 (struct address_space*,int ) ;
 scalar_t__ FUNC_2 (struct address_space*) ;
 scalar_t__ FUNC_3 (struct address_space*) ;

__attribute__((used)) static int FUNC_4(struct address_space *VAR_0,
      pgoff_t VAR_1, void *VAR_2)
{

 if (FUNC_3(VAR_0))
  return 1;
 if (FUNC_2(VAR_0))
  return FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_0, VAR_1, VAR_2);
 return 1;
}
