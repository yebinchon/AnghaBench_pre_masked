
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline int FUNC_3(unsigned long VAR_9,
       unsigned long VAR_10)
{
 int VAR_11;


 if (!FUNC_0(VAR_0) || VAR_8)
  return -VAR_2;


 VAR_11 = FUNC_1(VAR_6);
 if (VAR_11 < 0)
  return VAR_11;





 VAR_11 = FUNC_2(VAR_7);
 if (VAR_11)
  return VAR_11;





 if ((VAR_10 & VAR_4) != (VAR_10 & ~VAR_3))
  return -VAR_1;




 if (VAR_9 > VAR_5)
  return -VAR_1;

 return 0;
}
