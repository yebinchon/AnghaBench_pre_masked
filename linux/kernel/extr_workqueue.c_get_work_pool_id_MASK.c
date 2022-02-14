
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct work_struct {int data; } ;
struct pool_workqueue {TYPE_1__* pool; } ;
struct TYPE_2__ {int id; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct work_struct *VAR_3)
{
 unsigned long VAR_4 = FUNC_0(&VAR_3->data);

 if (VAR_4 & VAR_1)
  return ((struct pool_workqueue *)
   (VAR_4 & VAR_2))->pool->id;

 return VAR_4 >> VAR_0;
}
