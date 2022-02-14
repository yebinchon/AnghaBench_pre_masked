
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_hmark_info {int dummy; } ;
struct sk_buff {int dummy; } ;
struct hmark_tuple {int uports; int proto; } ;


 int FUNC_0 (int *,struct xt_hmark_info const*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct sk_buff const*,unsigned int,int *,int) ;

__attribute__((used)) static void
FUNC_3(const struct sk_buff *VAR_0, unsigned int VAR_1,
        struct hmark_tuple *VAR_2, const struct xt_hmark_info *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2->proto);
 if (VAR_4 < 0)
  return;

 VAR_1 += VAR_4;
 if (FUNC_2(VAR_0, VAR_1, &VAR_2->uports, sizeof(VAR_2->uports)) < 0)
  return;

 FUNC_0(&VAR_2->uports, VAR_3);
}
