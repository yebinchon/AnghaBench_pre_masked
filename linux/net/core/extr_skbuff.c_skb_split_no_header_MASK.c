
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; int data_len; } ;
struct TYPE_2__ {int nr_frags; int * frags; } ;


 int FUNC_0 (int *,int const) ;
 int FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int const) ;
 int FUNC_4 (int *,int const) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_6(struct sk_buff *VAR_0,
           struct sk_buff* VAR_1,
           const u32 VAR_2, int VAR_3)
{
 int VAR_4, VAR_5 = 0;
 const int VAR_6 = FUNC_5(VAR_0)->nr_frags;

 FUNC_5(VAR_0)->nr_frags = 0;
 VAR_1->len = VAR_1->data_len = VAR_0->len - VAR_2;
 VAR_0->len = VAR_2;
 VAR_0->data_len = VAR_2 - VAR_3;

 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
  int VAR_7 = FUNC_2(&FUNC_5(VAR_0)->frags[VAR_4]);

  if (VAR_3 + VAR_7 > VAR_2) {
   FUNC_5(VAR_1)->frags[VAR_5] = FUNC_5(VAR_0)->frags[VAR_4];

   if (VAR_3 < VAR_2) {
    FUNC_1(VAR_0, VAR_4);
    FUNC_0(&FUNC_5(VAR_1)->frags[0], VAR_2 - VAR_3);
    FUNC_4(&FUNC_5(VAR_1)->frags[0], VAR_2 - VAR_3);
    FUNC_3(&FUNC_5(VAR_0)->frags[VAR_4], VAR_2 - VAR_3);
    FUNC_5(VAR_0)->nr_frags++;
   }
   VAR_5++;
  } else
   FUNC_5(VAR_0)->nr_frags++;
  VAR_3 += VAR_7;
 }
 FUNC_5(VAR_1)->nr_frags = VAR_5;
}
