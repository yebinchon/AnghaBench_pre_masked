
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int proto; } ;
struct xfrm_state {TYPE_2__ id; } ;
struct sk_buff {scalar_t__ data; } ;
struct sadb_msg {scalar_t__ sadb_msg_pid; scalar_t__ sadb_msg_seq; scalar_t__ sadb_msg_reserved; scalar_t__ sadb_msg_errno; int sadb_msg_satype; int sadb_msg_type; int sadb_msg_version; } ;
struct TYPE_3__ {int hard; } ;
struct km_event {TYPE_1__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_3 ;
 int FUNC_2 (struct sk_buff*,int ,int ,int *,int ) ;
 int FUNC_3 (int ) ;
 struct sk_buff* FUNC_4 (struct xfrm_state*,int) ;
 int FUNC_5 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_6(struct xfrm_state *VAR_4, const struct km_event *VAR_5)
{
 struct sk_buff *VAR_6;
 struct sadb_msg *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_8 = VAR_5->data.hard;
 if (VAR_8)
  VAR_9 = 2;
 else
  VAR_9 = 1;

 VAR_6 = FUNC_4(VAR_4, VAR_9);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_7 = (struct sadb_msg *) VAR_6->data;
 VAR_7->sadb_msg_version = VAR_2;
 VAR_7->sadb_msg_type = VAR_3;
 VAR_7->sadb_msg_satype = FUNC_3(VAR_4->id.proto);
 VAR_7->sadb_msg_errno = 0;
 VAR_7->sadb_msg_reserved = 0;
 VAR_7->sadb_msg_seq = 0;
 VAR_7->sadb_msg_pid = 0;

 FUNC_2(VAR_6, VAR_1, VAR_0, ((void*)0),
   FUNC_5(VAR_4));
 return 0;
}
