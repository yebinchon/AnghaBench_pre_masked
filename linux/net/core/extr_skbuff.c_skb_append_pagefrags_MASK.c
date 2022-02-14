
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct page {int dummy; } ;
struct TYPE_2__ {int nr_frags; int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int,struct page*,int) ;
 int FUNC_2 (struct sk_buff*,int,struct page*,int,size_t) ;
 int FUNC_3 (int *,size_t) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;

int FUNC_5(struct sk_buff *VAR_2, struct page *VAR_3,
    int VAR_4, size_t VAR_5)
{
 int VAR_6 = FUNC_4(VAR_2)->nr_frags;

 if (FUNC_1(VAR_2, VAR_6, VAR_3, VAR_4)) {
  FUNC_3(&FUNC_4(VAR_2)->frags[VAR_6 - 1], VAR_5);
 } else if (VAR_6 < VAR_1) {
  FUNC_0(VAR_3);
  FUNC_2(VAR_2, VAR_6, VAR_3, VAR_4, VAR_5);
 } else {
  return -VAR_0;
 }

 return 0;
}
