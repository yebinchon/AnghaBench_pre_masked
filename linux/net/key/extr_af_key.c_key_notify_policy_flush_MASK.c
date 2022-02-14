
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
struct sk_buff {int dummy; } ;
struct sadb_msg {int sadb_msg_len; scalar_t__ sadb_msg_reserved; int sadb_msg_satype; scalar_t__ sadb_msg_errno; int sadb_msg_version; int sadb_msg_pid; int sadb_msg_seq; int sadb_msg_type; } ;
struct km_event {int net; int portid; int seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ,int *,int ) ;
 struct sadb_msg* FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_3(const struct km_event *VAR_6)
{
 struct sk_buff *VAR_7;
 struct sadb_msg *VAR_8;

 VAR_7 = FUNC_0(sizeof(struct sadb_msg) + 16, VAR_2);
 if (!VAR_7)
  return -VAR_1;
 VAR_8 = FUNC_2(VAR_7, sizeof(struct sadb_msg));
 VAR_8->sadb_msg_type = VAR_5;
 VAR_8->sadb_msg_seq = VAR_6->seq;
 VAR_8->sadb_msg_pid = VAR_6->portid;
 VAR_8->sadb_msg_version = VAR_3;
 VAR_8->sadb_msg_errno = (uint8_t) 0;
 VAR_8->sadb_msg_satype = VAR_4;
 VAR_8->sadb_msg_len = (sizeof(struct sadb_msg) / sizeof(uint64_t));
 VAR_8->sadb_msg_reserved = 0;
 FUNC_1(VAR_7, VAR_2, VAR_0, ((void*)0), VAR_6->net);
 return 0;

}
