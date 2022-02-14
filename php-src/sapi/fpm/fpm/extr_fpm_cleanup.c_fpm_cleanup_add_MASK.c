
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cleanup_s {int type; void (* cleanup ) (int,void*) ;void* arg; } ;


 int VAR_0 ;
 struct cleanup_s* FUNC_0 (int *) ;

int FUNC_1(int VAR_1, void (*VAR_2)(int, void *), void *VAR_3)
{
 struct cleanup_s *VAR_4;

 VAR_4 = FUNC_0(&VAR_0);

 if (!VAR_4) {
  return -1;
 }

 VAR_4->type = VAR_1;
 VAR_4->cleanup = VAR_2;
 VAR_4->arg = VAR_3;

 return 0;
}
