
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnexthop {int rtnh_hops; } ;
struct nlattr {int dummy; } ;
struct mfcctl {int * mfcc_ttls; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rtnexthop* FUNC_0 (struct nlattr const*) ;
 int FUNC_1 (struct nlattr const*) ;
 struct rtnexthop* FUNC_2 (struct rtnexthop*,int*) ;
 scalar_t__ FUNC_3 (struct rtnexthop*,int) ;

__attribute__((used)) static int FUNC_4(const struct nlattr *VAR_2, struct mfcctl *VAR_3)
{
 struct rtnexthop *VAR_4 = FUNC_0(VAR_2);
 int VAR_5 = FUNC_1(VAR_2), VAR_6 = 0;

 while (FUNC_3(VAR_4, VAR_5)) {
  VAR_3->mfcc_ttls[VAR_6] = VAR_4->rtnh_hops;
  if (++VAR_6 == VAR_1)
   break;
  VAR_4 = FUNC_2(VAR_4, &VAR_5);
 }

 return VAR_5 > 0 ? -VAR_0 : VAR_6;
}
