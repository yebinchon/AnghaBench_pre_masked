
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uffd_msg {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct uffd_msg*) ;
 scalar_t__ FUNC_2 (int ,struct uffd_msg*) ;
 int VAR_1 ;

__attribute__((used)) static void *FUNC_3(void *VAR_2)
{
 unsigned long *VAR_3;
 struct uffd_msg VAR_4;

 VAR_3 = (unsigned long *) VAR_2;
 *VAR_3 = 0;

 FUNC_0(&VAR_1);


 for (;;) {
  if (FUNC_2(VAR_0, &VAR_4))
   continue;
  (*VAR_3) += FUNC_1(&VAR_4);
 }
 return (void *)((void*)0);
}
