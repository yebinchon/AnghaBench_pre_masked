
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mld2_query {int mld2q_qqic; } ;
struct inet6_dev {unsigned long mc_qi; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long) ;

__attribute__((used)) static void FUNC_2(struct inet6_dev *VAR_1,
     const struct mld2_query *VAR_2)
{






 unsigned long VAR_3;

 if (VAR_2->mld2q_qqic < 128) {
  VAR_3 = VAR_2->mld2q_qqic;
 } else {
  unsigned long VAR_4, VAR_5;

  VAR_5 = FUNC_0(VAR_2->mld2q_qqic);
  VAR_4 = FUNC_1(VAR_2->mld2q_qqic);

  VAR_3 = (VAR_4 | 0x10) << (VAR_5 + 3);
 }

 VAR_1->mc_qi = VAR_3 * VAR_0;
}
