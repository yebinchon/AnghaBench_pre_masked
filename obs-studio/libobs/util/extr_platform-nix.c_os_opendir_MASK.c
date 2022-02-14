
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct os_dir {char const* path; int * dir; } ;
typedef struct os_dir os_dir_t ;
typedef int DIR ;


 struct os_dir* FUNC_0 (int) ;
 int * FUNC_1 (char const*) ;

os_dir_t *FUNC_2(const char *VAR_0)
{
 struct os_dir *VAR_1;
 DIR *VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_1 = FUNC_0(sizeof(struct os_dir));
 VAR_1->dir = VAR_2;
 VAR_1->path = VAR_0;
 return VAR_1;
}
