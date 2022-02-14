
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_7__ {int state; } ;
typedef TYPE_1__ ax25_cb ;





 int FUNC_0 (TYPE_1__*,struct sk_buff*,int*,int*,int*) ;
 int FUNC_1 (TYPE_1__*,struct sk_buff*,int,int,int) ;
 int FUNC_2 (TYPE_1__*,struct sk_buff*,int,int,int) ;
 int FUNC_3 (TYPE_1__*,struct sk_buff*,int,int,int,int,int) ;

int FUNC_4(ax25_cb *VAR_0, struct sk_buff *VAR_1, int VAR_2)
{
 int VAR_3 = 0, VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_5, &VAR_6, &VAR_7);

 switch (VAR_0->state) {
 case 130:
  VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_4, VAR_7, VAR_2);
  break;
 case 129:
  VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_4, VAR_7, VAR_2);
  break;
 case 128:
  VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_4, VAR_5, VAR_6, VAR_7, VAR_2);
  break;
 }

 return VAR_3;
}
