
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct dst_entry {int dummy; } ;
struct bpf_lwt_prog {int name; int prog; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_2, struct bpf_lwt_prog *VAR_3,
         struct dst_entry *VAR_4, bool VAR_5)
{
 int VAR_6;






 FUNC_4();
 FUNC_0(VAR_2);
 VAR_6 = FUNC_1(VAR_3->prog, VAR_2);

 switch (VAR_6) {
 case 129:
 case 130:
  break;

 case 128:
  if (FUNC_8(!VAR_5)) {
   FUNC_3("Illegal redirect return code in prog %s\n",
         VAR_3->name ? : "<unknown>");
   VAR_6 = 129;
  } else {
   FUNC_7(VAR_2);
   VAR_6 = FUNC_6(VAR_2);
   if (VAR_6 == 0)
    VAR_6 = 128;
  }
  break;

 case 131:
  FUNC_2(VAR_2);
  VAR_6 = -VAR_1;
  break;

 default:
  FUNC_3("bpf-lwt: Illegal return value %u, expect packet loss\n", VAR_6);
  FUNC_2(VAR_2);
  VAR_6 = -VAR_0;
  break;
 }

 FUNC_5();

 return VAR_6;
}
