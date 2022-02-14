
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct tcf_t {int dummy; } ;
struct tc_cookie {int len; } ;
struct tc_action {int act_cookie; } ;
struct gnet_stats_queue {int dummy; } ;
struct gnet_stats_basic {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 struct tc_cookie* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static size_t FUNC_5(const struct tc_action *VAR_1)
{
 struct tc_cookie *VAR_2;
 u32 VAR_3 = 0;

 FUNC_3();
 VAR_2 = FUNC_2(VAR_1->act_cookie);

 if (VAR_2)
  VAR_3 = FUNC_0(VAR_2->len);
 FUNC_4();

 return FUNC_0(0)
  + FUNC_0(VAR_0)
  + VAR_3
  + FUNC_0(0)

  + FUNC_1(sizeof(struct gnet_stats_basic))

  + FUNC_1(sizeof(struct gnet_stats_queue))
  + FUNC_0(0)
  + FUNC_0(sizeof(struct tcf_t));
}
