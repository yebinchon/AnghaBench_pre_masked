
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rme96 {int* vol; } ;


 scalar_t__ FUNC_0 (struct rme96*) ;
 scalar_t__ FUNC_1 (struct rme96*) ;
 int FUNC_2 (struct rme96*,int) ;

__attribute__((used)) static void
FUNC_3(struct rme96 *VAR_0)
{
 if (FUNC_0(VAR_0)) {
  FUNC_2(VAR_0, (VAR_0->vol[0] << 2) | 0x0);
  FUNC_2(VAR_0, (VAR_0->vol[1] << 2) | 0x2);
 } else if (FUNC_1(VAR_0)) {
  FUNC_2(VAR_0, (VAR_0->vol[0] & 0x3FF) | 0x000);
  FUNC_2(VAR_0, (VAR_0->vol[1] & 0x3FF) | 0x400);
 }
}
