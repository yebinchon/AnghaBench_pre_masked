
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (char const*,struct file*,int) ;
 int FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_7, struct file *VAR_8, unsigned long VAR_9,
         unsigned long VAR_10)
{
 int VAR_11 = 0;

 if (!VAR_8 || !FUNC_1(VAR_8))
  return 0;

 if (VAR_9 & VAR_5)
  VAR_11 |= VAR_2;




 if ((VAR_9 & VAR_6) && !(VAR_10 & VAR_1))
  VAR_11 |= VAR_3;
 if (VAR_9 & VAR_4)
  VAR_11 |= VAR_0;

 return FUNC_0(VAR_7, VAR_8, VAR_11);
}
