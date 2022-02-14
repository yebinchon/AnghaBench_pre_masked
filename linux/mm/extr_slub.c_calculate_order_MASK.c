
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int VAR_2 ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 unsigned int FUNC_3 (unsigned int,int,unsigned int,int) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;

__attribute__((used)) static inline int FUNC_4(unsigned int VAR_5)
{
 unsigned int VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 VAR_7 = VAR_4;
 if (!VAR_7)
  VAR_7 = 4 * (FUNC_0(VAR_2) + 1);
 VAR_8 = FUNC_2(VAR_3, VAR_5);
 VAR_7 = FUNC_1(VAR_7, VAR_8);

 while (VAR_7 > 1) {
  unsigned int VAR_9;

  VAR_9 = 16;
  while (VAR_9 >= 4) {
   VAR_6 = FUNC_3(VAR_5, VAR_7,
     VAR_3, VAR_9);
   if (VAR_6 <= VAR_3)
    return VAR_6;
   VAR_9 /= 2;
  }
  VAR_7--;
 }





 VAR_6 = FUNC_3(VAR_5, 1, VAR_3, 1);
 if (VAR_6 <= VAR_3)
  return VAR_6;




 VAR_6 = FUNC_3(VAR_5, 1, VAR_1, 1);
 if (VAR_6 < VAR_1)
  return VAR_6;
 return -VAR_0;
}
