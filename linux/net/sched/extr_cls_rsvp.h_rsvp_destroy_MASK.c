
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int root; } ;
struct rsvp_session {int * ht; int next; } ;
struct rsvp_head {int * ht; int next; } ;
struct rsvp_filter {int next; } ;
struct netlink_ext_ack {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct rsvp_session*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct tcf_proto*,struct rsvp_filter*) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct tcf_proto *VAR_1, bool VAR_2,
    struct netlink_ext_ack *VAR_3)
{
 struct rsvp_head *VAR_4 = FUNC_4(VAR_1->root);
 int VAR_5, VAR_6;

 if (VAR_4 == ((void*)0))
  return;

 for (VAR_5 = 0; VAR_5 < 256; VAR_5++) {
  struct rsvp_session *VAR_7;

  while ((VAR_7 = FUNC_4(VAR_4->ht[VAR_5])) != ((void*)0)) {
   FUNC_0(VAR_4->ht[VAR_5], VAR_7->next);

   for (VAR_6 = 0; VAR_6 <= 16; VAR_6++) {
    struct rsvp_filter *VAR_8;

    while ((VAR_8 = FUNC_4(VAR_7->ht[VAR_6])) != ((void*)0)) {
     FUNC_2(VAR_7->ht[VAR_6], VAR_8->next);
     FUNC_3(VAR_1, VAR_8);
    }
   }
   FUNC_1(VAR_7, VAR_0);
  }
 }
 FUNC_1(VAR_4, VAR_0);
}
