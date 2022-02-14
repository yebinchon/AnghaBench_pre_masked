
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct smp_ltk {scalar_t__ authenticated; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct smp_ltk*) ;

__attribute__((used)) static inline u8 FUNC_1(struct smp_ltk *VAR_3)
{
 if (VAR_3->authenticated) {
  if (FUNC_0(VAR_3))
   return VAR_0;
  else
   return VAR_1;
 }

 return VAR_2;
}
