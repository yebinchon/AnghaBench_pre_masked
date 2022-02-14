
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sw_flow_id {int ufid_len; } ;
struct sw_flow_actions {int orig_len; } ;
struct ovs_header {int dummy; } ;
struct ovs_flow_stats {int dummy; } ;


 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 size_t FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct sw_flow_id const*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct sw_flow_id const*,int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static size_t FUNC_8(const struct sw_flow_actions *VAR_0,
        const struct sw_flow_id *VAR_1,
        uint32_t VAR_2)
{
 size_t VAR_3 = FUNC_0(sizeof(struct ovs_header));


 if (VAR_1 && FUNC_3(VAR_1))
  VAR_3 += FUNC_1(VAR_1->ufid_len);


 if (!VAR_1 || FUNC_6(VAR_1, VAR_2))
  VAR_3 += FUNC_1(FUNC_4());


 if (FUNC_7(VAR_2))
  VAR_3 += FUNC_1(FUNC_4());


 if (FUNC_5(VAR_2))
  VAR_3 += FUNC_1(VAR_0->orig_len);

 return VAR_3
  + FUNC_2(sizeof(struct ovs_flow_stats))
  + FUNC_1(1)
  + FUNC_2(8);
}
