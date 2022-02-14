
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct svc_pool_map {unsigned int* pool_to; scalar_t__ count; int mode; } ;




 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct task_struct*,int ) ;
 struct svc_pool_map VAR_0 ;

__attribute__((used)) static inline void
FUNC_4(struct task_struct *VAR_1, unsigned int VAR_2)
{
 struct svc_pool_map *VAR_3 = &VAR_0;
 unsigned int VAR_4 = VAR_3->pool_to[VAR_2];





 FUNC_0(VAR_3->count == 0);
 if (VAR_3->count == 0)
  return;

 switch (VAR_3->mode) {
 case 129:
 {
  FUNC_3(VAR_1, FUNC_1(VAR_4));
  break;
 }
 case 128:
 {
  FUNC_3(VAR_1, FUNC_2(VAR_4));
  break;
 }
 }
}
