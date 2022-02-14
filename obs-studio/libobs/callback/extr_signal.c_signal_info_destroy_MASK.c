
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct signal_info {int callbacks; int func; int mutex; } ;


 int FUNC_0 (struct signal_info*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct signal_info *VAR_0)
{
 if (VAR_0) {
  FUNC_3(&VAR_0->mutex);
  FUNC_2(&VAR_0->func);
  FUNC_1(VAR_0->callbacks);
  FUNC_0(VAR_0);
 }
}
