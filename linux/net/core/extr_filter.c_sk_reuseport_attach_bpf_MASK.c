
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {scalar_t__ sk_type; scalar_t__ sk_protocol; scalar_t__ sk_family; } ;
struct bpf_prog {scalar_t__ type; int len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (struct bpf_prog*) ;
 int FUNC_1 (struct bpf_prog*) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 struct bpf_prog* FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct bpf_prog*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct sock*,struct bpf_prog*) ;
 scalar_t__ FUNC_6 (struct sock*,int ) ;
 scalar_t__ VAR_13 ;

int FUNC_7(u32 VAR_14, struct sock *VAR_15)
{
 struct bpf_prog *VAR_16;
 int VAR_17;

 if (FUNC_6(VAR_15, VAR_11))
  return -VAR_7;

 VAR_16 = FUNC_2(VAR_14, VAR_3);
 if (FUNC_0(VAR_16) && FUNC_1(VAR_16) == -VAR_4)
  VAR_16 = FUNC_2(VAR_14, VAR_2);
 if (FUNC_0(VAR_16))
  return FUNC_1(VAR_16);

 if (VAR_16->type == VAR_2) {





  if ((VAR_15->sk_type != VAR_12 &&
       VAR_15->sk_type != VAR_10) ||
      (VAR_15->sk_protocol != VAR_9 &&
       VAR_15->sk_protocol != VAR_8) ||
      (VAR_15->sk_family != VAR_0 &&
       VAR_15->sk_family != VAR_1)) {
   VAR_17 = -VAR_6;
   goto err_prog_put;
  }
 } else {

  if (FUNC_4(VAR_16->len) > VAR_13) {
   VAR_17 = -VAR_5;
   goto err_prog_put;
  }
 }

 VAR_17 = FUNC_5(VAR_15, VAR_16);
err_prog_put:
 if (VAR_17)
  FUNC_3(VAR_16);

 return VAR_17;
}
