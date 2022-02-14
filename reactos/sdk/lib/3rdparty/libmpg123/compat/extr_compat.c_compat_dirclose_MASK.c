
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct compat_dir {int dir; int ffn; struct compat_dir* path; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct compat_dir*) ;

void FUNC_3(struct compat_dir *VAR_0)
{
 if(VAR_0)
 {
  FUNC_2(VAR_0->path);



  FUNC_1(VAR_0->dir);

  FUNC_2(VAR_0);
 }
}
