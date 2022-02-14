
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (unsigned int*,int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_8(struct work_struct *VAR_7)
{
 unsigned int VAR_8, VAR_9;

 if (!FUNC_3(&VAR_8, 1))
  goto out;

 FUNC_1(&VAR_4);

 if (!FUNC_4(VAR_8) ||
  VAR_6 != VAR_3) {
  FUNC_2(&VAR_4);
  goto out;
 }

 if (VAR_5 == VAR_2) {
  FUNC_2(&VAR_4);
  return;
 }
 if (VAR_5 >= VAR_1)
  FUNC_0();
 else
  FUNC_5(VAR_5);

 FUNC_2(&VAR_4);

 if (!FUNC_3(&VAR_9, 0))
  goto out;





 if (VAR_9 == VAR_8)
  FUNC_7(VAR_0 / 2);

 out:
 FUNC_6();
}
