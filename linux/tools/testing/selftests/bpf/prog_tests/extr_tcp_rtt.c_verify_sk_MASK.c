
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_rtt_storage {int icsk_retransmits; int delivered_ce; int delivered; int dsack_dups; int invoked; } ;
typedef int __u32 ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int*,struct tcp_rtt_storage*) ;
 int FUNC_2 (char*,char const*,int ,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(int VAR_0, int VAR_1, const char *VAR_2, __u32 VAR_3,
       __u32 VAR_4, __u32 VAR_5, __u32 VAR_6,
       __u32 VAR_7)
{
 int VAR_8 = 0;
 struct tcp_rtt_storage VAR_9;

 if (FUNC_0(FUNC_1(VAR_0, &VAR_1, &VAR_9) < 0)) {
  FUNC_3("Failed to read socket storage");
  return -1;
 }

 if (VAR_9.invoked != VAR_3) {
  FUNC_2("%s: unexpected bpf_tcp_sock.invoked %d != %d",
   VAR_2, VAR_9.invoked, VAR_3);
  VAR_8++;
 }

 if (VAR_9.dsack_dups != VAR_4) {
  FUNC_2("%s: unexpected bpf_tcp_sock.dsack_dups %d != %d",
   VAR_2, VAR_9.dsack_dups, VAR_4);
  VAR_8++;
 }

 if (VAR_9.delivered != VAR_5) {
  FUNC_2("%s: unexpected bpf_tcp_sock.delivered %d != %d",
   VAR_2, VAR_9.delivered, VAR_5);
  VAR_8++;
 }

 if (VAR_9.delivered_ce != VAR_6) {
  FUNC_2("%s: unexpected bpf_tcp_sock.delivered_ce %d != %d",
   VAR_2, VAR_9.delivered_ce, VAR_6);
  VAR_8++;
 }

 if (VAR_9.icsk_retransmits != VAR_7) {
  FUNC_2("%s: unexpected bpf_tcp_sock.icsk_retransmits %d != %d",
   VAR_2, VAR_9.icsk_retransmits, VAR_7);
  VAR_8++;
 }

 return VAR_8;
}
