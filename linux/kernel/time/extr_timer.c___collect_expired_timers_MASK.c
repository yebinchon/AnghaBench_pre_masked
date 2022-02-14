
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_base {unsigned long clk; struct hlist_head* vectors; int pending_map; } ;
struct hlist_head {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct hlist_head*,int ) ;

__attribute__((used)) static int FUNC_2(struct timer_base *VAR_5,
        struct hlist_head *VAR_6)
{
 unsigned long VAR_7 = VAR_5->clk;
 struct hlist_head *VAR_8;
 int VAR_9, VAR_10 = 0;
 unsigned int VAR_11;

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  VAR_11 = (VAR_7 & VAR_3) + VAR_9 * VAR_4;

  if (FUNC_0(VAR_11, VAR_5->pending_map)) {
   VAR_8 = VAR_5->vectors + VAR_11;
   FUNC_1(VAR_8, VAR_6++);
   VAR_10++;
  }

  if (VAR_7 & VAR_0)
   break;

  VAR_7 >>= VAR_1;
 }
 return VAR_10;
}
