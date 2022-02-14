
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
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int*,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct net_device*,int,int) ;
 int FUNC_4 (int*,int*,int*) ;
 int FUNC_5 (int*,int*,int) ;
 int FUNC_6 (struct sk_buff*,int*) ;
 int FUNC_7 (struct sk_buff*,int*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_9(struct sk_buff *VAR_5, struct net_device *VAR_6,
          struct packet_type *VAR_7)
{
 u8 *VAR_8;
 int VAR_9;
 int VAR_10;

 if (FUNC_8(!FUNC_6(VAR_5, VAR_1)))
  return ((void*)0);




 VAR_8 = VAR_5->data - 2;




 if ((VAR_8[0] & 0xc0) != 0x00 && (VAR_8[0] & 0xc0) != 0xc0)
  return ((void*)0);




 VAR_9 = VAR_8[0] & 0x1f;
 VAR_10 = (VAR_8[1] >> 3) & 0x1f;

 VAR_5->dev = FUNC_3(VAR_6, VAR_9, VAR_10);
 if (!VAR_5->dev)
  return ((void*)0);






 if (VAR_8[0] & 0x20) {
  u8 VAR_11[4];






  VAR_11[0] = (VAR_4 >> 8) & 0xff;
  VAR_11[1] = VAR_4 & 0xff;
  VAR_11[2] = VAR_8[2] & ~0x10;
  VAR_11[3] = VAR_8[3];





  if (VAR_8[1] & 0x01)
   VAR_11[2] |= 0x10;




  if (VAR_5->ip_summed == VAR_0) {
   __wsum VAR_12 = VAR_5->csum;
   VAR_12 = FUNC_0(VAR_12, FUNC_1(VAR_11 + 2, 2, 0));
   VAR_12 = FUNC_2(VAR_12, FUNC_1(VAR_8 + 2, 2, 0));
   VAR_5->csum = VAR_12;
  }

  FUNC_4(VAR_8, VAR_11, VAR_1);
 } else {



  FUNC_7(VAR_5, VAR_1);
  FUNC_5(VAR_5->data - VAR_3,
   VAR_5->data - VAR_3 - VAR_1,
   2 * VAR_2);
 }

 VAR_5->offload_fwd_mark = 1;

 return VAR_5;
}
