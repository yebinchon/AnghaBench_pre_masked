
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct aa_profile {int dummy; } ;
struct aa_label {int dummy; } ;
struct TYPE_5__ {int cap; } ;
struct TYPE_6__ {TYPE_1__ u; } ;


 int FUNC_0 (TYPE_2__,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct aa_label*,struct aa_profile*,int ) ;
 int FUNC_2 (struct aa_profile*,int,unsigned int,TYPE_2__*) ;
 TYPE_2__ VAR_2 ;

int FUNC_3(struct aa_label *VAR_3, int VAR_4, unsigned int VAR_5)
{
 struct aa_profile *VAR_6;
 int VAR_7 = 0;
 FUNC_0(VAR_2, VAR_0, VAR_1);

 VAR_2.u.cap = VAR_4;
 VAR_7 = FUNC_1(VAR_3, VAR_6,
   FUNC_2(VAR_6, VAR_4, VAR_5, &VAR_2));

 return VAR_7;
}
