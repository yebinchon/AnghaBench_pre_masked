
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_parman {int run_budget; int parman; } ;
struct parman_ops {int dummy; } ;


 int VAR_0 ;
 struct test_parman* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct test_parman*) ;
 struct test_parman* FUNC_2 (int,int ) ;
 int FUNC_3 (struct parman_ops const*,struct test_parman*) ;
 int FUNC_4 (struct test_parman*) ;
 int FUNC_5 (struct test_parman*) ;
 int FUNC_6 (struct test_parman*,int ) ;
 int FUNC_7 (struct test_parman*) ;

__attribute__((used)) static struct test_parman *FUNC_8(const struct parman_ops *VAR_4)
{
 struct test_parman *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);
 VAR_6 = FUNC_6(VAR_5, VAR_2);
 if (VAR_6)
  goto err_resize;
 VAR_5->parman = FUNC_3(VAR_4, VAR_5);
 if (!VAR_5->parman) {
  VAR_6 = -VAR_0;
  goto err_parman_create;
 }
 FUNC_7(VAR_5);
 FUNC_5(VAR_5);
 FUNC_4(VAR_5);
 VAR_5->run_budget = VAR_3;
 return VAR_5;

err_parman_create:
 FUNC_6(VAR_5, 0);
err_resize:
 FUNC_1(VAR_5);
 return FUNC_0(VAR_6);
}
