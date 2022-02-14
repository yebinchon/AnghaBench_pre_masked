
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ct_atc {int * vm; scalar_t__ hw; scalar_t__* rsc_mgrs; scalar_t__ mixer; int * timer; } ;
struct TYPE_2__ {int (* destroy ) (scalar_t__) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ct_atc*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct ct_atc*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct ct_atc *VAR_2)
{
 int VAR_3 = 0;

 if (!VAR_2)
  return 0;

 if (VAR_2->timer) {
  FUNC_2(VAR_2->timer);
  VAR_2->timer = ((void*)0);
 }

 FUNC_0(VAR_2);


 if (VAR_2->mixer)
  FUNC_1(VAR_2->mixer);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1[VAR_3].destroy && VAR_2->rsc_mgrs[VAR_3])
   VAR_1[VAR_3].destroy(VAR_2->rsc_mgrs[VAR_3]);

 }

 if (VAR_2->hw)
  FUNC_4(VAR_2->hw);


 if (VAR_2->vm) {
  FUNC_3(VAR_2->vm);
  VAR_2->vm = ((void*)0);
 }

 FUNC_5(VAR_2);

 return 0;
}
