
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int tun_flags; } ;
struct sw_flow_key {int tun_opts_len; TYPE_1__ tun_key; } ;
struct geneve_opt {int length; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sw_flow_key*,int) ;

__attribute__((used)) static int FUNC_1(struct sw_flow_key *VAR_3)
{
 struct geneve_opt *VAR_4;
 int VAR_5 = VAR_3->tun_opts_len;
 bool VAR_6 = 0;

 VAR_4 = (struct geneve_opt *)FUNC_0(VAR_3, VAR_3->tun_opts_len);
 while (VAR_5 > 0) {
  int VAR_7;

  if (VAR_5 < sizeof(*VAR_4))
   return -VAR_0;

  VAR_7 = sizeof(*VAR_4) + VAR_4->length * 4;
  if (VAR_7 > VAR_5)
   return -VAR_0;

  VAR_6 |= !!(VAR_4->type & VAR_1);

  VAR_4 = (struct geneve_opt *)((u8 *)VAR_4 + VAR_7);
  VAR_5 -= VAR_7;
 }

 VAR_3->tun_key.tun_flags |= VAR_6 ? VAR_2 : 0;

 return 0;
}
