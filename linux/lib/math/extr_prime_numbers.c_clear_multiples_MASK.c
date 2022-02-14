
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long,unsigned long*) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_2(unsigned long VAR_0,
         unsigned long *VAR_1,
         unsigned long VAR_2,
         unsigned long VAR_3)
{
 unsigned long VAR_4;

 VAR_4 = 2 * VAR_0;
 if (VAR_4 < VAR_2)
  VAR_4 = FUNC_1(VAR_2, VAR_0);

 while (VAR_4 < VAR_3) {
  FUNC_0(VAR_4, VAR_1);
  VAR_4 += VAR_0;
 }

 return VAR_0;
}
