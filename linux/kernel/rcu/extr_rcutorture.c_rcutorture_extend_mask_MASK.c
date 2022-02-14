
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct torture_random_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct torture_random_state*) ;

__attribute__((used)) static int
FUNC_3(int VAR_6, struct torture_random_state *VAR_7)
{
 int VAR_8 = FUNC_1();
 unsigned long VAR_9 = FUNC_2(VAR_7) >> 8;
 unsigned long VAR_10 = VAR_9 >> 3;

 FUNC_0(VAR_8 >> VAR_5);

 if (!(VAR_9 & 0x7))
  VAR_8 = VAR_8 & VAR_10;
 else
  VAR_8 = VAR_8 & (1 << (VAR_10 % VAR_2));

 if ((VAR_8 & VAR_1) &&
     ((!(VAR_8 & VAR_0) && (VAR_6 & VAR_0)) ||
      (!(VAR_8 & VAR_3) && (VAR_6 & VAR_3))))
  VAR_8 |= VAR_0 | VAR_3;
 return VAR_8 ?: VAR_4;
}
