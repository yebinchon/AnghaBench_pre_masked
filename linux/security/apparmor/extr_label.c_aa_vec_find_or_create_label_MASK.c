
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_profile {int dummy; } ;
struct aa_label {int dummy; } ;
typedef int gfp_t ;


 struct aa_label* FUNC_0 (struct aa_profile**,int,int ) ;
 struct aa_label* FUNC_1 (struct aa_profile**,int) ;

struct aa_label *FUNC_2(struct aa_profile **VAR_0, int VAR_1,
          gfp_t VAR_2)
{
 struct aa_label *VAR_3 = FUNC_1(VAR_0, VAR_1);

 if (VAR_3)
  return VAR_3;

 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
