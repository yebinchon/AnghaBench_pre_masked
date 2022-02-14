
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ len; scalar_t__ data_len; } ;
struct TYPE_2__ {int nr_frags; int * frags; } ;


 int FUNC_0 (struct sk_buff*,scalar_t__ const,int ,scalar_t__ const) ;
 int FUNC_1 (struct sk_buff*,scalar_t__ const) ;
 int FUNC_2 (struct sk_buff*,scalar_t__ const) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_4(struct sk_buff *VAR_0,
        struct sk_buff* VAR_1,
        const u32 VAR_2, const int VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_0, VAR_2, FUNC_1(VAR_1, VAR_3 - VAR_2),
      VAR_3 - VAR_2);

 for (VAR_4 = 0; VAR_4 < FUNC_3(VAR_0)->nr_frags; VAR_4++)
  FUNC_3(VAR_1)->frags[VAR_4] = FUNC_3(VAR_0)->frags[VAR_4];

 FUNC_3(VAR_1)->nr_frags = FUNC_3(VAR_0)->nr_frags;
 FUNC_3(VAR_0)->nr_frags = 0;
 VAR_1->data_len = VAR_0->data_len;
 VAR_1->len += VAR_1->data_len;
 VAR_0->data_len = 0;
 VAR_0->len = VAR_2;
 FUNC_2(VAR_0, VAR_2);
}
