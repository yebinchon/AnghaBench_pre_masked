
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftrace_ops {int flags; int func; int saved_func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,struct ftrace_ops*) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (struct ftrace_ops*) ;
 int FUNC_4 (struct ftrace_ops*) ;
 int FUNC_5 () ;

int FUNC_6(struct ftrace_ops *VAR_10)
{
 if (VAR_10->flags & VAR_2)
  return -VAR_1;

 if (FUNC_0(VAR_10->flags & VAR_4))
  return -VAR_0;







 if (VAR_10->flags & VAR_5 &&
     !(VAR_10->flags & VAR_6))
  return -VAR_1;

 if (VAR_10->flags & VAR_6)
  VAR_10->flags |= VAR_5;


 if (!FUNC_2((unsigned long)VAR_10))
  VAR_10->flags |= VAR_3;

 FUNC_1(&VAR_8, VAR_10);


 VAR_10->saved_func = VAR_10->func;

 if (FUNC_3(VAR_10))
  VAR_10->func = VAR_9;

 FUNC_4(VAR_10);

 if (VAR_7)
  FUNC_5();

 return 0;
}
