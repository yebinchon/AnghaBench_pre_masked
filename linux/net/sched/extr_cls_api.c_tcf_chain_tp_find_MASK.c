
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tcf_proto {scalar_t__ prio; scalar_t__ protocol; struct tcf_proto* next; } ;
struct tcf_chain_info {struct tcf_proto* next; struct tcf_proto** pprev; } ;
struct tcf_chain {struct tcf_proto* filter_chain; } ;


 int VAR_0 ;
 struct tcf_proto* FUNC_0 (int ) ;
 struct tcf_proto* FUNC_1 (struct tcf_proto*,struct tcf_chain*) ;
 int FUNC_2 (struct tcf_proto*) ;

__attribute__((used)) static struct tcf_proto *FUNC_3(struct tcf_chain *VAR_1,
        struct tcf_chain_info *VAR_2,
        u32 VAR_3, u32 VAR_4,
        bool VAR_5)
{
 struct tcf_proto **VAR_6;
 struct tcf_proto *VAR_7;


 for (VAR_6 = &VAR_1->filter_chain;
      (VAR_7 = FUNC_1(*VAR_6, VAR_1));
      VAR_6 = &VAR_7->next) {
  if (VAR_7->prio >= VAR_4) {
   if (VAR_7->prio == VAR_4) {
    if (VAR_5 ||
        (VAR_7->protocol != VAR_3 && VAR_3))
     return FUNC_0(-VAR_0);
   } else {
    VAR_7 = ((void*)0);
   }
   break;
  }
 }
 VAR_2->pprev = VAR_6;
 if (VAR_7) {
  VAR_2->next = VAR_7->next;
  FUNC_2(VAR_7);
 } else {
  VAR_2->next = ((void*)0);
 }
 return VAR_7;
}
