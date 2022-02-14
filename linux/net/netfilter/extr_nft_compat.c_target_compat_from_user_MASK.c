
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_target {int targetsize; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*,void*,int) ;
 int FUNC_2 (void*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct xt_target *VAR_0, void *VAR_1, void *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_2, VAR_1, VAR_0->targetsize);
 VAR_3 = FUNC_0(VAR_0->targetsize) - VAR_0->targetsize;
 if (VAR_3 > 0)
  FUNC_2(VAR_2 + VAR_0->targetsize, 0, VAR_3);
}
