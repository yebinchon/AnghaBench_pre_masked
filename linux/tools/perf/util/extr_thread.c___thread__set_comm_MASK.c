
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct thread {int comm_lock; } ;


 int FUNC_0 (struct thread*,char const*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct thread *VAR_0, const char *VAR_1, u64 VAR_2,
         bool VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_0->comm_lock);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_0->comm_lock);
 return VAR_4;
}
