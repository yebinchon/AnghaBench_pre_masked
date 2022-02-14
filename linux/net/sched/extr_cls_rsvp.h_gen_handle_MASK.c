
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct tcf_proto {int root; } ;
struct rsvp_head {int hgenerator; } ;


 int FUNC_0 (struct tcf_proto*,unsigned int) ;
 struct rsvp_head* FUNC_1 (int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct tcf_proto *VAR_0, unsigned VAR_1)
{
 struct rsvp_head *VAR_2 = FUNC_1(VAR_0->root);
 int VAR_3 = 0xFFFF;

 while (VAR_3-- > 0) {
  u32 VAR_4;

  if ((VAR_2->hgenerator += 0x10000) == 0)
   VAR_2->hgenerator = 0x10000;
  VAR_4 = VAR_2->hgenerator|VAR_1;
  if (!FUNC_0(VAR_0, VAR_4))
   return VAR_4;
 }
 return 0;
}
