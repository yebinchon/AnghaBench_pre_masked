
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; } ;
struct lapb_cb {int mode; int state; int dev; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct lapb_cb*,struct sk_buff*) ;
 int FUNC_2 (int,char*,int ,int ,int ) ;
 unsigned char* FUNC_3 (struct sk_buff*,int) ;

void FUNC_4(struct lapb_cb *VAR_8, struct sk_buff *VAR_9, int VAR_10)
{
 unsigned char *VAR_11;

 VAR_11 = FUNC_3(VAR_9, 1);

 if (VAR_8->mode & VAR_6) {
  if (VAR_8->mode & VAR_5) {
   if (VAR_10 == VAR_4)
    *VAR_11 = VAR_2;
   if (VAR_10 == VAR_7)
    *VAR_11 = VAR_3;
  } else {
   if (VAR_10 == VAR_4)
    *VAR_11 = VAR_3;
   if (VAR_10 == VAR_7)
    *VAR_11 = VAR_2;
  }
 } else {
  if (VAR_8->mode & VAR_5) {
   if (VAR_10 == VAR_4)
    *VAR_11 = VAR_0;
   if (VAR_10 == VAR_7)
    *VAR_11 = VAR_1;
  } else {
   if (VAR_10 == VAR_4)
    *VAR_11 = VAR_1;
   if (VAR_10 == VAR_7)
    *VAR_11 = VAR_0;
  }
 }

 FUNC_2(2, "(%p) S%d TX %3ph\n", VAR_8->dev, VAR_8->state, VAR_9->data);

 if (!FUNC_1(VAR_8, VAR_9))
  FUNC_0(VAR_9);
}
