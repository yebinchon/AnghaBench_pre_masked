
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atiixp {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct atiixp*,int ,unsigned int) ;
 scalar_t__ FUNC_1 (struct atiixp*) ;

__attribute__((used)) static void FUNC_2(struct atiixp *VAR_4, unsigned short VAR_5,
       unsigned short VAR_6, unsigned short VAR_7)
{
 unsigned int VAR_8;

 if (FUNC_1(VAR_4) < 0)
  return;
 VAR_8 = ((unsigned int)VAR_7 << VAR_2) |
  ((unsigned int)VAR_6 << VAR_1) |
  VAR_0 | VAR_5;
 FUNC_0(VAR_4, VAR_3, VAR_8);
}
