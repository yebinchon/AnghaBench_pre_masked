
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_data {int flags; } ;
struct pkg_data {int dummy; } ;
struct core_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct core_data*,struct core_data*) ;
 int FUNC_1 (struct pkg_data*,struct pkg_data*) ;
 int FUNC_2 (struct thread_data*,struct thread_data*,struct core_data*) ;

int FUNC_3(struct thread_data *VAR_2, struct core_data *VAR_3,
 struct pkg_data *VAR_4, struct thread_data *VAR_5,
 struct core_data *VAR_6, struct pkg_data *VAR_7)
{
 int VAR_8 = 0;


 if (VAR_2->flags & VAR_1)
  FUNC_0(VAR_3, VAR_6);


 VAR_8 = FUNC_2(VAR_2, VAR_5, VAR_6);
 if (VAR_8)
  return VAR_8;


 if (VAR_2->flags & VAR_0)
  VAR_8 = FUNC_1(VAR_4, VAR_7);

 return VAR_8;
}
