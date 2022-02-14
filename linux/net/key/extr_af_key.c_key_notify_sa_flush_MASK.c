
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
struct sk_buff {int dummy; } ;
struct sadb_msg {int sadb_msg_len; scalar_t__ sadb_msg_reserved; scalar_t__ sadb_msg_errno; int sadb_msg_version; int sadb_msg_pid; int sadb_msg_seq; int sadb_msg_type; int sadb_msg_satype; } ;
struct TYPE_2__ {int proto; } ;
struct km_event {int net; int portid; int seq; TYPE_1__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ,int *,int ) ;
 int FUNC_2 (int ) ;
 struct sadb_msg* FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_4(const struct km_event *VAR_5)
{
 struct sk_buff *VAR_6;
 struct sadb_msg *VAR_7;

 VAR_6 = FUNC_0(sizeof(struct sadb_msg) + 16, VAR_2);
 if (!VAR_6)
  return -VAR_1;
 VAR_7 = FUNC_3(VAR_6, sizeof(struct sadb_msg));
 VAR_7->sadb_msg_satype = FUNC_2(VAR_5->data.proto);
 VAR_7->sadb_msg_type = VAR_4;
 VAR_7->sadb_msg_seq = VAR_5->seq;
 VAR_7->sadb_msg_pid = VAR_5->portid;
 VAR_7->sadb_msg_version = VAR_3;
 VAR_7->sadb_msg_errno = (uint8_t) 0;
 VAR_7->sadb_msg_len = (sizeof(struct sadb_msg) / sizeof(uint64_t));
 VAR_7->sadb_msg_reserved = 0;

 FUNC_1(VAR_6, VAR_2, VAR_0, ((void*)0), VAR_5->net);

 return 0;
}
