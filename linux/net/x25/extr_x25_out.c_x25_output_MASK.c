
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pacsize_out; } ;
struct x25_sock {TYPE_2__* neighbour; TYPE_1__ facilities; } ;
struct sock {int sk_write_queue; } ;
struct sk_buff {int len; int * data; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {scalar_t__ extended; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sock*,char*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sk_buff*,unsigned char*,int) ;
 int FUNC_6 (struct sk_buff*,unsigned char*,int) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,int) ;
 unsigned char* FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (int *,struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_13 (struct sock*,int,int,int*) ;
 int FUNC_14 (int ) ;
 struct x25_sock* FUNC_15 (struct sock*) ;

int FUNC_16(struct sock *VAR_6, struct sk_buff *VAR_7)
{
 struct sk_buff *VAR_8;
 unsigned char VAR_9[VAR_2];
 int VAR_10, VAR_11, VAR_12;
 int VAR_13=0, VAR_14 = FUNC_1(VAR_7)->flags & VAR_1;
 struct x25_sock *VAR_15 = FUNC_15(VAR_6);
 int VAR_16 = VAR_15->neighbour->extended ? VAR_2 :
          VAR_4;
 int VAR_17 = FUNC_14(VAR_15->facilities.pacsize_out);

 if (VAR_7->len - VAR_16 > VAR_17) {

  FUNC_5(VAR_7, VAR_9, VAR_16);
  FUNC_8(VAR_7, VAR_16);

  VAR_11 = FUNC_7(VAR_7);

  while (VAR_7->len > 0) {
   FUNC_4(VAR_6);
   VAR_8 = FUNC_13(VAR_6, VAR_11 + VAR_17,
         VAR_14, &VAR_10);
   FUNC_3(VAR_6);
   if (!VAR_8) {
    if (VAR_10 == -VAR_0 && VAR_14){
     FUNC_2(VAR_7);
     return VAR_13;
    }
    FUNC_0(VAR_6, "x25_output: fragment alloc"
            " failed, err=%d, %d bytes "
            "sent\n", VAR_10, VAR_13);
    return VAR_10;
   }

   FUNC_12(VAR_8, VAR_11);

   VAR_12 = VAR_17 > VAR_7->len ? VAR_7->len : VAR_17;


   FUNC_5(VAR_7, FUNC_10(VAR_8, VAR_12), VAR_12);
   FUNC_8(VAR_7, VAR_12);


   FUNC_9(VAR_8, VAR_16);
   FUNC_6(VAR_8, VAR_9, VAR_16);

   if (VAR_7->len > 0) {
    if (VAR_15->neighbour->extended)
     VAR_8->data[3] |= VAR_3;
    else
     VAR_8->data[2] |= VAR_5;
   }

   FUNC_11(&VAR_6->sk_write_queue, VAR_8);
   VAR_13 += VAR_12;
  }

  FUNC_2(VAR_7);
 } else {
  FUNC_11(&VAR_6->sk_write_queue, VAR_7);
  VAR_13 = VAR_7->len - VAR_16;
 }
 return VAR_13;
}
