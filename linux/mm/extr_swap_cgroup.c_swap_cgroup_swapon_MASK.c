
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_cgroup_ctrl {unsigned long length; int * map; int lock; } ;


 unsigned long FUNC_0 (unsigned long,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 struct swap_cgroup_ctrl* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (unsigned long) ;

int FUNC_8(int VAR_5, unsigned long VAR_6)
{
 void *VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9;
 struct swap_cgroup_ctrl *VAR_10;

 if (!VAR_2)
  return 0;

 VAR_9 = FUNC_0(VAR_6, VAR_1);
 VAR_8 = VAR_9 * sizeof(void *);

 VAR_7 = FUNC_7(VAR_8);
 if (!VAR_7)
  goto nomem;

 VAR_10 = &VAR_3[VAR_5];
 FUNC_1(&VAR_4);
 VAR_10->length = VAR_9;
 VAR_10->map = VAR_7;
 FUNC_4(&VAR_10->lock);
 if (FUNC_5(VAR_5)) {

  VAR_10->map = ((void*)0);
  VAR_10->length = 0;
  FUNC_2(&VAR_4);
  FUNC_6(VAR_7);
  goto nomem;
 }
 FUNC_2(&VAR_4);

 return 0;
nomem:
 FUNC_3("couldn't allocate enough memory for swap_cgroup\n");
 FUNC_3("swap_cgroup can be disabled by swapaccount=0 boot option\n");
 return -VAR_0;
}
