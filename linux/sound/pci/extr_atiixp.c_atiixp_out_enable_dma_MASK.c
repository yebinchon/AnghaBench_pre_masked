
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atiixp {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct atiixp*) ;
 unsigned int FUNC_1 (struct atiixp*,int ) ;
 int FUNC_2 (struct atiixp*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct atiixp *VAR_2, int VAR_3)
{
 unsigned int VAR_4;
 VAR_4 = FUNC_1(VAR_2, VAR_1);
 if (VAR_3) {
  if (VAR_4 & VAR_0)
   return;
  FUNC_0(VAR_2);
  VAR_4 |= VAR_0;
 } else
  VAR_4 &= ~VAR_0;
 FUNC_2(VAR_2, VAR_1, VAR_4);
}
