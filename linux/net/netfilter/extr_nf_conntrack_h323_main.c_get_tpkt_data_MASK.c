
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int doff; } ;
struct sk_buff {int len; } ;
struct nf_ct_h323_master {int* tpkt_len; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef int _tcph ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 struct tcphdr* VAR_0 ;
 struct nf_ct_h323_master* FUNC_2 (struct nf_conn*) ;
 int FUNC_3 (char*,...) ;
 void* FUNC_4 (struct sk_buff*,int,int,struct tcphdr*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_1, unsigned int VAR_2,
    struct nf_conn *VAR_3, enum ip_conntrack_info VAR_4,
    unsigned char **VAR_5, int *VAR_6, int *VAR_7)
{
 struct nf_ct_h323_master *VAR_8 = FUNC_2(VAR_3);
 int VAR_9 = FUNC_1(VAR_4);
 const struct tcphdr *VAR_10;
 struct tcphdr VAR_11;
 int VAR_12;
 int VAR_13;
 unsigned char *VAR_14;
 int VAR_15;
 int VAR_16;


 VAR_10 = FUNC_4(VAR_1, VAR_2, sizeof(VAR_11), &VAR_11);
 if (VAR_10 == ((void*)0))
  return 0;


 VAR_13 = VAR_2 + VAR_10->doff * 4;


 VAR_12 = VAR_1->len - VAR_13;
 if (VAR_12 <= 0)
  goto clear_out;

 if (*VAR_5 == ((void*)0)) {

  VAR_14 = FUNC_4(VAR_1, VAR_13, VAR_12,
       VAR_0);
  FUNC_0(VAR_14 == ((void*)0));


  if (VAR_12 < 4 || VAR_14[0] != 0x03 || VAR_14[1] != 0) {

   if (VAR_8->tpkt_len[VAR_9] > 0) {
    FUNC_3("nf_ct_h323: previous packet "
      "indicated separate TPKT data of %hu "
      "bytes\n", VAR_8->tpkt_len[VAR_9]);
    if (VAR_8->tpkt_len[VAR_9] <= VAR_12) {


     *VAR_5 = VAR_14;
     *VAR_6 = VAR_8->tpkt_len[VAR_9];
     *VAR_7 = 0;
     goto out;
    }


    FUNC_3("nf_ct_h323: fragmented TPKT\n");
    goto clear_out;
   }


   return 0;
  }
  VAR_16 = 0;
 } else {
  VAR_16 = *VAR_7 + *VAR_6;
  VAR_12 -= VAR_16;
  if (VAR_12 <= 4)
   goto clear_out;
  VAR_14 = *VAR_5 + *VAR_6;


  if (VAR_14[0] != 0x03 || VAR_14[1] != 0)
   goto clear_out;
 }


 VAR_15 = VAR_14[2] * 256 + VAR_14[3];
 if (VAR_15 < 4)
  goto clear_out;
 if (VAR_15 > VAR_12) {
  if (VAR_12 == 4) {

   FUNC_3("nf_ct_h323: separate TPKT header indicates "
     "there will be TPKT data of %hu bytes\n",
     VAR_15 - 4);
   VAR_8->tpkt_len[VAR_9] = VAR_15 - 4;
   return 0;
  }

  FUNC_3("nf_ct_h323: incomplete TPKT (fragmented?)\n");
  goto clear_out;
 }


 *VAR_5 = VAR_14 + 4;
 *VAR_6 = VAR_15 - 4;
 *VAR_7 = VAR_16 + 4;

      out:

 VAR_8->tpkt_len[VAR_9] = 0;
 return 1;

      clear_out:
 VAR_8->tpkt_len[VAR_9] = 0;
 return 0;
}
