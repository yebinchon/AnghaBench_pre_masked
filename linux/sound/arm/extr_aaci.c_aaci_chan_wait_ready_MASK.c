
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct aaci_runtime {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void
FUNC_2(struct aaci_runtime *VAR_1, unsigned long VAR_2)
{
 u32 VAR_3;
 int VAR_4 = 5000;

 do {
  FUNC_1(1);
  VAR_3 = FUNC_0(VAR_1->base + VAR_0);
 } while (VAR_3 & VAR_2 && VAR_4--);
}
