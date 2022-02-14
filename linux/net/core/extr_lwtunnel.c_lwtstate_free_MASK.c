
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwtunnel_state {size_t type; } ;
struct lwtunnel_encap_ops {int owner; int (* destroy_state ) (struct lwtunnel_state*) ;} ;


 int FUNC_0 (struct lwtunnel_state*) ;
 int FUNC_1 (struct lwtunnel_state*,int ) ;
 struct lwtunnel_encap_ops** VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct lwtunnel_state*) ;

void FUNC_4(struct lwtunnel_state *VAR_2)
{
 const struct lwtunnel_encap_ops *VAR_3 = VAR_0[VAR_2->type];

 if (VAR_3->destroy_state) {
  VAR_3->destroy_state(VAR_2);
  FUNC_1(VAR_2, VAR_1);
 } else {
  FUNC_0(VAR_2);
 }
 FUNC_2(VAR_3->owner);
}
