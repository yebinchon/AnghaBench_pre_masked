
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_action_param {scalar_t__ fragoff; int hotdrop; int thoff; struct ip6t_mh* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct ip6t_mh {int invflags; int * types; } ;
struct ip6_mh {scalar_t__ ip6mh_proto; int ip6mh_type; } ;
typedef int _mh ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 struct ip6_mh* FUNC_1 (struct sk_buff const*,int ,int,struct ip6_mh*) ;
 int FUNC_2 (int ,int ,int ,int) ;

__attribute__((used)) static bool FUNC_3(const struct sk_buff *VAR_2, struct xt_action_param *VAR_3)
{
 struct ip6_mh VAR_4;
 const struct ip6_mh *VAR_5;
 const struct ip6t_mh *VAR_6 = VAR_3->matchinfo;


 if (VAR_3->fragoff != 0)
  return 0;

 VAR_5 = FUNC_1(VAR_2, VAR_3->thoff, sizeof(VAR_4), &VAR_4);
 if (VAR_5 == ((void*)0)) {


  FUNC_0("Dropping evil MH tinygram.\n");
  VAR_3->hotdrop = 1;
  return 0;
 }

 if (VAR_5->ip6mh_proto != VAR_1) {
  FUNC_0("Dropping invalid MH Payload Proto: %u\n",
    VAR_5->ip6mh_proto);
  VAR_3->hotdrop = 1;
  return 0;
 }

 return FUNC_2(VAR_6->types[0], VAR_6->types[1], VAR_5->ip6mh_type,
     !!(VAR_6->invflags & VAR_0));
}
