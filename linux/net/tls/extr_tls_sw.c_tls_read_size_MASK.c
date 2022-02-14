
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tls_sw_context_rx {char control; } ;
struct tls_prot_info {int prepend_size; size_t tag_size; scalar_t__ version; size_t tail_size; scalar_t__ iv_size; } ;
struct tls_context {struct tls_prot_info prot_info; } ;
struct strparser {int sk; } ;
struct strp_msg {scalar_t__ offset; } ;
struct sk_buff {scalar_t__ len; } ;
typedef int header ;
struct TYPE_2__ {scalar_t__ seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 char VAR_4 ;
 char VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*,scalar_t__,char*,int) ;
 struct strp_msg* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int,scalar_t__) ;
 int FUNC_5 (int ,int) ;
 struct tls_context* FUNC_6 (int ) ;
 struct tls_sw_context_rx* FUNC_7 (struct tls_context*) ;

__attribute__((used)) static int FUNC_8(struct strparser *VAR_9, struct sk_buff *VAR_10)
{
 struct tls_context *VAR_11 = FUNC_6(VAR_9->sk);
 struct tls_sw_context_rx *VAR_12 = FUNC_7(VAR_11);
 struct tls_prot_info *VAR_13 = &VAR_11->prot_info;
 char VAR_14[VAR_7 + VAR_3];
 struct strp_msg *VAR_15 = FUNC_3(VAR_10);
 size_t VAR_16;
 size_t VAR_17 = 0;
 int VAR_18;


 if (VAR_15->offset + VAR_13->prepend_size > VAR_10->len)
  return 0;


 if (FUNC_1(VAR_13->prepend_size > sizeof(VAR_14))) {
  VAR_18 = -VAR_1;
  goto read_failure;
 }


 VAR_18 = FUNC_2(VAR_10, VAR_15->offset, VAR_14, VAR_13->prepend_size);

 if (VAR_18 < 0)
  goto read_failure;

 VAR_12->control = VAR_14[0];

 VAR_17 = ((VAR_14[4] & 0xFF) | (VAR_14[3] << 8));

 VAR_16 = VAR_13->tag_size;
 if (VAR_13->version != VAR_6)
  VAR_16 += VAR_13->iv_size;

 if (VAR_17 > VAR_8 + VAR_16 +
     VAR_13->tail_size) {
  VAR_18 = -VAR_2;
  goto read_failure;
 }
 if (VAR_17 < VAR_16) {
  VAR_18 = -VAR_0;
  goto read_failure;
 }


 if (VAR_14[1] != VAR_5 ||
     VAR_14[2] != VAR_4) {
  VAR_18 = -VAR_1;
  goto read_failure;
 }

 FUNC_4(VAR_9->sk, VAR_17 + VAR_7,
         FUNC_0(VAR_10)->seq + VAR_15->offset);
 return VAR_17 + VAR_7;

read_failure:
 FUNC_5(VAR_9->sk, VAR_18);

 return VAR_18;
}
