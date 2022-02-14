
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct calldata {int size; scalar_t__ stack; } ;


 int FUNC_0 (scalar_t__,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct calldata *VAR_0)
{
 if (VAR_0->stack) {
  VAR_0->size = sizeof(size_t);
  FUNC_0(VAR_0->stack, 0, sizeof(size_t));
 }
}
