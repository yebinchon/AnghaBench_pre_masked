
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int namespaces_lock; } ;
struct namespaces {int dummy; } ;


 struct namespaces* FUNC_0 (struct thread*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct namespaces *FUNC_3(struct thread *VAR_0)
{
 struct namespaces *VAR_1;

 FUNC_1(&VAR_0->namespaces_lock);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_0->namespaces_lock);

 return VAR_1;
}
