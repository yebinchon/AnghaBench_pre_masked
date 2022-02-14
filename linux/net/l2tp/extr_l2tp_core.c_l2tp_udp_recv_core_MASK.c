
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct udphdr {int dummy; } ;
struct sk_buff {int len; unsigned char* data; } ;
struct l2tp_tunnel {int debug; int version; int tunnel_id; int name; } ;
struct l2tp_session {int recv_skb; } ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (struct l2tp_tunnel*,int,char*,int ,int) ;
 int FUNC_3 (struct l2tp_tunnel*,int,char*,int ,int,...) ;
 int FUNC_4 (struct l2tp_session*,struct sk_buff*,unsigned char*,unsigned char*,int,int) ;
 int FUNC_5 (struct l2tp_session*) ;
 struct l2tp_session* FUNC_6 (struct l2tp_tunnel*,int) ;
 scalar_t__ FUNC_7 (struct l2tp_session*,struct sk_buff*,unsigned char**,unsigned char**) ;
 int FUNC_8 (unsigned int,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (char*,int ,unsigned char*,int) ;
 int FUNC_13 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_14(struct l2tp_tunnel *VAR_8, struct sk_buff *VAR_9)
{
 struct l2tp_session *VAR_10 = ((void*)0);
 unsigned char *VAR_11, *VAR_12;
 u16 VAR_13;
 u32 VAR_14, VAR_15;
 u16 VAR_16;
 int VAR_17;




 FUNC_0(VAR_9, sizeof(struct udphdr));


 if (!FUNC_13(VAR_9, VAR_3)) {
  FUNC_3(VAR_8, VAR_7,
     "%s: recv short packet (len=%d)\n",
     VAR_8->name, VAR_9->len);
  goto error;
 }


 if (VAR_8->debug & VAR_7) {
  VAR_17 = FUNC_8(32u, VAR_9->len);
  if (!FUNC_13(VAR_9, VAR_17))
   goto error;

  FUNC_11("%s: recv\n", VAR_8->name);
  FUNC_12("", VAR_0, VAR_9->data, VAR_17);
 }


 VAR_12 = VAR_11 = VAR_9->data;


 VAR_13 = FUNC_10(*(__be16 *) VAR_11);


 VAR_16 = VAR_13 & VAR_6;
 if (VAR_16 != VAR_8->version) {
  FUNC_3(VAR_8, VAR_7,
     "%s: recv protocol version mismatch: got %d expected %d\n",
     VAR_8->name, VAR_16, VAR_8->version);
  goto error;
 }


 VAR_17 = VAR_9->len;


 if (VAR_13 & VAR_2) {
  FUNC_2(VAR_8, VAR_7,
    "%s: recv control packet, len=%d\n",
    VAR_8->name, VAR_17);
  goto error;
 }


 VAR_11 += 2;

 if (VAR_8->version == VAR_4) {

  if (VAR_13 & VAR_1)
   VAR_11 += 2;


  VAR_14 = FUNC_10(*(__be16 *) VAR_11);
  VAR_11 += 2;
  VAR_15 = FUNC_10(*(__be16 *) VAR_11);
  VAR_11 += 2;
 } else {
  VAR_11 += 2;
  VAR_14 = VAR_8->tunnel_id;
  VAR_15 = FUNC_9(*(__be32 *) VAR_11);
  VAR_11 += 4;
 }


 VAR_10 = FUNC_6(VAR_8, VAR_15);
 if (!VAR_10 || !VAR_10->recv_skb) {
  if (VAR_10)
   FUNC_5(VAR_10);


  FUNC_3(VAR_8, VAR_7,
     "%s: no session found (%u/%u). Passing up.\n",
     VAR_8->name, VAR_14, VAR_15);
  goto error;
 }

 if (VAR_8->version == VAR_5 &&
     FUNC_7(VAR_10, VAR_9, &VAR_11, &VAR_12))
  goto error;

 FUNC_4(VAR_10, VAR_9, VAR_11, VAR_12, VAR_13, VAR_17);
 FUNC_5(VAR_10);

 return 0;

error:

 FUNC_1(VAR_9, sizeof(struct udphdr));

 return 1;
}
