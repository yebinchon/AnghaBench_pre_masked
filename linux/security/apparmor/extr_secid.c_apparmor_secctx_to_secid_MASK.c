
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct aa_label {int secid; } ;
struct TYPE_4__ {TYPE_1__* unconfined; } ;
struct TYPE_3__ {int label; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct aa_label*) ;
 int FUNC_1 (struct aa_label*) ;
 struct aa_label* FUNC_2 (int *,char const*,int ,int ,int,int) ;
 TYPE_2__* VAR_1 ;

int FUNC_3(const char *VAR_2, u32 VAR_3, u32 *VAR_4)
{
 struct aa_label *VAR_5;

 VAR_5 = FUNC_2(&VAR_1->unconfined->label, VAR_2,
        VAR_3, VAR_0, 0, 0);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);
 *VAR_4 = VAR_5->secid;

 return 0;
}
