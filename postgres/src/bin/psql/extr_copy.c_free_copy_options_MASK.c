
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct copy_options {struct copy_options* file; struct copy_options* after_tofrom; struct copy_options* before_tofrom; } ;


 int FUNC_0 (struct copy_options*) ;

__attribute__((used)) static void
FUNC_1(struct copy_options *VAR_0)
{
 if (!VAR_0)
  return;
 FUNC_0(VAR_0->before_tofrom);
 FUNC_0(VAR_0->after_tofrom);
 FUNC_0(VAR_0->file);
 FUNC_0(VAR_0);
}
