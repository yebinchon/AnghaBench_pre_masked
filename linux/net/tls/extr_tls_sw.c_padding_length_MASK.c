
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_sw_context_rx {char control; } ;
struct tls_prot_info {scalar_t__ version; int prepend_size; } ;
struct strp_msg {int full_len; int offset; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sk_buff*,int,char*,int) ;
 struct strp_msg* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_2(struct tls_sw_context_rx *VAR_2,
     struct tls_prot_info *VAR_3, struct sk_buff *VAR_4)
{
 struct strp_msg *VAR_5 = FUNC_1(VAR_4);
 int VAR_6 = 0;


 if (VAR_3->version == VAR_1) {
  char VAR_7 = 0;
  int VAR_8;
  int VAR_9 = 17;

  while (VAR_7 == 0) {
   if (VAR_9 > VAR_5->full_len - VAR_3->prepend_size)
    return -VAR_0;
   VAR_8 = FUNC_0(VAR_4,
         VAR_5->offset + VAR_5->full_len - VAR_9,
         &VAR_7, 1);
   if (VAR_8)
    return VAR_8;
   if (VAR_7)
    break;
   VAR_6++;
   VAR_9++;
  }
  VAR_2->control = VAR_7;
 }
 return VAR_6;
}
