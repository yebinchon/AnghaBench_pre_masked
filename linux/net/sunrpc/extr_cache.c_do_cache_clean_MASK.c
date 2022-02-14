
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(struct work_struct *VAR_4)
{
 int VAR_5 = 5;
 if (FUNC_0() == -1)
  VAR_5 = FUNC_3(30*VAR_0);

 if (FUNC_1(&VAR_2))
  VAR_5 = 0;

 if (VAR_5)
  FUNC_2(VAR_3,
       &VAR_1, VAR_5);
}
