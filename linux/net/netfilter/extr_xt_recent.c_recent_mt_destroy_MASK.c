
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_recent_mtinfo_v1 {int name; } ;
struct xt_mtdtor_param {struct xt_recent_mtinfo_v1* matchinfo; int net; } ;
struct recent_table {scalar_t__ refcnt; int name; int list; } ;
struct recent_net {int * xt_recent; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct recent_net* FUNC_3 (int ) ;
 int FUNC_4 (struct recent_table*) ;
 int FUNC_5 (struct recent_table*) ;
 struct recent_table* FUNC_6 (struct recent_net*,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(const struct xt_mtdtor_param *VAR_2)
{
 struct recent_net *VAR_3 = FUNC_3(VAR_2->net);
 const struct xt_recent_mtinfo_v1 *VAR_4 = VAR_2->matchinfo;
 struct recent_table *VAR_5;

 FUNC_1(&VAR_1);
 VAR_5 = FUNC_6(VAR_3, VAR_4->name);
 if (--VAR_5->refcnt == 0) {
  FUNC_8(&VAR_0);
  FUNC_0(&VAR_5->list);
  FUNC_9(&VAR_0);




  FUNC_4(VAR_5);
  FUNC_5(VAR_5);
 }
 FUNC_2(&VAR_1);
}
