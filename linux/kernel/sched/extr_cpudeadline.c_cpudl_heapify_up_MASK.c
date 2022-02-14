
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct cpudl {TYPE_1__* elements; } ;
struct TYPE_2__ {int cpu; int idx; int dl; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct cpudl *VAR_0, int VAR_1)
{
 int VAR_2;

 int VAR_3 = VAR_0->elements[VAR_1].cpu;
 u64 VAR_4 = VAR_0->elements[VAR_1].dl;

 if (VAR_1 == 0)
  return;

 do {
  VAR_2 = FUNC_1(VAR_1);
  if (FUNC_0(VAR_4, VAR_0->elements[VAR_2].dl))
   break;

  VAR_0->elements[VAR_1].cpu = VAR_0->elements[VAR_2].cpu;
  VAR_0->elements[VAR_1].dl = VAR_0->elements[VAR_2].dl;
  VAR_0->elements[VAR_0->elements[VAR_1].cpu].idx = VAR_1;
  VAR_1 = VAR_2;
 } while (VAR_1 != 0);

 VAR_0->elements[VAR_1].cpu = VAR_3;
 VAR_0->elements[VAR_1].dl = VAR_4;
 VAR_0->elements[VAR_0->elements[VAR_1].cpu].idx = VAR_1;
}
