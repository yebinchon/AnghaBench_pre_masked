
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int (* sk_data_ready ) (struct sock*) ;int sk_receive_queue; int sk_state; } ;
struct sk_buff {unsigned short* data; int len; int destructor; struct sock* sk; } ;
struct nr_sock {int bpqext; unsigned short your_index; unsigned short your_id; int my_index; int my_id; unsigned short window; unsigned short t1; int condition; int state; scalar_t__ vl; scalar_t__ vr; scalar_t__ va; scalar_t__ vs; void* user_addr; void* dest_addr; void* source_addr; } ;
struct net_device {int dummy; } ;
typedef void* ax25_address ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int VAR_12 ;
 struct sock* FUNC_2 (void**) ;
 int FUNC_3 () ;
 struct sock* FUNC_4 (unsigned short,unsigned short,void**) ;
 struct sock* FUNC_5 (unsigned short,unsigned short) ;
 int FUNC_6 (struct sock*) ;
 struct sock* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,struct net_device*) ;
 struct nr_sock* FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sk_buff*,int ) ;
 int FUNC_14 (struct sk_buff*,int) ;
 int FUNC_15 (struct sock*,unsigned short) ;
 int FUNC_16 (struct sock*) ;
 scalar_t__ FUNC_17 (struct sock*) ;
 int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*,scalar_t__) ;
 int FUNC_20 (int *,struct sk_buff*) ;
 int FUNC_21 (struct sk_buff*) ;
 int VAR_13 ;
 int FUNC_22 (struct sock*,int ) ;
 int FUNC_23 (struct sock*) ;
 int FUNC_24 (struct sock*) ;
 int FUNC_25 (struct sock*) ;
 scalar_t__ VAR_14 ;

int FUNC_26(struct sk_buff *VAR_15, struct net_device *VAR_16)
{
 struct sock *VAR_17;
 struct sock *VAR_18;
 struct nr_sock *VAR_19;
 ax25_address *VAR_20, *VAR_21, *VAR_22;
 unsigned short VAR_23, VAR_24;
 unsigned short VAR_25, VAR_26;
 unsigned short VAR_27, VAR_28, VAR_29, VAR_30;
 int VAR_31;

 FUNC_18(VAR_15);





 VAR_20 = (ax25_address *)(VAR_15->data + 0);
 VAR_21 = (ax25_address *)(VAR_15->data + 7);

 VAR_23 = VAR_15->data[15];
 VAR_24 = VAR_15->data[16];
 VAR_25 = VAR_15->data[17];
 VAR_26 = VAR_15->data[18];
 VAR_27 = VAR_15->data[19] & 0x0F;
 VAR_28 = VAR_15->data[19] & 0xF0;




 if (VAR_27 == VAR_5 &&
     VAR_23 == VAR_6 && VAR_24 == VAR_6) {
  FUNC_19(VAR_15, VAR_4 + VAR_9);
  FUNC_21(VAR_15);

  return FUNC_9(VAR_15, VAR_16);
 }
 VAR_17 = ((void*)0);

 if (VAR_23 == 0 && VAR_24 == 0) {
  if (VAR_27 == VAR_2 && VAR_28 == VAR_1)
   VAR_17 = FUNC_4(VAR_25, VAR_26, VAR_20);
 } else {
  if (VAR_27 == VAR_3)
   VAR_17 = FUNC_4(VAR_23, VAR_24, VAR_20);
  else
   VAR_17 = FUNC_5(VAR_23, VAR_24);
 }

 if (VAR_17 != ((void*)0)) {
  FUNC_0(VAR_17);
  FUNC_21(VAR_15);

  if (VAR_27 == VAR_2 && VAR_15->len == 22)
   FUNC_10(VAR_17)->bpqext = 1;
  else
   FUNC_10(VAR_17)->bpqext = 0;

  VAR_31 = FUNC_8(VAR_17, VAR_15);
  FUNC_1(VAR_17);
  FUNC_24(VAR_17);
  return VAR_31;
 }




 if (VAR_27 != VAR_3) {
  if (VAR_14 &&
      (VAR_27 != VAR_7 || VAR_28 != 0))
   FUNC_14(VAR_15, 1);

  return 0;
 }

 VAR_17 = FUNC_2(VAR_21);

 VAR_22 = (ax25_address *)(VAR_15->data + 21);

 if (VAR_17 == ((void*)0) || FUNC_17(VAR_17) ||
     (VAR_18 = FUNC_7(VAR_17)) == ((void*)0)) {
  FUNC_13(VAR_15, 0);
  if (VAR_17)
   FUNC_24(VAR_17);
  return 0;
 }

 FUNC_0(VAR_17);

 VAR_29 = VAR_15->data[20];

 FUNC_23(VAR_18);
 VAR_15->sk = VAR_18;
 VAR_15->destructor = VAR_13;
 VAR_18->sk_state = VAR_11;


 VAR_19 = FUNC_10(VAR_18);
 VAR_19->source_addr = *VAR_21;
 VAR_19->dest_addr = *VAR_20;
 VAR_19->user_addr = *VAR_22;

 VAR_19->your_index = VAR_23;
 VAR_19->your_id = VAR_24;

 FUNC_1(VAR_17);
 VAR_12 = FUNC_3();
 FUNC_0(VAR_17);

 VAR_19->my_index = VAR_12 / 256;
 VAR_19->my_id = VAR_12 % 256;

 VAR_12++;


 if (VAR_29 < VAR_19->window)
  VAR_19->window = VAR_29;


 if (VAR_15->len == 37) {
  VAR_30 = VAR_15->data[36] * 256 + VAR_15->data[35];
  if (VAR_30 * VAR_0 < VAR_19->t1)
   VAR_19->t1 = VAR_30 * VAR_0;
  VAR_19->bpqext = 1;
 } else {
  VAR_19->bpqext = 0;
 }

 FUNC_15(VAR_18, VAR_2);

 VAR_19->condition = 0x00;
 VAR_19->vs = 0;
 VAR_19->va = 0;
 VAR_19->vr = 0;
 VAR_19->vl = 0;
 VAR_19->state = VAR_8;
 FUNC_16(VAR_17);
 FUNC_20(&VAR_17->sk_receive_queue, VAR_15);

 if (!FUNC_22(VAR_17, VAR_10))
  VAR_17->sk_data_ready(VAR_17);

 FUNC_1(VAR_17);
 FUNC_24(VAR_17);

 FUNC_6(VAR_18);

 FUNC_11(VAR_18);
 FUNC_12(VAR_18);

 return 1;
}
