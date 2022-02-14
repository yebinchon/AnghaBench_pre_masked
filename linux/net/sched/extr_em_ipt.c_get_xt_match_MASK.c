
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xt_match {int dummy; } ;
struct nlattr {int dummy; } ;
struct em_ipt_xt_match {int (* validate_match_data ) (struct nlattr**,int ) ;scalar_t__ match_name; } ;


 int VAR_0 ;
 struct xt_match* FUNC_0 (int) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 struct em_ipt_xt_match* VAR_4 ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*,scalar_t__) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct nlattr**,int ) ;
 struct xt_match* FUNC_5 (int ,scalar_t__,int ) ;

__attribute__((used)) static struct xt_match *FUNC_6(struct nlattr **VAR_5)
{
 const struct em_ipt_xt_match *VAR_6;
 struct nlattr *VAR_7;
 u8 VAR_8, VAR_9 = 0;
 int VAR_10;

 VAR_7 = VAR_5[VAR_1];
 for (VAR_6 = VAR_4; VAR_6->match_name; VAR_6++) {
  if (!FUNC_2(VAR_7, VAR_6->match_name))
   break;
 }

 if (!VAR_6->match_name) {
  FUNC_3("Unsupported xt match");
  return FUNC_0(-VAR_0);
 }

 if (VAR_5[VAR_2])
  VAR_9 = FUNC_1(VAR_5[VAR_2]);

 VAR_10 = VAR_6->validate_match_data(VAR_5, VAR_9);
 if (VAR_10 < 0)
  return FUNC_0(VAR_10);

 VAR_8 = FUNC_1(VAR_5[VAR_3]);
 return FUNC_5(VAR_8, VAR_6->match_name, VAR_9);
}
