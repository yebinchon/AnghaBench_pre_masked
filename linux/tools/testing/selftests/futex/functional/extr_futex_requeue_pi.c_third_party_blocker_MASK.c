
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_arg {scalar_t__ ret; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int *,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int ,int *,int ) ;
 int FUNC_4 (void*) ;
 int VAR_3 ;

void *FUNC_5(void *VAR_4)
{
 struct thread_arg *VAR_5 = (struct thread_arg *)VAR_4;
 int VAR_6 = 0;

 VAR_5->ret = FUNC_1(&VAR_2, ((void*)0), 0, VAR_0);
 if (VAR_5->ret)
  goto out;
 VAR_5->ret = FUNC_3(&VAR_3, VAR_3, ((void*)0),
          VAR_0);
 VAR_6 = FUNC_2(&VAR_2, VAR_0);

 out:
 if (VAR_5->ret || VAR_6) {
  FUNC_0("third_party_blocker() futex error", 0);
  VAR_5->ret = VAR_1;
 }

 FUNC_4((void *)&VAR_5->ret);
}
