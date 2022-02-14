
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {void* data; } ;
struct cfpkt {TYPE_1__ skb; } ;


 int VAR_0 ;
 int FUNC_0 (struct cfpkt*,char*) ;
 int FUNC_1 (struct cfpkt*) ;
 int FUNC_2 (struct cfpkt*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct cfpkt *VAR_1,
    u16 (*VAR_2)(u16, void *, u16),
    u16 VAR_3)
{




 if (FUNC_4(FUNC_2(VAR_1)))
  return -VAR_0;
 if (FUNC_4(FUNC_3(&VAR_1->skb) != 0)) {
  FUNC_0(VAR_1, "linearize failed\n");
  return -VAR_0;
 }
 return VAR_2(VAR_3, VAR_1->skb.data, FUNC_1(VAR_1));
}
