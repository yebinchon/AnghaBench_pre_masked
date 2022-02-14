
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int addr; } ;
struct sta_info {int sdata; TYPE_1__ sta; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (void*) ;
 int FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (int ,char*,int ) ;
 struct sk_buff* FUNC_3 (struct sta_info*) ;
 int FUNC_4 (struct sta_info*,int ) ;

__attribute__((used)) static void FUNC_5(struct sta_info *VAR_2)
{
 struct sk_buff *VAR_3;

 VAR_3 = FUNC_3(VAR_2);
 if (!VAR_3)
  return;

 FUNC_2(VAR_2->sdata, "announcing peer-specific power mode to %pM\n",
  VAR_2->sta.addr);


 if (!FUNC_4(VAR_2, VAR_1)) {
  u8 *VAR_4 = FUNC_0((void *) VAR_3->data);

  VAR_4[0] |= VAR_0;
 }

 FUNC_1(VAR_2->sdata, VAR_3);
}
