
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_state {int dummy; } ;
struct netns_pfkey {int socks_nr; } ;
struct net {int dummy; } ;
struct km_event {int event; struct net* net; } ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct xfrm_state*,struct km_event const*) ;
 int FUNC_2 (struct xfrm_state*,struct km_event const*) ;
 int FUNC_3 (struct km_event const*) ;
 struct netns_pfkey* FUNC_4 (struct net*,int ) ;
 int VAR_0 ;
 int FUNC_5 (char*,int) ;
 struct net* FUNC_6 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_7(struct xfrm_state *VAR_1, const struct km_event *VAR_2)
{
 struct net *VAR_3 = VAR_1 ? FUNC_6(VAR_1) : VAR_2->net;
 struct netns_pfkey *VAR_4 = FUNC_4(VAR_3, VAR_0);

 if (FUNC_0(&VAR_4->socks_nr) == 0)
  return 0;

 switch (VAR_2->event) {
 case 132:
  return FUNC_2(VAR_1, VAR_2);
 case 133:
 case 129:
 case 128:
  return FUNC_1(VAR_1, VAR_2);
 case 131:
  return FUNC_3(VAR_2);
 case 130:
  break;
 default:
  FUNC_5("pfkey: Unknown SA event %d\n", VAR_2->event);
  break;
 }

 return 0;
}
