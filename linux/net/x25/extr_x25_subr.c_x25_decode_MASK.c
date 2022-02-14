
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x25_sock {TYPE_1__* neighbour; } ;
struct sock {int dummy; } ;
struct sk_buff {unsigned char* data; } ;
struct TYPE_2__ {scalar_t__ extended; } ;






 unsigned char VAR_0 ;

 unsigned char VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;


 unsigned char VAR_5 ;


 unsigned char VAR_6 ;




 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 int VAR_9 ;
 unsigned char VAR_10 ;
 int FUNC_0 (char*,unsigned char*) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 struct x25_sock* FUNC_2 (struct sock*) ;

int FUNC_3(struct sock *VAR_11, struct sk_buff *VAR_12, int *VAR_13, int *VAR_14, int *VAR_15,
        int *VAR_16, int *VAR_17)
{
 struct x25_sock *VAR_18 = FUNC_2(VAR_11);
 unsigned char *VAR_19;

 if (!FUNC_1(VAR_12, VAR_9))
  return VAR_4;
 VAR_19 = VAR_12->data;

 *VAR_13 = *VAR_14 = *VAR_15 = *VAR_16 = *VAR_17 = 0;

 switch (VAR_19[2]) {
 case 139:
 case 140:
 case 137:
 case 138:
 case 135:
 case 134:
 case 130:
 case 131:
 case 128:
 case 129:
 case 132:
 case 133:
 case 136:
  return VAR_19[2];
 }

 if (VAR_18->neighbour->extended) {
  if (VAR_19[2] == VAR_8 ||
      VAR_19[2] == VAR_7 ||
      VAR_19[2] == VAR_6) {
   if (!FUNC_1(VAR_12, VAR_2))
    return VAR_4;
   VAR_19 = VAR_12->data;

   *VAR_14 = (VAR_19[3] >> 1) & 0x7F;
   return VAR_19[2];
  }
 } else {
  if ((VAR_19[2] & 0x1F) == VAR_8 ||
      (VAR_19[2] & 0x1F) == VAR_7 ||
      (VAR_19[2] & 0x1F) == VAR_6) {
   *VAR_14 = (VAR_19[2] >> 5) & 0x07;
   return VAR_19[2] & 0x1F;
  }
 }

 if (VAR_18->neighbour->extended) {
  if ((VAR_19[2] & 0x01) == VAR_0) {
   if (!FUNC_1(VAR_12, VAR_2))
    return VAR_4;
   VAR_19 = VAR_12->data;

   *VAR_15 = (VAR_19[0] & VAR_5) == VAR_5;
   *VAR_16 = (VAR_19[0] & VAR_1) == VAR_1;
   *VAR_17 = (VAR_19[3] & VAR_3) == VAR_3;
   *VAR_14 = (VAR_19[3] >> 1) & 0x7F;
   *VAR_13 = (VAR_19[2] >> 1) & 0x7F;
   return VAR_0;
  }
 } else {
  if ((VAR_19[2] & 0x01) == VAR_0) {
   *VAR_15 = (VAR_19[0] & VAR_5) == VAR_5;
   *VAR_16 = (VAR_19[0] & VAR_1) == VAR_1;
   *VAR_17 = (VAR_19[2] & VAR_10) == VAR_10;
   *VAR_14 = (VAR_19[2] >> 5) & 0x07;
   *VAR_13 = (VAR_19[2] >> 1) & 0x07;
   return VAR_0;
  }
 }

 FUNC_0("invalid PLP frame %3ph\n", VAR_19);

 return VAR_4;
}
