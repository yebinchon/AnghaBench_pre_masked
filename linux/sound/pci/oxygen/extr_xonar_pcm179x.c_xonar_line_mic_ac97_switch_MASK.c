
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oxygen {int reg_lock; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct oxygen*,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct oxygen *VAR_3,
           unsigned int VAR_4, unsigned int VAR_5)
{
 if (VAR_4 == VAR_0) {
  FUNC_1(&VAR_3->reg_lock);
  FUNC_0(VAR_3, VAR_2,
          VAR_5 ? VAR_1 : 0,
          VAR_1);
  FUNC_2(&VAR_3->reg_lock);
 }
}
