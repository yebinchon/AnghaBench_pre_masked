
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int,int,struct socket**) ;
 int FUNC_2 (struct socket*,int) ;

int FUNC_3(int VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10;
 struct socket *VAR_11;
 int VAR_12;


 FUNC_0(VAR_3 != VAR_1);
 FUNC_0((VAR_4 | VAR_6) != VAR_6);
 FUNC_0(VAR_3 & VAR_6);
 FUNC_0(VAR_5 & VAR_6);

 VAR_12 = VAR_8 & ~VAR_6;
 if (VAR_12 & ~(VAR_3 | VAR_5))
  return -VAR_0;
 VAR_8 &= VAR_6;

 if (VAR_5 != VAR_2 && (VAR_12 & VAR_5))
  VAR_12 = (VAR_12 & ~VAR_5) | VAR_2;

 VAR_10 = FUNC_1(VAR_7, VAR_8, VAR_9, &VAR_11);
 if (VAR_10 < 0)
  return VAR_10;

 return FUNC_2(VAR_11, VAR_12 & (VAR_1 | VAR_2));
}
