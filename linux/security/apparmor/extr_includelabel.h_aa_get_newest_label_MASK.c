
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aa_label {TYPE_1__* proxy; } ;
struct TYPE_2__ {int label; } ;


 int FUNC_0 (int) ;
 struct aa_label* FUNC_1 (struct aa_label*) ;
 struct aa_label* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct aa_label*) ;

__attribute__((used)) static inline struct aa_label *FUNC_4(struct aa_label *VAR_0)
{
 if (!VAR_0)
  return ((void*)0);

 if (FUNC_3(VAR_0)) {
  struct aa_label *VAR_1;

  FUNC_0(!VAR_0->proxy);
  FUNC_0(!VAR_0->proxy->label);




  VAR_1 = FUNC_2(&VAR_0->proxy->label);
  FUNC_0(!VAR_1);

  return VAR_1;
 }

 return FUNC_1(VAR_0);
}
