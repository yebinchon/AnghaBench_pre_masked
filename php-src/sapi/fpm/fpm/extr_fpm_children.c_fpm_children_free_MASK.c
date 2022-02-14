
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpm_child_s {struct fpm_child_s* next; } ;


 int FUNC_0 (struct fpm_child_s*,int ) ;

int FUNC_1(struct fpm_child_s *VAR_0)
{
 struct fpm_child_s *VAR_1;

 for (; VAR_0; VAR_0 = VAR_1) {
  VAR_1 = VAR_0->next;
  FUNC_0(VAR_0, 0 );
 }

 return 0;
}
