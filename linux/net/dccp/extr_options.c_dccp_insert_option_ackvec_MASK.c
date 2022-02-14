
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ len; } ;
struct dccp_sock {scalar_t__ dccps_mss_cache; int dccps_sync_scheduled; struct dccp_ackvec* dccps_hc_rx_ackvec; } ;
struct dccp_skb_cb {scalar_t__ dccpd_opt_len; int dccpd_seq; int dccpd_type; } ;
struct dccp_ackvec {unsigned char* av_buf; int av_buf_head; int* av_buf_nonce; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct dccp_skb_cb* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (char*,int,scalar_t__,...) ;
 int FUNC_2 (int const,int) ;
 int VAR_5 ;
 int FUNC_3 (struct dccp_ackvec*) ;
 scalar_t__ FUNC_4 (struct dccp_ackvec*,int ,int) ;
 int FUNC_5 (int ) ;
 struct dccp_sock* FUNC_6 (struct sock*) ;
 int FUNC_7 (unsigned char*,unsigned char const*,int const) ;
 unsigned char* FUNC_8 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_9(struct sock *VAR_6, struct sk_buff *VAR_7)
{
 struct dccp_sock *VAR_8 = FUNC_6(VAR_6);
 struct dccp_ackvec *VAR_9 = VAR_8->dccps_hc_rx_ackvec;
 struct dccp_skb_cb *VAR_10 = FUNC_0(VAR_7);
 const u16 VAR_11 = FUNC_3(VAR_9);

 const u8 VAR_12 = FUNC_2(VAR_11, VAR_4);
 u16 VAR_13 = VAR_11 + 2 * VAR_12;
 u8 VAR_14, VAR_15 = 0;
 const unsigned char *VAR_16, *VAR_17;
 unsigned char *VAR_18;

 if (VAR_10->dccpd_opt_len + VAR_13 > VAR_3) {
  FUNC_1("Lacking space for %u bytes on %s packet\n", VAR_13,
     FUNC_5(VAR_10->dccpd_type));
  return -1;
 }





 if (VAR_13 > VAR_1 &&
     VAR_13 + VAR_10->dccpd_opt_len + VAR_7->len > VAR_8->dccps_mss_cache) {
  FUNC_1("No space left for Ack Vector (%u) on skb (%u+%u), "
     "MPS=%u ==> reduce payload size?\n", VAR_13, VAR_7->len,
     VAR_10->dccpd_opt_len, VAR_8->dccps_mss_cache);
  VAR_8->dccps_sync_scheduled = 1;
  return 0;
 }
 VAR_10->dccpd_opt_len += VAR_13;

 VAR_18 = FUNC_8(VAR_7, VAR_13);
 VAR_13 = VAR_11;
 VAR_17 = VAR_9->av_buf + VAR_9->av_buf_head;
 VAR_16 = VAR_9->av_buf + VAR_0;

 for (VAR_14 = 0; VAR_14 < VAR_12; ++VAR_14) {
  int VAR_19 = VAR_13;

  if (VAR_13 > VAR_4)
   VAR_19 = VAR_4;





  VAR_15 ^= VAR_9->av_buf_nonce[VAR_14];

  *VAR_18++ = VAR_2 + VAR_9->av_buf_nonce[VAR_14];
  *VAR_18++ = VAR_19 + 2;


  if (VAR_17 + VAR_19 > VAR_16) {
   const u16 VAR_20 = VAR_16 - VAR_17;

   FUNC_7(VAR_18, VAR_17, VAR_20);
   VAR_18 += VAR_20;
   VAR_13 -= VAR_20;
   VAR_19 -= VAR_20;
   VAR_17 = VAR_9->av_buf;
  }

  FUNC_7(VAR_18, VAR_17, VAR_19);
  VAR_17 += VAR_19;
  VAR_18 += VAR_19;
  VAR_13 -= VAR_19;
 }



 if (FUNC_4(VAR_9, VAR_10->dccpd_seq, VAR_15))
  return -VAR_5;
 return 0;
}
