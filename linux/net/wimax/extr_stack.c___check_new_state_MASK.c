
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wimax_st { ____Placeholder_wimax_st } wimax_st ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,int,int) ;

__attribute__((used)) static
void FUNC_2(enum wimax_st VAR_0, enum wimax_st VAR_1,
         unsigned int VAR_2)
{
 if (FUNC_0(((1 << VAR_1) & VAR_2) == 0)) {
  FUNC_1("SW BUG! Forbidden state change %u -> %u\n",
         VAR_0, VAR_1);
 }
}
