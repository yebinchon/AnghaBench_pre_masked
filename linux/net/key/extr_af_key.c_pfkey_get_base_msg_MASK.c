
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct sk_buff {int len; scalar_t__ data; } ;
struct sadb_msg {scalar_t__ sadb_msg_version; scalar_t__ sadb_msg_reserved; scalar_t__ sadb_msg_type; int sadb_msg_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static struct sadb_msg *FUNC_0(struct sk_buff *VAR_5, int *VAR_6)
{
 struct sadb_msg *VAR_7 = ((void*)0);

 if (VAR_5->len < sizeof(*VAR_7)) {
  *VAR_6 = -VAR_1;
 } else {
  VAR_7 = (struct sadb_msg *) VAR_5->data;
  if (VAR_7->sadb_msg_version != VAR_2 ||
      VAR_7->sadb_msg_reserved != 0 ||
      (VAR_7->sadb_msg_type <= VAR_4 ||
       VAR_7->sadb_msg_type > VAR_3)) {
   VAR_7 = ((void*)0);
   *VAR_6 = -VAR_0;
  } else if (VAR_7->sadb_msg_len != (VAR_5->len /
       sizeof(uint64_t)) ||
      VAR_7->sadb_msg_len < (sizeof(struct sadb_msg) /
      sizeof(uint64_t))) {
   VAR_7 = ((void*)0);
   *VAR_6 = -VAR_1;
  } else {
   *VAR_6 = 0;
  }
 }
 return VAR_7;
}
