
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 scalar_t__ FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (scalar_t__,unsigned long) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline unsigned long FUNC_5(const unsigned long *VAR_1,
  const unsigned long *VAR_2, unsigned long VAR_3,
  unsigned long VAR_4, unsigned long VAR_5)
{
 unsigned long VAR_6;

 if (FUNC_4(VAR_4 >= VAR_3))
  return VAR_3;

 VAR_6 = VAR_1[VAR_4 / VAR_0];
 if (VAR_2)
  VAR_6 &= VAR_2[VAR_4 / VAR_0];
 VAR_6 ^= VAR_5;


 VAR_6 &= FUNC_0(VAR_4);
 VAR_4 = FUNC_3(VAR_4, VAR_0);

 while (!VAR_6) {
  VAR_4 += VAR_0;
  if (VAR_4 >= VAR_3)
   return VAR_3;

  VAR_6 = VAR_1[VAR_4 / VAR_0];
  if (VAR_2)
   VAR_6 &= VAR_2[VAR_4 / VAR_0];
  VAR_6 ^= VAR_5;
 }

 return FUNC_2(VAR_4 + FUNC_1(VAR_6), VAR_3);
}
