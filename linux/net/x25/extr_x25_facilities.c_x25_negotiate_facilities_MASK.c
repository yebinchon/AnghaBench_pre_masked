
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int theirs ;
struct x25_facilities {int reverse; int throughput; scalar_t__ pacsize_in; scalar_t__ pacsize_out; scalar_t__ winsize_in; scalar_t__ winsize_out; } ;
struct x25_sock {int vc_facil_mask; struct x25_facilities facilities; } ;
struct x25_dte_facilities {int reverse; int throughput; scalar_t__ pacsize_in; scalar_t__ pacsize_out; scalar_t__ winsize_in; scalar_t__ winsize_out; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sock*,char*) ;
 int FUNC_1 (struct x25_facilities*,struct x25_facilities*,int) ;
 int FUNC_2 (struct x25_facilities*,int ,int) ;
 int FUNC_3 (struct sk_buff*,struct x25_facilities*,struct x25_facilities*,int *) ;
 struct x25_sock* FUNC_4 (struct sock*) ;

int FUNC_5(struct sk_buff *VAR_0, struct sock *VAR_1,
  struct x25_facilities *VAR_2, struct x25_dte_facilities *VAR_3)
{
 struct x25_sock *VAR_4 = FUNC_4(VAR_1);
 struct x25_facilities *VAR_5 = &VAR_4->facilities;
 struct x25_facilities VAR_6;
 int VAR_7;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 FUNC_1(VAR_2, VAR_5, sizeof(*VAR_2));
 FUNC_2(VAR_3, 0, sizeof(*VAR_3));

 VAR_7 = FUNC_3(VAR_0, &VAR_6, VAR_3, &VAR_4->vc_facil_mask);
 if (VAR_7 < 0)
  return VAR_7;




 if ((VAR_6.reverse & 0x01 ) && (VAR_5->reverse & 0x01)) {
  FUNC_0(VAR_1, "X.25: rejecting reverse charging request\n");
  return -1;
 }

 VAR_2->reverse = VAR_6.reverse;

 if (VAR_6.throughput) {
  int VAR_8 = VAR_6.throughput & 0x0f;
  int VAR_9 = VAR_6.throughput & 0xf0;
  int VAR_10 = VAR_5->throughput & 0x0f;
  int VAR_11 = VAR_5->throughput & 0xf0;
  if (!VAR_10 || VAR_8 < VAR_10) {
   FUNC_0(VAR_1, "X.25: inbound throughput negotiated\n");
   VAR_2->throughput = (VAR_2->throughput & 0xf0) | VAR_8;
  }
  if (!VAR_11 || VAR_9 < VAR_11) {
   FUNC_0(VAR_1,
    "X.25: outbound throughput negotiated\n");
   VAR_2->throughput = (VAR_2->throughput & 0x0f) | VAR_9;
  }
 }

 if (VAR_6.pacsize_in && VAR_6.pacsize_out) {
  if (VAR_6.pacsize_in < VAR_5->pacsize_in) {
   FUNC_0(VAR_1, "X.25: packet size inwards negotiated down\n");
   VAR_2->pacsize_in = VAR_6.pacsize_in;
  }
  if (VAR_6.pacsize_out < VAR_5->pacsize_out) {
   FUNC_0(VAR_1, "X.25: packet size outwards negotiated down\n");
   VAR_2->pacsize_out = VAR_6.pacsize_out;
  }
 }

 if (VAR_6.winsize_in && VAR_6.winsize_out) {
  if (VAR_6.winsize_in < VAR_5->winsize_in) {
   FUNC_0(VAR_1, "X.25: window size inwards negotiated down\n");
   VAR_2->winsize_in = VAR_6.winsize_in;
  }
  if (VAR_6.winsize_out < VAR_5->winsize_out) {
   FUNC_0(VAR_1, "X.25: window size outwards negotiated down\n");
   VAR_2->winsize_out = VAR_6.winsize_out;
  }
 }

 return VAR_7;
}
