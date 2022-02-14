
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sonicvibes {int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sonicvibes*,int ,unsigned int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct sonicvibes * VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5;
 unsigned long VAR_6;

 VAR_5 = (VAR_4 * 65536 + VAR_0 / 2) / VAR_0;
 if (VAR_5 > 65535)
  VAR_5 = 65535;
 FUNC_1(&VAR_3->reg_lock, VAR_6);
 FUNC_0(VAR_3, VAR_1, VAR_5 >> 8);
 FUNC_0(VAR_3, VAR_2, VAR_5);
 FUNC_2(&VAR_3->reg_lock, VAR_6);
}
