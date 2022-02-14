
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;

__attribute__((used)) static inline unsigned long FUNC_1(unsigned long VAR_1)
{
 do {
  VAR_1++;
  if (FUNC_0(VAR_1))
   return VAR_1;
 } while ((VAR_1 <= VAR_0));

 return -1;
}
