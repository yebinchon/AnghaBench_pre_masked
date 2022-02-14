
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int* data; scalar_t__ ip_summed; int offload_fwd_mark; int csum; int dev; } ;
struct packet_type {int dummy; } ;
struct net_device {int dummy; } ;
typedef int __wsum ;


 scalar_t__ VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int*,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct net_device*,int,int) ;
 int FUNC_4 (int*,int*,int*) ;
 int FUNC_5 (int*,int*,int) ;
 int FUNC_6 (struct sk_buff*,int*) ;
 int FUNC_7 (struct sk_buff*,int*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_9(struct sk_buff *VAR_6, struct net_device *VAR_7,
    struct packet_type *VAR_8)
{
 u8 *VAR_9;
 int VAR_10;
 int VAR_11;

 if (FUNC_8(!FUNC_6(VAR_6, VAR_2)))
  return ((void*)0);




 VAR_9 = VAR_6->data + 2;




 if ((VAR_9[0] & 0xc0) != 0x00 && (VAR_9[0] & 0xc0) != 0xc0)
  return ((void*)0);




 VAR_10 = VAR_9[0] & 0x1f;
 VAR_11 = (VAR_9[1] >> 3) & 0x1f;

 VAR_6->dev = FUNC_3(VAR_7, VAR_10, VAR_11);
 if (!VAR_6->dev)
  return ((void*)0);






 if (VAR_9[0] & 0x20) {
  u8 VAR_12[4];






  VAR_12[0] = (VAR_5 >> 8) & 0xff;
  VAR_12[1] = VAR_5 & 0xff;
  VAR_12[2] = VAR_9[2] & ~0x10;
  VAR_12[3] = VAR_9[3];





  if (VAR_9[1] & 0x01)
   VAR_12[2] |= 0x10;

  FUNC_7(VAR_6, VAR_1);




  if (VAR_6->ip_summed == VAR_0) {
   __wsum VAR_13 = VAR_6->csum;
   VAR_13 = FUNC_0(VAR_13, FUNC_1(VAR_12 + 2, 2, 0));
   VAR_13 = FUNC_2(VAR_13, FUNC_1(VAR_9 + 2, 2, 0));
   VAR_6->csum = VAR_13;
  }

  FUNC_4(VAR_9, VAR_12, VAR_1);

  FUNC_5(VAR_6->data - VAR_4,
   VAR_6->data - VAR_4 - VAR_1,
   2 * VAR_3);
 } else {



  FUNC_7(VAR_6, VAR_2);
  FUNC_5(VAR_6->data - VAR_4,
   VAR_6->data - VAR_4 - VAR_2,
   2 * VAR_3);
 }

 VAR_6->offload_fwd_mark = 1;

 return VAR_6;
}
