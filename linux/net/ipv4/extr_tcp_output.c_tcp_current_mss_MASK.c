
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcphdr {int dummy; } ;
struct tcp_sock {scalar_t__ mss_cache; unsigned int tcp_header_len; } ;
struct tcp_out_options {int dummy; } ;
struct tcp_md5sig_key {int dummy; } ;
struct sock {int dummy; } ;
struct dst_entry {int dummy; } ;
struct TYPE_2__ {scalar_t__ icsk_pmtu_cookie; } ;


 struct dst_entry* FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (struct dst_entry const*) ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int *,struct tcp_out_options*,struct tcp_md5sig_key**) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (struct sock*,scalar_t__) ;

unsigned int FUNC_6(struct sock *VAR_0)
{
 const struct tcp_sock *VAR_1 = FUNC_4(VAR_0);
 const struct dst_entry *VAR_2 = FUNC_0(VAR_0);
 u32 VAR_3;
 unsigned int VAR_4;
 struct tcp_out_options VAR_5;
 struct tcp_md5sig_key *VAR_6;

 VAR_3 = VAR_1->mss_cache;

 if (VAR_2) {
  u32 VAR_7 = FUNC_1(VAR_2);
  if (VAR_7 != FUNC_2(VAR_0)->icsk_pmtu_cookie)
   VAR_3 = FUNC_5(VAR_0, VAR_7);
 }

 VAR_4 = FUNC_3(VAR_0, ((void*)0), &VAR_5, &VAR_6) +
       sizeof(struct tcphdr);




 if (VAR_4 != VAR_1->tcp_header_len) {
  int VAR_8 = (int) VAR_4 - VAR_1->tcp_header_len;
  VAR_3 -= VAR_8;
 }

 return VAR_3;
}
