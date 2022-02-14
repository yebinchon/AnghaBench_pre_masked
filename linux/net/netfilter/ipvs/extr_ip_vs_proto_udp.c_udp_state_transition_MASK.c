
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ip_vs_proto_data {int * timeout_table; } ;
struct ip_vs_conn {int timeout; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct ip_vs_conn*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct ip_vs_conn *VAR_2, int VAR_3,
       const struct sk_buff *VAR_4,
       struct ip_vs_proto_data *VAR_5)
{
 if (FUNC_2(!VAR_5)) {
  FUNC_1("UDP no ns data\n");
  return;
 }

 VAR_2->timeout = VAR_5->timeout_table[VAR_1];
 if (VAR_3 == VAR_0)
  FUNC_0(VAR_2);
}
