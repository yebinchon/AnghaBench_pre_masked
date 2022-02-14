
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct flow_dissector_key_enc_opts {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,struct flow_dissector_key_enc_opts*) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_2,
          struct flow_dissector_key_enc_opts *VAR_3,
          struct flow_dissector_key_enc_opts *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_0, VAR_3);
 if (VAR_5)
  return VAR_5;

 return FUNC_0(VAR_2, VAR_1, VAR_4);
}
