
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct vx_core*,unsigned int) ;
 int FUNC_2 (struct vx_core*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct vx_core *VAR_3, unsigned int VAR_4, unsigned int VAR_5, unsigned char VAR_6)
{
 unsigned int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  unsigned int VAR_8;


  VAR_8 = VAR_0 & ~VAR_1;
  FUNC_2(VAR_3, VAR_4, VAR_8);
  FUNC_1(VAR_3, VAR_4);
  FUNC_0(1);

  if (VAR_6 & (1 << VAR_7))
   VAR_8 |= VAR_2;
  else
   VAR_8 &= ~VAR_2;
  FUNC_2(VAR_3, VAR_4, VAR_8);
  FUNC_1(VAR_3, VAR_4);


  VAR_8 |= VAR_1;
  FUNC_2(VAR_3, VAR_4, VAR_8);
  FUNC_1(VAR_3, VAR_4);
  FUNC_0(1);
 }
 return 0;
}
