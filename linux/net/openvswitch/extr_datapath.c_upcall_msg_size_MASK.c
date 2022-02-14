
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ovs_header {int dummy; } ;
struct dp_upcall_info {scalar_t__ mru; scalar_t__ actions_len; scalar_t__ egress_tun_info; TYPE_1__* userdata; } ;
struct TYPE_2__ {int nla_len; } ;


 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (int) ;
 size_t FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static size_t FUNC_5(const struct dp_upcall_info *VAR_0,
         unsigned int VAR_1, int VAR_2)
{
 size_t VAR_3 = FUNC_1(sizeof(struct ovs_header))
  + FUNC_2(VAR_1)
  + FUNC_2(FUNC_3())
  + FUNC_2(sizeof(unsigned int));


 if (VAR_0->userdata)
  VAR_3 += FUNC_0(VAR_0->userdata->nla_len);


 if (VAR_0->egress_tun_info)
  VAR_3 += FUNC_2(FUNC_4());


 if (VAR_0->actions_len)
  VAR_3 += FUNC_2(VAR_2);


 if (VAR_0->mru)
  VAR_3 += FUNC_2(sizeof(VAR_0->mru));

 return VAR_3;
}
