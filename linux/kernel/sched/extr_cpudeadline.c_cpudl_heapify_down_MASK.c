
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct cpudl {int size; TYPE_1__* elements; } ;
struct TYPE_2__ {int cpu; int idx; int dl; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct cpudl *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 int VAR_5 = VAR_0->elements[VAR_1].cpu;
 u64 VAR_6 = VAR_0->elements[VAR_1].dl;

 if (FUNC_1(VAR_1) >= VAR_0->size)
  return;


 while (1) {
  u64 VAR_7;

  VAR_2 = FUNC_1(VAR_1);
  VAR_3 = FUNC_2(VAR_1);
  VAR_4 = VAR_1;
  VAR_7 = VAR_6;

  if ((VAR_2 < VAR_0->size) && FUNC_0(VAR_6,
      VAR_0->elements[VAR_2].dl)) {
   VAR_4 = VAR_2;
   VAR_7 = VAR_0->elements[VAR_2].dl;
  }
  if ((VAR_3 < VAR_0->size) && FUNC_0(VAR_7,
      VAR_0->elements[VAR_3].dl))
   VAR_4 = VAR_3;

  if (VAR_4 == VAR_1)
   break;


  VAR_0->elements[VAR_1].cpu = VAR_0->elements[VAR_4].cpu;
  VAR_0->elements[VAR_1].dl = VAR_0->elements[VAR_4].dl;
  VAR_0->elements[VAR_0->elements[VAR_1].cpu].idx = VAR_1;
  VAR_1 = VAR_4;
 }

 VAR_0->elements[VAR_1].cpu = VAR_5;
 VAR_0->elements[VAR_1].dl = VAR_6;
 VAR_0->elements[VAR_0->elements[VAR_1].cpu].idx = VAR_1;
}
