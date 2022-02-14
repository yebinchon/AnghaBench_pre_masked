
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_obj {int node; } ;
struct rhashtable_params {int dummy; } ;
struct rhashtable {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct rhashtable*,int *,struct rhashtable_params const) ;

__attribute__((used)) static int FUNC_3(struct rhashtable *VAR_3, struct test_obj *VAR_4,
                        const struct rhashtable_params VAR_5)
{
 int VAR_6, VAR_7 = -1, VAR_8 = 0;

 do {
  VAR_7++;
  FUNC_0();
  VAR_6 = FUNC_2(VAR_3, &VAR_4->node, VAR_5);
  if (VAR_6 == -VAR_1 && VAR_2) {
   VAR_8++;
   VAR_6 = -VAR_0;
  }
 } while (VAR_6 == -VAR_0);

 if (VAR_8)
  FUNC_1(" %u insertions retried after -ENOMEM\n",
   VAR_8);

 return VAR_6 ? : VAR_7;
}
