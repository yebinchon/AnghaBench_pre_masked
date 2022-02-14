
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpm_child_s {int scoreboard_i; } ;


 struct fpm_child_s* FUNC_0 (int) ;
 int FUNC_1 (struct fpm_child_s*,int ,int) ;

__attribute__((used)) static struct fpm_child_s *FUNC_2()
{
 struct fpm_child_s *VAR_0;

 VAR_0 = FUNC_0(sizeof(struct fpm_child_s));

 if (!VAR_0) {
  return 0;
 }

 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->scoreboard_i = -1;
 return VAR_0;
}
