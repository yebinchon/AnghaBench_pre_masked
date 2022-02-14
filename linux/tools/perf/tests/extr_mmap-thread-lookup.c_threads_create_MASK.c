
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_data {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct thread_data*) ;
 struct thread_data* VAR_2 ;

__attribute__((used)) static int FUNC_2(void)
{
 struct thread_data *VAR_3 = &VAR_2[0];
 int VAR_4, VAR_5 = 0;

 VAR_1 = 0;


 if (FUNC_1(VAR_3))
  return -1;

 for (VAR_4 = 1; !VAR_5 && VAR_4 < VAR_0; VAR_4++)
  VAR_5 = FUNC_0(VAR_4);

 return VAR_5;
}
