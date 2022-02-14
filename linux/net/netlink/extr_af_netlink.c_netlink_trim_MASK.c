
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int end; int tail; int truesize; int head; int * sk; } ;
typedef int gfp_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,int ,int,int) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_6(struct sk_buff *VAR_3, gfp_t VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_3->sk != ((void*)0));
 VAR_5 = VAR_3->end - VAR_3->tail;
 if (FUNC_2(VAR_3->head) || VAR_5 * 2 < VAR_3->truesize)
  return VAR_3;

 if (FUNC_5(VAR_3)) {
  struct sk_buff *VAR_6 = FUNC_4(VAR_3, VAR_4);
  if (!VAR_6)
   return VAR_3;
  FUNC_1(VAR_3);
  VAR_3 = VAR_6;
 }

 FUNC_3(VAR_3, 0, -VAR_5,
    (VAR_4 & ~VAR_0) |
    VAR_2 | VAR_1);
 return VAR_3;
}
