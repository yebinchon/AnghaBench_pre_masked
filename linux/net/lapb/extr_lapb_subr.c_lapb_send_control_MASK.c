
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct lapb_cb {int mode; int vr; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 struct sk_buff* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct lapb_cb*,struct sk_buff*,int) ;
 unsigned char* FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,scalar_t__) ;

void FUNC_4(struct lapb_cb *VAR_7, int VAR_8,
         int VAR_9, int VAR_10)
{
 struct sk_buff *VAR_11;
 unsigned char *VAR_12;

 if ((VAR_11 = FUNC_0(VAR_3 + 3, VAR_0)) == ((void*)0))
  return;

 FUNC_3(VAR_11, VAR_3 + 1);

 if (VAR_7->mode & VAR_2) {
  if ((VAR_8 & VAR_6) == VAR_6) {
   VAR_12 = FUNC_2(VAR_11, 1);
   *VAR_12 = VAR_8;
   *VAR_12 |= VAR_9 ? VAR_5 : 0;
  } else {
   VAR_12 = FUNC_2(VAR_11, 2);
   VAR_12[0] = VAR_8;
   VAR_12[1] = (VAR_7->vr << 1);
   VAR_12[1] |= VAR_9 ? VAR_1 : 0;
  }
 } else {
  VAR_12 = FUNC_2(VAR_11, 1);
  *VAR_12 = VAR_8;
  *VAR_12 |= VAR_9 ? VAR_5 : 0;
  if ((VAR_8 & VAR_6) == VAR_4)
   *VAR_12 |= (VAR_7->vr << 5);
 }

 FUNC_1(VAR_7, VAR_11, VAR_10);
}
